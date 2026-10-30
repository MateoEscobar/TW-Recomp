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

// Function: sub_00385A50
// Address: 0x385a50 - 0x385b08
void sub_00385A50_0x385a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385A50_0x385a50");
#endif

    switch (ctx->pc) {
        case 0x385a50u: goto label_385a50;
        case 0x385a54u: goto label_385a54;
        case 0x385a58u: goto label_385a58;
        case 0x385a5cu: goto label_385a5c;
        case 0x385a60u: goto label_385a60;
        case 0x385a64u: goto label_385a64;
        case 0x385a68u: goto label_385a68;
        case 0x385a6cu: goto label_385a6c;
        case 0x385a70u: goto label_385a70;
        case 0x385a74u: goto label_385a74;
        case 0x385a78u: goto label_385a78;
        case 0x385a7cu: goto label_385a7c;
        case 0x385a80u: goto label_385a80;
        case 0x385a84u: goto label_385a84;
        case 0x385a88u: goto label_385a88;
        case 0x385a8cu: goto label_385a8c;
        case 0x385a90u: goto label_385a90;
        case 0x385a94u: goto label_385a94;
        case 0x385a98u: goto label_385a98;
        case 0x385a9cu: goto label_385a9c;
        case 0x385aa0u: goto label_385aa0;
        case 0x385aa4u: goto label_385aa4;
        case 0x385aa8u: goto label_385aa8;
        case 0x385aacu: goto label_385aac;
        case 0x385ab0u: goto label_385ab0;
        case 0x385ab4u: goto label_385ab4;
        case 0x385ab8u: goto label_385ab8;
        case 0x385abcu: goto label_385abc;
        case 0x385ac0u: goto label_385ac0;
        case 0x385ac4u: goto label_385ac4;
        case 0x385ac8u: goto label_385ac8;
        case 0x385accu: goto label_385acc;
        case 0x385ad0u: goto label_385ad0;
        case 0x385ad4u: goto label_385ad4;
        case 0x385ad8u: goto label_385ad8;
        case 0x385adcu: goto label_385adc;
        case 0x385ae0u: goto label_385ae0;
        case 0x385ae4u: goto label_385ae4;
        case 0x385ae8u: goto label_385ae8;
        case 0x385aecu: goto label_385aec;
        case 0x385af0u: goto label_385af0;
        case 0x385af4u: goto label_385af4;
        case 0x385af8u: goto label_385af8;
        case 0x385afcu: goto label_385afc;
        case 0x385b00u: goto label_385b00;
        case 0x385b04u: goto label_385b04;
        default: break;
    }

    ctx->pc = 0x385a50u;

label_385a50:
    // 0x385a50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x385a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_385a54:
    // 0x385a54: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x385a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_385a58:
    // 0x385a58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x385a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_385a5c:
    // 0x385a5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x385a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_385a60:
    // 0x385a60: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x385a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_385a64:
    // 0x385a64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x385a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_385a68:
    // 0x385a68: 0xc0e4060  jal         func_390180
label_385a6c:
    if (ctx->pc == 0x385A6Cu) {
        ctx->pc = 0x385A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A68u;
        // 0x385a6c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A70u;
        goto label_385a70;
    }
    ctx->pc = 0x385A68u;
    SET_GPR_U32(ctx, 31, 0x385A70u);
    ctx->pc = 0x385A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A68u;
    // 0x385a6c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385A68u, 0x385A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A70u;
label_385a70:
    // 0x385a70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x385a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385a74:
    // 0x385a74: 0xc08a61a  jal         func_229868
label_385a78:
    if (ctx->pc == 0x385A78u) {
        ctx->pc = 0x385A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A74u;
        // 0x385a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A7Cu;
        goto label_385a7c;
    }
    ctx->pc = 0x385A74u;
    SET_GPR_U32(ctx, 31, 0x385A7Cu);
    ctx->pc = 0x385A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A74u;
    // 0x385a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x385A74u, 0x385A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A7Cu;
label_385a7c:
    // 0x385a7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_385a80:
    if (ctx->pc == 0x385A80u) {
        ctx->pc = 0x385A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A7Cu;
        // 0x385a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A84u;
        goto label_385a84;
    }
    ctx->pc = 0x385A7Cu;
    {
        const bool branch_taken_0x385a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A7Cu;
        // 0x385a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a7c) {
            ctx->pc = 0x385A9Cu;
            goto label_385a9c;
        }
    }
    ctx->pc = 0x385A84u;
label_385a84:
    // 0x385a84: 0xc087420  jal         func_21D080
