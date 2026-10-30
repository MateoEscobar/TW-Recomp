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

// Function: sub_00461998
// Address: 0x461998 - 0x461a30
void sub_00461998_0x461998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461998_0x461998");
#endif

    switch (ctx->pc) {
        case 0x461998u: goto label_461998;
        case 0x46199cu: goto label_46199c;
        case 0x4619a0u: goto label_4619a0;
        case 0x4619a4u: goto label_4619a4;
        case 0x4619a8u: goto label_4619a8;
        case 0x4619acu: goto label_4619ac;
        case 0x4619b0u: goto label_4619b0;
        case 0x4619b4u: goto label_4619b4;
        case 0x4619b8u: goto label_4619b8;
        case 0x4619bcu: goto label_4619bc;
        case 0x4619c0u: goto label_4619c0;
        case 0x4619c4u: goto label_4619c4;
        case 0x4619c8u: goto label_4619c8;
        case 0x4619ccu: goto label_4619cc;
        case 0x4619d0u: goto label_4619d0;
        case 0x4619d4u: goto label_4619d4;
        case 0x4619d8u: goto label_4619d8;
        case 0x4619dcu: goto label_4619dc;
        case 0x4619e0u: goto label_4619e0;
        case 0x4619e4u: goto label_4619e4;
        case 0x4619e8u: goto label_4619e8;
        case 0x4619ecu: goto label_4619ec;
        case 0x4619f0u: goto label_4619f0;
        case 0x4619f4u: goto label_4619f4;
        case 0x4619f8u: goto label_4619f8;
        case 0x4619fcu: goto label_4619fc;
        case 0x461a00u: goto label_461a00;
        case 0x461a04u: goto label_461a04;
        case 0x461a08u: goto label_461a08;
        case 0x461a0cu: goto label_461a0c;
        case 0x461a10u: goto label_461a10;
        case 0x461a14u: goto label_461a14;
        case 0x461a18u: goto label_461a18;
        case 0x461a1cu: goto label_461a1c;
        case 0x461a20u: goto label_461a20;
        case 0x461a24u: goto label_461a24;
        case 0x461a28u: goto label_461a28;
        case 0x461a2cu: goto label_461a2c;
        default: break;
    }

    ctx->pc = 0x461998u;

label_461998:
    // 0x461998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x461998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_46199c:
    // 0x46199c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x46199cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4619a0:
    // 0x4619a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4619a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4619a4:
    // 0x4619a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4619a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4619a8:
    // 0x4619a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4619a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4619ac:
    // 0x4619ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4619acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4619b0:
    // 0x4619b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4619b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4619b4:
    // 0x4619b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4619b8:
    if (ctx->pc == 0x4619B8u) {
        ctx->pc = 0x4619B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4619B4u;
        // 0x4619b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4619BCu;
        goto label_4619bc;
    }
    ctx->pc = 0x4619B4u;
    {
        const bool branch_taken_0x4619b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4619B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4619B4u;
        // 0x4619b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4619b4) {
            ctx->pc = 0x4619F0u;
            goto label_4619f0;
        }
    }
    ctx->pc = 0x4619BCu;
label_4619bc:
    // 0x4619bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4619bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4619c0:
    // 0x4619c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4619c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4619c4:
    // 0x4619c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4619c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4619c8:
    // 0x4619c8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4619c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4619cc:
    // 0x4619cc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4619d0:
    if (ctx->pc == 0x4619D0u) {
        ctx->pc = 0x4619D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4619CCu;
        // 0x4619d0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4619D4u;
        goto label_4619d4;
    }
    ctx->pc = 0x4619CCu;
    {
        const bool branch_taken_0x4619cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4619cc) {
            ctx->pc = 0x4619D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4619CCu;
            // 0x4619d0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4619E0u;
            goto label_4619e0;
        }
    }
    ctx->pc = 0x4619D4u;
label_4619d4:
    // 0x4619d4: 0xc1295f2  jal         func_4A57C8
label_4619d8:
    if (ctx->pc == 0x4619D8u) {
        ctx->pc = 0x4619DCu;
        goto label_4619dc;
    }
    ctx->pc = 0x4619D4u;
    SET_GPR_U32(ctx, 31, 0x4619DCu);
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x4619D4u, 0x4619DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4619DCu;
label_4619dc:
    // 0x4619dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4619dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4619e0:
    // 0x4619e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4619e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4619e4:
    // 0x4619e4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4619e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4619e8:
    // 0x4619e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4619ec:
    if (ctx->pc == 0x4619ECu) {
        ctx->pc = 0x4619ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4619E8u;
        // 0x4619ec: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4619F0u;
        goto label_4619f0;
    }
    ctx->pc = 0x4619E8u;
    {
        const bool branch_taken_0x4619e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4619ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4619E8u;
        // 0x4619ec: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4619e8) {
            ctx->pc = 0x4619C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4619c0;
        }
    }
    ctx->pc = 0x4619F0u;
label_4619f0:
    // 0x4619f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4619f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4619f4:
    // 0x4619f4: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4619f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4619f8:
    // 0x4619f8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x4619f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_4619fc:
    // 0x4619fc: 0x60f809  jalr        $v1
label_461a00:
    if (ctx->pc == 0x461A00u) {
        ctx->pc = 0x461A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4619FCu;
        // 0x461a00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461A04u;
        goto label_461a04;
    }
    ctx->pc = 0x4619FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x461A04u);
        ctx->pc = 0x461A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4619FCu;
        // 0x461a00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4619FCu, 0x461A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461A04u;
label_461a04:
    // 0x461a04: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x461a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_461a08:
    // 0x461a08: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x461a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_461a0c:
    // 0x461a0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x461a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_461a10:
    // 0x461a10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x461a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_461a14:
    // 0x461a14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x461a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_461a18:
    // 0x461a18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x461a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_461a1c:
    // 0x461a1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x461a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461a20:
    // 0x461a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x461a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_461a24:
    // 0x461a24: 0x3e00008  jr          $ra
label_461a28:
    if (ctx->pc == 0x461A28u) {
        ctx->pc = 0x461A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461A24u;
        // 0x461a28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461A2Cu;
        goto label_461a2c;
    }
    ctx->pc = 0x461A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461A24u;
        // 0x461a28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461A2Cu;
label_461a2c:
    // 0x461a2c: 0x0  nop
    ctx->pc = 0x461a2cu;
    // NOP
    ctx->pc = 0x461a30u;
}
