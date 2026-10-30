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

// Function: sub_003540B8
// Address: 0x3540b8 - 0x354178
void sub_003540B8_0x3540b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003540B8_0x3540b8");
#endif

    switch (ctx->pc) {
        case 0x3540d0u: goto label_3540d0;
        case 0x3540f0u: goto label_3540f0;
        case 0x3540f8u: goto label_3540f8;
        case 0x35415cu: goto label_35415c;
        default: break;
    }

    ctx->pc = 0x3540b8u;

    // 0x3540b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3540b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3540bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3540bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3540c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3540c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3540c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3540c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3540c8: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x3540C8u;
    SET_GPR_U32(ctx, 31, 0x3540D0u);
    ctx->pc = 0x3540CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3540C8u;
    // 0x3540cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x3540C8u, 0x3540D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540D0u;
label_3540d0:
    // 0x3540d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3540d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540d4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3540d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3540d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3540d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3540dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3540DCu;
    {
        const bool branch_taken_0x3540dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3540E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3540DCu;
        // 0x3540e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3540dc) {
            ctx->pc = 0x3540F0u;
            goto label_3540f0;
        }
    }
    ctx->pc = 0x3540E4u;
    // 0x3540e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3540e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540e8: 0xc0d497e  jal         func_3525F8
    ctx->pc = 0x3540E8u;
    SET_GPR_U32(ctx, 31, 0x3540F0u);
    ctx->pc = 0x3540ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3540E8u;
    // 0x3540ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3525F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3525F8u, 0x3540E8u, 0x3540F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540F0u;
label_3540f0:
    // 0x3540f0: 0xc0d4c08  jal         func_353020
    ctx->pc = 0x3540F0u;
    SET_GPR_U32(ctx, 31, 0x3540F8u);
    ctx->pc = 0x3540F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3540F0u;
    // 0x3540f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353020u, 0x3540F0u, 0x3540F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540F8u;
label_3540f8:
    // 0x3540f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3540f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540fc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3540FCu;
    {
        const bool branch_taken_0x3540fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x354100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3540FCu;
        // 0x354100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3540fc) {
            ctx->pc = 0x354164u;
            goto label_354164;
        }
    }
    ctx->pc = 0x354104u;
    // 0x354104: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x354104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x354108: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x354108u;
    {
        const bool branch_taken_0x354108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354108) {
            ctx->pc = 0x35410Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354108u;
            // 0x35410c: 0x90620022  lbu         $v0, 0x22($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354128u;
            goto label_354128;
        }
    }
    ctx->pc = 0x354110u;
    // 0x354110: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x354110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x354114: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x354114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x354118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x354118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35411c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354120: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x354120u;
    {
        const bool branch_taken_0x354120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354120u;
        // 0x354124: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x354120) {
            ctx->pc = 0x354154u;
            goto label_354154;
        }
    }
    ctx->pc = 0x354128u;
label_354128:
    // 0x354128: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x354128u;
    {
        const bool branch_taken_0x354128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354128) {
            ctx->pc = 0x35412Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354128u;
            // 0x35412c: 0x90620021  lbu         $v0, 0x21($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354138u;
            goto label_354138;
        }
    }
    ctx->pc = 0x354130u;
    // 0x354130: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354130u;
    {
        const bool branch_taken_0x354130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354130u;
        // 0x354134: 0x8c6300a8  lw          $v1, 0xA8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354130) {
            ctx->pc = 0x354144u;
            goto label_354144;
        }
    }
    ctx->pc = 0x354138u;
label_354138:
    // 0x354138: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x354138u;
    {
        const bool branch_taken_0x354138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354138u;
        // 0x35413c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354138) {
            ctx->pc = 0x354164u;
            goto label_354164;
        }
    }
    ctx->pc = 0x354140u;
    // 0x354140: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x354140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_354144:
    // 0x354144: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x354144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x354148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x354148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35414c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354150: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x354150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_354154:
    // 0x354154: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x354154u;
    SET_GPR_U32(ctx, 31, 0x35415Cu);
    ctx->pc = 0x354158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354154u;
    // 0x354158: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x354154u, 0x35415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35415Cu;
label_35415c:
    // 0x35415c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35415Cu;
    {
        const bool branch_taken_0x35415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35415Cu;
        // 0x354160: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35415c) {
            ctx->pc = 0x354168u;
            goto label_354168;
        }
    }
    ctx->pc = 0x354164u;
label_354164:
    // 0x354164: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x354164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_354168:
    // 0x354168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x354168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35416c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35416cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354170: 0x3e00008  jr          $ra
    ctx->pc = 0x354170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354170u;
        // 0x354174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354178u;
}
