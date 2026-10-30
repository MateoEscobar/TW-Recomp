#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F328
// Address: 0x19f328 - 0x19f430
void sub_0019F328_0x19f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F328_0x19f328");
#endif

    switch (ctx->pc) {
        case 0x19f3b8u: goto label_19f3b8;
        case 0x19f400u: goto label_19f400;
        default: break;
    }

    ctx->pc = 0x19f328u;

    // 0x19f328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f32c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f338: 0x8e020448  lw          $v0, 0x448($s0)
    ctx->pc = 0x19f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1096)));
    // 0x19f33c: 0x8e04044c  lw          $a0, 0x44C($s0)
    ctx->pc = 0x19f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1100)));
    // 0x19f340: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19F340u;
    {
        const bool branch_taken_0x19f340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f340) {
            ctx->pc = 0x19F344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F340u;
            // 0x19f344: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F348u;
            goto label_19f348;
        }
    }
    ctx->pc = 0x19F348u;
label_19f348:
    // 0x19f348: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x19f348u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x19f34c: 0x1810  mfhi        $v1
    ctx->pc = 0x19f34cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19f350: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F350u;
            // 0x19f354: 0x8e02044c  lw          $v0, 0x44C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F380u;
            goto label_19f380;
        }
    }
    ctx->pc = 0x19F358u;
    // 0x19f358: 0x8e020450  lw          $v0, 0x450($s0)
    ctx->pc = 0x19f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x19f35c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19f364: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F364u;
    {
        const bool branch_taken_0x19f364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F364u;
        // 0x19f368: 0xae020450  sw          $v0, 0x450($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f364) {
            ctx->pc = 0x19F370u;
            goto label_19f370;
        }
    }
    ctx->pc = 0x19F36Cu;
    // 0x19f36c: 0xae000450  sw          $zero, 0x450($s0)
    ctx->pc = 0x19f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1104), GPR_U32(ctx, 0));
label_19f370:
    // 0x19f370: 0x8e02044c  lw          $v0, 0x44C($s0)
    ctx->pc = 0x19f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1100)));
    // 0x19f374: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19F374u;
    {
        const bool branch_taken_0x19f374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f374) {
            ctx->pc = 0x19F378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F374u;
            // 0x19f378: 0xae00044c  sw          $zero, 0x44C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F37Cu;
            goto label_19f37c;
        }
    }
    ctx->pc = 0x19F37Cu;
label_19f37c:
    // 0x19f37c: 0x8e02044c  lw          $v0, 0x44C($s0)
    ctx->pc = 0x19f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1100)));
label_19f380:
    // 0x19f380: 0x8e040454  lw          $a0, 0x454($s0)
    ctx->pc = 0x19f380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x19f384: 0x8e050458  lw          $a1, 0x458($s0)
    ctx->pc = 0x19f384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1112)));
    // 0x19f388: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19f38c: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x19f38cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19f390: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19F390u;
    {
        const bool branch_taken_0x19f390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F390u;
        // 0x19f394: 0xae02044c  sw          $v0, 0x44C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f390) {
            ctx->pc = 0x19F3C0u;
            goto label_19f3c0;
        }
    }
    ctx->pc = 0x19F398u;
    // 0x19f398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f39c: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x19f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x19f3a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x19f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x19f3a4: 0x8e020450  lw          $v0, 0x450($s0)
    ctx->pc = 0x19f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x19f3a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f3ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19f3b0: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x19F3B0u;
    SET_GPR_U32(ctx, 31, 0x19F3B8u);
    ctx->pc = 0x19F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F3B0u;
    // 0x19f3b4: 0x8c450440  lw          $a1, 0x440($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x19F3B0u, 0x19F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F3B8u;
label_19f3b8:
    // 0x19f3b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19F3B8u;
    {
        const bool branch_taken_0x19f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B8u;
        // 0x19f3bc: 0x8e020458  lw          $v0, 0x458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3b8) {
            ctx->pc = 0x19F408u;
            goto label_19f408;
        }
    }
    ctx->pc = 0x19F3C0u;
label_19f3c0:
    // 0x19f3c0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x19f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x19f3c4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19f3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19f3c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F3C8u;
    {
        const bool branch_taken_0x19f3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f3c8) {
            ctx->pc = 0x19F3D8u;
            goto label_19f3d8;
        }
    }
    ctx->pc = 0x19F3D0u;
    // 0x19f3d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19F3D0u;
    {
        const bool branch_taken_0x19f3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D0u;
        // 0x19f3d4: 0xae000488  sw          $zero, 0x488($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3d0) {
            ctx->pc = 0x19F404u;
            goto label_19f404;
        }
    }
    ctx->pc = 0x19F3D8u;
label_19f3d8:
    // 0x19f3d8: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19F3D8u;
    {
        const bool branch_taken_0x19f3d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f3d8) {
            ctx->pc = 0x19F3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F3D8u;
            // 0x19f3dc: 0x8e020458  lw          $v0, 0x458($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F408u;
            goto label_19f408;
        }
    }
    ctx->pc = 0x19F3E0u;
    // 0x19f3e0: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x19f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x19f3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f3e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x19f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x19f3ec: 0x8e020450  lw          $v0, 0x450($s0)
    ctx->pc = 0x19f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x19f3f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f3f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19f3f8: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x19F3F8u;
    SET_GPR_U32(ctx, 31, 0x19F400u);
    ctx->pc = 0x19F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F3F8u;
    // 0x19f3fc: 0x8c450440  lw          $a1, 0x440($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x19F3F8u, 0x19F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F400u;
label_19f400:
    // 0x19f400: 0xae000454  sw          $zero, 0x454($s0)
    ctx->pc = 0x19f400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 0));
label_19f404:
    // 0x19f404: 0x8e020458  lw          $v0, 0x458($s0)
    ctx->pc = 0x19f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1112)));
label_19f408:
    // 0x19f408: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F408u;
    {
        const bool branch_taken_0x19f408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f408) {
            ctx->pc = 0x19F40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F408u;
            // 0x19f40c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F420u;
            goto label_19f420;
        }
    }
    ctx->pc = 0x19F410u;
    // 0x19f410: 0x8e020454  lw          $v0, 0x454($s0)
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x19f414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19f414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19f418: 0xae020454  sw          $v0, 0x454($s0)
    ctx->pc = 0x19f418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1108), GPR_U32(ctx, 2));
    // 0x19f41c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f420:
    // 0x19f420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f424: 0x3e00008  jr          $ra
    ctx->pc = 0x19F424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F424u;
        // 0x19f428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F42Cu;
    // 0x19f42c: 0x0  nop
    ctx->pc = 0x19f42cu;
    // NOP
    ctx->pc = 0x19f430u;
}
