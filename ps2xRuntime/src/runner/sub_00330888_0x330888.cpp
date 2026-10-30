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

// Function: sub_00330888
// Address: 0x330888 - 0x330958
void sub_00330888_0x330888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330888_0x330888");
#endif

    switch (ctx->pc) {
        case 0x3308d0u: goto label_3308d0;
        case 0x3308f0u: goto label_3308f0;
        case 0x330908u: goto label_330908;
        case 0x330918u: goto label_330918;
        default: break;
    }

    ctx->pc = 0x330888u;

    // 0x330888: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x330888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x33088c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x33088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x330890: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x330890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x330894: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x330894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330898: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x330898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x33089c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x33089cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3308a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3308a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3308a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3308a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3308ac: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3308acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3308b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3308b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3308b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308b8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3308b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3308bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3308bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3308c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3308c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3308C4u;
    {
        const bool branch_taken_0x3308c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3308C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308C4u;
        // 0x3308c8: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308c4) {
            ctx->pc = 0x3308D4u;
            goto label_3308d4;
        }
    }
    ctx->pc = 0x3308CCu;
    // 0x3308cc: 0x0  nop
    ctx->pc = 0x3308ccu;
    // NOP
label_3308d0:
    // 0x3308d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3308d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3308d4:
    // 0x3308d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3308d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3308d8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3308d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3308dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3308DCu;
    {
        const bool branch_taken_0x3308dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3308E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308DCu;
        // 0x3308e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308dc) {
            ctx->pc = 0x3308F8u;
            goto label_3308f8;
        }
    }
    ctx->pc = 0x3308E4u;
    // 0x3308e4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3308e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3308e8: 0xc0cc1d2  jal         func_330748
    ctx->pc = 0x3308E8u;
    SET_GPR_U32(ctx, 31, 0x3308F0u);
    ctx->pc = 0x3308ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3308E8u;
    // 0x3308ec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330748u, 0x3308E8u, 0x3308F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308F0u;
label_3308f0:
    // 0x3308f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3308F0u;
    {
        const bool branch_taken_0x3308f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3308f0) {
            ctx->pc = 0x3308F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3308F0u;
            // 0x3308f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3308D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3308d0;
        }
    }
    ctx->pc = 0x3308F8u;
label_3308f8:
    // 0x3308f8: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3308F8u;
    {
        const bool branch_taken_0x3308f8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3308FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308F8u;
        // 0x3308fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308f8) {
            ctx->pc = 0x330930u;
            goto label_330930;
        }
    }
    ctx->pc = 0x330900u;
    // 0x330900: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x330900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330904: 0x0  nop
    ctx->pc = 0x330904u;
    // NOP
label_330908:
    // 0x330908: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x330908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x33090c: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x33090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x330910: 0xc0cc2f0  jal         func_330BC0
    ctx->pc = 0x330910u;
    SET_GPR_U32(ctx, 31, 0x330918u);
    ctx->pc = 0x330914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330910u;
    // 0x330914: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BC0u, 0x330910u, 0x330918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330918u;
label_330918:
    // 0x330918: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x330918u;
    {
        const bool branch_taken_0x330918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330918) {
            ctx->pc = 0x33091Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330918u;
            // 0x33091c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330934u;
            goto label_330934;
        }
    }
    ctx->pc = 0x330920u;
    // 0x330920: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x330920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x330924: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x330924u;
    {
        const bool branch_taken_0x330924 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x330928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330924u;
        // 0x330928: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330924) {
            ctx->pc = 0x330908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330908;
        }
    }
    ctx->pc = 0x33092Cu;
    // 0x33092c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33092cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330930:
    // 0x330930: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x330930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_330934:
    // 0x330934: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x330934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x330938: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x330938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33093c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x33093cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330940: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x330940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330944: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x330944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330948: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x330948u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33094c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33094cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330950: 0x3e00008  jr          $ra
    ctx->pc = 0x330950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330950u;
        // 0x330954: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330958u;
}
