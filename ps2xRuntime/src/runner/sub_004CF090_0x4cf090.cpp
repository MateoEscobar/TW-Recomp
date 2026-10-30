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

// Function: sub_004CF090
// Address: 0x4cf090 - 0x4cf188
void sub_004CF090_0x4cf090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF090_0x4cf090");
#endif

    switch (ctx->pc) {
        case 0x4cf0bcu: goto label_4cf0bc;
        case 0x4cf0e0u: goto label_4cf0e0;
        case 0x4cf0e8u: goto label_4cf0e8;
        default: break;
    }

    ctx->pc = 0x4cf090u;

    // 0x4cf090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cf090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cf094: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4cf094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4cf098: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4cf098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4cf09c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4cf09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf0a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4cf0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4cf0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cf0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf0a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4cf0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf0ac: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4cf0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4cf0b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cf0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf0b4: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4CF0B4u;
    SET_GPR_U32(ctx, 31, 0x4CF0BCu);
    ctx->pc = 0x4CF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF0B4u;
    // 0x4cf0b8: 0x2406013c  addiu       $a2, $zero, 0x13C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4CF0B4u, 0x4CF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF0BCu;
label_4cf0bc:
    // 0x4cf0bc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4cf0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4cf0c0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4cf0c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4cf0c4: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CF0C4u;
    {
        const bool branch_taken_0x4cf0c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf0c4) {
            ctx->pc = 0x4CF0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CF0C4u;
            // 0x4cf0c8: 0xafb2000c  sw          $s2, 0xC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CF0D4u;
            goto label_4cf0d4;
        }
    }
    ctx->pc = 0x4CF0CCu;
    // 0x4cf0cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4CF0CCu;
    {
        const bool branch_taken_0x4cf0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF0CCu;
        // 0x4cf0d0: 0xae320098  sw          $s2, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf0cc) {
            ctx->pc = 0x4CF11Cu;
            goto label_4cf11c;
        }
    }
    ctx->pc = 0x4CF0D4u;
label_4cf0d4:
    // 0x4cf0d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4cf0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf0d8: 0xc13344c  jal         func_4CD130
    ctx->pc = 0x4CF0D8u;
    SET_GPR_U32(ctx, 31, 0x4CF0E0u);
    ctx->pc = 0x4CF0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF0D8u;
    // 0x4cf0dc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD130u, 0x4CF0D8u, 0x4CF0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF0E0u;
label_4cf0e0:
    // 0x4cf0e0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4CF0E0u;
    {
        const bool branch_taken_0x4cf0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF0E0u;
        // 0x4cf0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf0e0) {
            ctx->pc = 0x4CF16Cu;
            goto label_4cf16c;
        }
    }
    ctx->pc = 0x4CF0E8u;
label_4cf0e8:
    // 0x4cf0e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4cf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf0ec: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x4cf0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4cf0f0: 0x0  nop
    ctx->pc = 0x4cf0f0u;
    // NOP
    // 0x4cf0f4: 0x0  nop
    ctx->pc = 0x4cf0f4u;
    // NOP
    // 0x4cf0f8: 0x0  nop
    ctx->pc = 0x4cf0f8u;
    // NOP
    // 0x4cf0fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CF0FCu;
    {
        const bool branch_taken_0x4cf0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf0fc) {
            ctx->pc = 0x4CF0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cf0e8;
        }
    }
    ctx->pc = 0x4CF104u;
    // 0x4cf104: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4cf104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf108: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4cf108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4cf10c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4CF10Cu;
    {
        const bool branch_taken_0x4cf10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF10Cu;
        // 0x4cf110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf10c) {
            ctx->pc = 0x4CF16Cu;
            goto label_4cf16c;
        }
    }
    ctx->pc = 0x4CF114u;
    // 0x4cf114: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4cf114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cf118: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x4cf118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
label_4cf11c:
    // 0x4cf11c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x4cf11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x4cf120: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x4cf120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x4cf124: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4cf124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4cf128: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4cf128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x4cf12c: 0x3c07004d  lui         $a3, 0x4D
    ctx->pc = 0x4cf12cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)77 << 16));
    // 0x4cf130: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x4cf130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x4cf134: 0x2442f440  addiu       $v0, $v0, -0xBC0
    ctx->pc = 0x4cf134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964288));
    // 0x4cf138: 0x2463f188  addiu       $v1, $v1, -0xE78
    ctx->pc = 0x4cf138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963592));
    // 0x4cf13c: 0x2484eac0  addiu       $a0, $a0, -0x1540
    ctx->pc = 0x4cf13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
    // 0x4cf140: 0x24a5f398  addiu       $a1, $a1, -0xC68
    ctx->pc = 0x4cf140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964120));
    // 0x4cf144: 0x24c6f3a8  addiu       $a2, $a2, -0xC58
    ctx->pc = 0x4cf144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964136));
    // 0x4cf148: 0x24e7f280  addiu       $a3, $a3, -0xD80
    ctx->pc = 0x4cf148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963840));
    // 0x4cf14c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x4cf14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x4cf150: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cf150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cf154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cf154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cf158: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x4cf158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x4cf15c: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x4cf15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x4cf160: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x4cf160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x4cf164: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x4cf164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x4cf168: 0xae310094  sw          $s1, 0x94($s1)
    ctx->pc = 0x4cf168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 17));
label_4cf16c:
    // 0x4cf16c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4cf16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cf170: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4cf170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cf174: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4cf174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cf178: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4cf178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cf17c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF17Cu;
        // 0x4cf180: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CF17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CF184u;
    // 0x4cf184: 0x0  nop
    ctx->pc = 0x4cf184u;
    // NOP
    ctx->pc = 0x4cf188u;
}
