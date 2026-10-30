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

// Function: sub_003246C0
// Address: 0x3246c0 - 0x324750
void sub_003246C0_0x3246c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003246C0_0x3246c0");
#endif

    switch (ctx->pc) {
        case 0x3246ecu: goto label_3246ec;
        case 0x324710u: goto label_324710;
        case 0x324730u: goto label_324730;
        default: break;
    }

    ctx->pc = 0x3246c0u;

    // 0x3246c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3246c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3246c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3246c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3246c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3246c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3246cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3246ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3246d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3246d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3246d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3246d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3246d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3246d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3246dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3246dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3246e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3246e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3246e4: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3246E4u;
    SET_GPR_U32(ctx, 31, 0x3246ECu);
    ctx->pc = 0x3246E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3246E4u;
    // 0x3246e8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3246E4u, 0x3246ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3246ECu;
label_3246ec:
    // 0x3246ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3246ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3246f0: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3246F0u;
    {
        const bool branch_taken_0x3246f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3246F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246F0u;
        // 0x3246f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246f0) {
            ctx->pc = 0x324724u;
            goto label_324724;
        }
    }
    ctx->pc = 0x3246F8u;
    // 0x3246f8: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3246F8u;
    {
        const bool branch_taken_0x3246f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3246f8) {
            ctx->pc = 0x3246FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3246F8u;
            // 0x3246fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324730u;
            goto label_324730;
        }
    }
    ctx->pc = 0x324700u;
    // 0x324700: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324700u;
    {
        const bool branch_taken_0x324700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324700u;
        // 0x324704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324700) {
            ctx->pc = 0x324718u;
            goto label_324718;
        }
    }
    ctx->pc = 0x324708u;
    // 0x324708: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x324708u;
    SET_GPR_U32(ctx, 31, 0x324710u);
    ctx->pc = 0x32470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324708u;
    // 0x32470c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x324708u, 0x324710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324710u;
label_324710:
    // 0x324710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x324710u;
    {
        const bool branch_taken_0x324710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324710u;
        // 0x324714: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324710) {
            ctx->pc = 0x32471Cu;
            goto label_32471c;
        }
    }
    ctx->pc = 0x324718u;
label_324718:
    // 0x324718: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x324718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_32471c:
    // 0x32471c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32471Cu;
    {
        const bool branch_taken_0x32471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32471Cu;
        // 0x324720: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32471c) {
            ctx->pc = 0x324730u;
            goto label_324730;
        }
    }
    ctx->pc = 0x324724u;
label_324724:
    // 0x324724: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x324724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324728: 0xc0c9192  jal         func_324648
    ctx->pc = 0x324728u;
    SET_GPR_U32(ctx, 31, 0x324730u);
    ctx->pc = 0x32472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324728u;
    // 0x32472c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x324728u, 0x324730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324730u;
label_324730:
    // 0x324730: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x324730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324734: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x324734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x324738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32473c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32473cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324744: 0x3e00008  jr          $ra
    ctx->pc = 0x324744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324744u;
        // 0x324748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32474Cu;
    // 0x32474c: 0x0  nop
    ctx->pc = 0x32474cu;
    // NOP
    ctx->pc = 0x324750u;
}