label_385a88:
    if (ctx->pc == 0x385A88u) {
        ctx->pc = 0x385A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A84u;
        // 0x385a88: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A8Cu;
        goto label_385a8c;
    }
    ctx->pc = 0x385A84u;
    SET_GPR_U32(ctx, 31, 0x385A8Cu);
    ctx->pc = 0x385A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A84u;
    // 0x385a88: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x385A84u, 0x385A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A8Cu;
label_385a8c:
    // 0x385a8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385a8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385a90:
    // 0x385a90: 0x2604bd20  addiu       $a0, $s0, -0x42E0
    ctx->pc = 0x385a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950176));
label_385a94:
    // 0x385a94: 0x10000014  b           . + 4 + (0x14 << 2)
label_385a98:
    if (ctx->pc == 0x385A98u) {
        ctx->pc = 0x385A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A94u;
        // 0x385a98: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A9Cu;
        goto label_385a9c;
    }
    ctx->pc = 0x385A94u;
    {
        const bool branch_taken_0x385a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A94u;
        // 0x385a98: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a94) {
            ctx->pc = 0x385AE8u;
            goto label_385ae8;
        }
    }
    ctx->pc = 0x385A9Cu;
label_385a9c:
    // 0x385a9c: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_385aa0:
    if (ctx->pc == 0x385AA0u) {
        ctx->pc = 0x385AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A9Cu;
        // 0x385aa0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385AA4u;
        goto label_385aa4;
    }
    ctx->pc = 0x385A9Cu;
    {
        const bool branch_taken_0x385a9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x385AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A9Cu;
        // 0x385aa0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a9c) {
            ctx->pc = 0x385ACCu;
            goto label_385acc;
        }
    }
    ctx->pc = 0x385AA4u;
label_385aa4:
    // 0x385aa4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x385aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_385aa8:
    // 0x385aa8: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x385aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_385aac:
    // 0x385aac: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x385aacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_385ab0:
    // 0x385ab0: 0x2611bd20  addiu       $s1, $s0, -0x42E0
    ctx->pc = 0x385ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950176));
label_385ab4:
    // 0x385ab4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x385ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_385ab8:
    // 0x385ab8: 0x60f809  jalr        $v1
label_385abc:
    if (ctx->pc == 0x385ABCu) {
        ctx->pc = 0x385ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AB8u;
        // 0x385abc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385AC0u;
        goto label_385ac0;
    }
    ctx->pc = 0x385AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385AC0u);
        ctx->pc = 0x385ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AB8u;
        // 0x385abc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385AB8u, 0x385AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385AC0u;
label_385ac0:
    // 0x385ac0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x385ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_385ac4:
    // 0x385ac4: 0x10000008  b           . + 4 + (0x8 << 2)
label_385ac8:
    if (ctx->pc == 0x385AC8u) {
        ctx->pc = 0x385AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AC4u;
        // 0x385ac8: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385ACCu;
        goto label_385acc;
    }
    ctx->pc = 0x385AC4u;
    {
        const bool branch_taken_0x385ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AC4u;
        // 0x385ac8: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ac4) {
            ctx->pc = 0x385AE8u;
            goto label_385ae8;
        }
    }
    ctx->pc = 0x385ACCu;
label_385acc:
    // 0x385acc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x385accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_385ad0:
    // 0x385ad0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x385ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_385ad4:
    // 0x385ad4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x385ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_385ad8:
    // 0x385ad8: 0x2485bd20  addiu       $a1, $a0, -0x42E0
    ctx->pc = 0x385ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950176));
label_385adc:
    // 0x385adc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385adcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385ae0:
    // 0x385ae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385ae4:
    // 0x385ae4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x385ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_385ae8:
    // 0x385ae8: 0x2602bd20  addiu       $v0, $s0, -0x42E0
    ctx->pc = 0x385ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950176));
label_385aec:
    // 0x385aec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x385aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_385af0:
    // 0x385af0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x385af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_385af4:
    // 0x385af4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x385af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_385af8:
    // 0x385af8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x385af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_385afc:
    // 0x385afc: 0x3e00008  jr          $ra
label_385b00:
    if (ctx->pc == 0x385B00u) {
        ctx->pc = 0x385B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AFCu;
        // 0x385b00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B04u;
        goto label_385b04;
    }
    ctx->pc = 0x385AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AFCu;
        // 0x385b00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385B04u;
label_385b04:
    // 0x385b04: 0x0  nop
    ctx->pc = 0x385b04u;
    // NOP
    ctx->pc = 0x385b08u;
}
