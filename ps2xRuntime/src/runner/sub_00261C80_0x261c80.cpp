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

// Function: sub_00261C80
// Address: 0x261c80 - 0x261e78
void sub_00261C80_0x261c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261C80_0x261c80");
#endif

    switch (ctx->pc) {
        case 0x261c80u: goto label_261c80;
        case 0x261c84u: goto label_261c84;
        case 0x261c88u: goto label_261c88;
        case 0x261c8cu: goto label_261c8c;
        case 0x261c90u: goto label_261c90;
        case 0x261c94u: goto label_261c94;
        case 0x261c98u: goto label_261c98;
        case 0x261c9cu: goto label_261c9c;
        case 0x261ca0u: goto label_261ca0;
        case 0x261ca4u: goto label_261ca4;
        case 0x261ca8u: goto label_261ca8;
        case 0x261cacu: goto label_261cac;
        case 0x261cb0u: goto label_261cb0;
        case 0x261cb4u: goto label_261cb4;
        case 0x261cb8u: goto label_261cb8;
        case 0x261cbcu: goto label_261cbc;
        case 0x261cc0u: goto label_261cc0;
        case 0x261cc4u: goto label_261cc4;
        case 0x261cc8u: goto label_261cc8;
        case 0x261cccu: goto label_261ccc;
        case 0x261cd0u: goto label_261cd0;
        case 0x261cd4u: goto label_261cd4;
        case 0x261cd8u: goto label_261cd8;
        case 0x261cdcu: goto label_261cdc;
        case 0x261ce0u: goto label_261ce0;
        case 0x261ce4u: goto label_261ce4;
        case 0x261ce8u: goto label_261ce8;
        case 0x261cecu: goto label_261cec;
        case 0x261cf0u: goto label_261cf0;
        case 0x261cf4u: goto label_261cf4;
        case 0x261cf8u: goto label_261cf8;
        case 0x261cfcu: goto label_261cfc;
        case 0x261d00u: goto label_261d00;
        case 0x261d04u: goto label_261d04;
        case 0x261d08u: goto label_261d08;
        case 0x261d0cu: goto label_261d0c;
        case 0x261d10u: goto label_261d10;
        case 0x261d14u: goto label_261d14;
        case 0x261d18u: goto label_261d18;
        case 0x261d1cu: goto label_261d1c;
        case 0x261d20u: goto label_261d20;
        case 0x261d24u: goto label_261d24;
        case 0x261d28u: goto label_261d28;
        case 0x261d2cu: goto label_261d2c;
        case 0x261d30u: goto label_261d30;
        case 0x261d34u: goto label_261d34;
        case 0x261d38u: goto label_261d38;
        case 0x261d3cu: goto label_261d3c;
        case 0x261d40u: goto label_261d40;
        case 0x261d44u: goto label_261d44;
        case 0x261d48u: goto label_261d48;
        case 0x261d4cu: goto label_261d4c;
        case 0x261d50u: goto label_261d50;
        case 0x261d54u: goto label_261d54;
        case 0x261d58u: goto label_261d58;
        case 0x261d5cu: goto label_261d5c;
        case 0x261d60u: goto label_261d60;
        case 0x261d64u: goto label_261d64;
        case 0x261d68u: goto label_261d68;
        case 0x261d6cu: goto label_261d6c;
        case 0x261d70u: goto label_261d70;
        case 0x261d74u: goto label_261d74;
        case 0x261d78u: goto label_261d78;
        case 0x261d7cu: goto label_261d7c;
        case 0x261d80u: goto label_261d80;
        case 0x261d84u: goto label_261d84;
        case 0x261d88u: goto label_261d88;
        case 0x261d8cu: goto label_261d8c;
        case 0x261d90u: goto label_261d90;
        case 0x261d94u: goto label_261d94;
        case 0x261d98u: goto label_261d98;
        case 0x261d9cu: goto label_261d9c;
        case 0x261da0u: goto label_261da0;
        case 0x261da4u: goto label_261da4;
        case 0x261da8u: goto label_261da8;
        case 0x261dacu: goto label_261dac;
        case 0x261db0u: goto label_261db0;
        case 0x261db4u: goto label_261db4;
        case 0x261db8u: goto label_261db8;
        case 0x261dbcu: goto label_261dbc;
        case 0x261dc0u: goto label_261dc0;
        case 0x261dc4u: goto label_261dc4;
        case 0x261dc8u: goto label_261dc8;
        case 0x261dccu: goto label_261dcc;
        case 0x261dd0u: goto label_261dd0;
        case 0x261dd4u: goto label_261dd4;
        case 0x261dd8u: goto label_261dd8;
        case 0x261ddcu: goto label_261ddc;
        case 0x261de0u: goto label_261de0;
        case 0x261de4u: goto label_261de4;
        case 0x261de8u: goto label_261de8;
        case 0x261decu: goto label_261dec;
        case 0x261df0u: goto label_261df0;
        case 0x261df4u: goto label_261df4;
        case 0x261df8u: goto label_261df8;
        case 0x261dfcu: goto label_261dfc;
        case 0x261e00u: goto label_261e00;
        case 0x261e04u: goto label_261e04;
        case 0x261e08u: goto label_261e08;
        case 0x261e0cu: goto label_261e0c;
        case 0x261e10u: goto label_261e10;
        case 0x261e14u: goto label_261e14;
        case 0x261e18u: goto label_261e18;
        case 0x261e1cu: goto label_261e1c;
        case 0x261e20u: goto label_261e20;
        case 0x261e24u: goto label_261e24;
        case 0x261e28u: goto label_261e28;
        case 0x261e2cu: goto label_261e2c;
        case 0x261e30u: goto label_261e30;
        case 0x261e34u: goto label_261e34;
        case 0x261e38u: goto label_261e38;
        case 0x261e3cu: goto label_261e3c;
        case 0x261e40u: goto label_261e40;
        case 0x261e44u: goto label_261e44;
        case 0x261e48u: goto label_261e48;
        case 0x261e4cu: goto label_261e4c;
        case 0x261e50u: goto label_261e50;
        case 0x261e54u: goto label_261e54;
        case 0x261e58u: goto label_261e58;
        case 0x261e5cu: goto label_261e5c;
        case 0x261e60u: goto label_261e60;
        case 0x261e64u: goto label_261e64;
        case 0x261e68u: goto label_261e68;
        case 0x261e6cu: goto label_261e6c;
        case 0x261e70u: goto label_261e70;
        case 0x261e74u: goto label_261e74;
        default: break;
    }

    ctx->pc = 0x261c80u;

label_261c80:
    // 0x261c80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x261c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_261c84:
    // 0x261c84: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x261c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_261c88:
    // 0x261c88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x261c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_261c8c:
    // 0x261c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x261c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261c90:
    // 0x261c90: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x261c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_261c94:
    // 0x261c94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x261c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261c98:
    // 0x261c98: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x261c98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_261c9c:
    // 0x261c9c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x261c9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_261ca0:
    // 0x261ca0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x261ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_261ca4:
    // 0x261ca4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x261ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_261ca8:
    // 0x261ca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x261ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_261cac:
    // 0x261cac: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x261cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_261cb0:
    // 0x261cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_261cb4:
    // 0x261cb4: 0xc095142  jal         func_254508
label_261cb8:
    if (ctx->pc == 0x261CB8u) {
        ctx->pc = 0x261CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CB4u;
        // 0x261cb8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CBCu;
        goto label_261cbc;
    }
    ctx->pc = 0x261CB4u;
    SET_GPR_U32(ctx, 31, 0x261CBCu);
    ctx->pc = 0x261CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CB4u;
    // 0x261cb8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x261CB4u, 0x261CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CBCu;
label_261cbc:
    // 0x261cbc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x261cbcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_261cc0:
    // 0x261cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261cc4:
    // 0x261cc4: 0xc040596  jal         func_101658
label_261cc8:
    if (ctx->pc == 0x261CC8u) {
        ctx->pc = 0x261CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CC4u;
        // 0x261cc8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CCCu;
        goto label_261ccc;
    }
    ctx->pc = 0x261CC4u;
    SET_GPR_U32(ctx, 31, 0x261CCCu);
    ctx->pc = 0x261CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CC4u;
    // 0x261cc8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x261CC4u, 0x261CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CCCu;
label_261ccc:
    // 0x261ccc: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_261cd0:
    if (ctx->pc == 0x261CD0u) {
        ctx->pc = 0x261CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CCCu;
        // 0x261cd0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CD4u;
        goto label_261cd4;
    }
    ctx->pc = 0x261CCCu;
    {
        const bool branch_taken_0x261ccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x261CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CCCu;
        // 0x261cd0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ccc) {
            ctx->pc = 0x261D18u;
            goto label_261d18;
        }
    }
    ctx->pc = 0x261CD4u;
label_261cd4:
    // 0x261cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261cd8:
    // 0x261cd8: 0xc08a658  jal         func_229960
label_261cdc:
    if (ctx->pc == 0x261CDCu) {
        ctx->pc = 0x261CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CD8u;
        // 0x261cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CE0u;
        goto label_261ce0;
    }
    ctx->pc = 0x261CD8u;
    SET_GPR_U32(ctx, 31, 0x261CE0u);
    ctx->pc = 0x261CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CD8u;
    // 0x261cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x261CD8u, 0x261CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CE0u;
label_261ce0:
    // 0x261ce0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x261ce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_261ce4:
    // 0x261ce4: 0x0  nop
    ctx->pc = 0x261ce4u;
    // NOP
label_261ce8:
    // 0x261ce8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_261cec:
    if (ctx->pc == 0x261CECu) {
        ctx->pc = 0x261CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CE8u;
        // 0x261cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CF0u;
        goto label_261cf0;
    }
    ctx->pc = 0x261CE8u;
    {
        const bool branch_taken_0x261ce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CE8u;
        // 0x261cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ce8) {
            ctx->pc = 0x261D08u;
            goto label_261d08;
        }
    }
    ctx->pc = 0x261CF0u;
label_261cf0:
    // 0x261cf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x261cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_261cf4:
    // 0x261cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261cf8:
    // 0x261cf8: 0xc09d872  jal         func_2761C8
label_261cfc:
    if (ctx->pc == 0x261CFCu) {
        ctx->pc = 0x261CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CF8u;
        // 0x261cfc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D00u;
        goto label_261d00;
    }
    ctx->pc = 0x261CF8u;
    SET_GPR_U32(ctx, 31, 0x261D00u);
    ctx->pc = 0x261CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CF8u;
    // 0x261cfc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x261CF8u, 0x261D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D00u;
label_261d00:
    // 0x261d00: 0x10000006  b           . + 4 + (0x6 << 2)
label_261d04:
    if (ctx->pc == 0x261D04u) {
        ctx->pc = 0x261D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D00u;
        // 0x261d04: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D08u;
        goto label_261d08;
    }
    ctx->pc = 0x261D00u;
    {
        const bool branch_taken_0x261d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D00u;
        // 0x261d04: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d00) {
            ctx->pc = 0x261D1Cu;
            goto label_261d1c;
        }
    }
    ctx->pc = 0x261D08u;
label_261d08:
    // 0x261d08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x261d08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_261d0c:
    // 0x261d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261d10:
    // 0x261d10: 0xc088736  jal         func_221CD8
label_261d14:
    if (ctx->pc == 0x261D14u) {
        ctx->pc = 0x261D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D10u;
        // 0x261d14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D18u;
        goto label_261d18;
    }
    ctx->pc = 0x261D10u;
    SET_GPR_U32(ctx, 31, 0x261D18u);
    ctx->pc = 0x261D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D10u;
    // 0x261d14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CD8u, 0x261D10u, 0x261D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D18u;
label_261d18:
    // 0x261d18: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x261d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261d1c:
    // 0x261d1c: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x261d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_261d20:
    // 0x261d20: 0x2472dd30  addiu       $s2, $v1, -0x22D0
    ctx->pc = 0x261d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958384));
label_261d24:
    // 0x261d24: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x261d24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
label_261d28:
    // 0x261d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261d2c:
    // 0x261d2c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x261d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261d30:
    // 0x261d30: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x261d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_261d34:
    // 0x261d34: 0xc041532  jal         func_1054C8
label_261d38:
    if (ctx->pc == 0x261D38u) {
        ctx->pc = 0x261D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D34u;
        // 0x261d38: 0x8e1400d8  lw          $s4, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D3Cu;
        goto label_261d3c;
    }
    ctx->pc = 0x261D34u;
    SET_GPR_U32(ctx, 31, 0x261D3Cu);
    ctx->pc = 0x261D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D34u;
    // 0x261d38: 0x8e1400d8  lw          $s4, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261D34u, 0x261D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D3Cu;
label_261d3c:
    // 0x261d3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x261d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261d40:
    // 0x261d40: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_261d44:
    if (ctx->pc == 0x261D44u) {
        ctx->pc = 0x261D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D40u;
        // 0x261d44: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D48u;
        goto label_261d48;
    }
    ctx->pc = 0x261D40u;
    {
        const bool branch_taken_0x261d40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D40u;
        // 0x261d44: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d40) {
            ctx->pc = 0x261D60u;
            goto label_261d60;
        }
    }
    ctx->pc = 0x261D48u;
label_261d48:
    // 0x261d48: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x261d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_261d4c:
    // 0x261d4c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x261d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_261d50:
    // 0x261d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x261d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261d54:
    // 0x261d54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261d58:
    // 0x261d58: 0xc041b20  jal         func_106C80
label_261d5c:
    if (ctx->pc == 0x261D5Cu) {
        ctx->pc = 0x261D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D58u;
        // 0x261d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D60u;
        goto label_261d60;
    }
    ctx->pc = 0x261D58u;
    SET_GPR_U32(ctx, 31, 0x261D60u);
    ctx->pc = 0x261D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D58u;
    // 0x261d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x261D58u, 0x261D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D60u;
label_261d60:
    // 0x261d60: 0xc05d484  jal         func_175210
label_261d64:
    if (ctx->pc == 0x261D64u) {
        ctx->pc = 0x261D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D60u;
        // 0x261d64: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D68u;
        goto label_261d68;
    }
    ctx->pc = 0x261D60u;
    SET_GPR_U32(ctx, 31, 0x261D68u);
    ctx->pc = 0x261D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D60u;
    // 0x261d64: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x261D60u, 0x261D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D68u;
label_261d68:
    // 0x261d68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261d6c:
    // 0x261d6c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x261d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_261d70:
    // 0x261d70: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x261d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_261d74:
    // 0x261d74: 0xa0f809  jalr        $a1
label_261d78:
    if (ctx->pc == 0x261D78u) {
        ctx->pc = 0x261D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D74u;
        // 0x261d78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D7Cu;
        goto label_261d7c;
    }
    ctx->pc = 0x261D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x261D7Cu);
        ctx->pc = 0x261D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D74u;
        // 0x261d78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D74u, 0x261D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261D7Cu;
label_261d7c:
    // 0x261d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261d80:
    // 0x261d80: 0xc087016  jal         func_21C058
label_261d84:
    if (ctx->pc == 0x261D84u) {
        ctx->pc = 0x261D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D80u;
        // 0x261d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D88u;
        goto label_261d88;
    }
    ctx->pc = 0x261D80u;
    SET_GPR_U32(ctx, 31, 0x261D88u);
    ctx->pc = 0x261D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D80u;
    // 0x261d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x261D80u, 0x261D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D88u;
label_261d88:
    // 0x261d88: 0xc041532  jal         func_1054C8
label_261d8c:
    if (ctx->pc == 0x261D8Cu) {
        ctx->pc = 0x261D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D88u;
        // 0x261d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D90u;
        goto label_261d90;
    }
    ctx->pc = 0x261D88u;
    SET_GPR_U32(ctx, 31, 0x261D90u);
    ctx->pc = 0x261D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D88u;
    // 0x261d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261D88u, 0x261D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D90u;
label_261d90:
    // 0x261d90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x261d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261d94:
    // 0x261d94: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_261d98:
    if (ctx->pc == 0x261D98u) {
        ctx->pc = 0x261D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D94u;
        // 0x261d98: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D9Cu;
        goto label_261d9c;
    }
    ctx->pc = 0x261D94u;
    {
        const bool branch_taken_0x261d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D94u;
        // 0x261d98: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d94) {
            ctx->pc = 0x261DB8u;
            goto label_261db8;
        }
    }
    ctx->pc = 0x261D9Cu;
label_261d9c:
    // 0x261d9c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x261d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261da0:
    // 0x261da0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x261da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_261da4:
    // 0x261da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261da8:
    // 0x261da8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x261da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_261dac:
    // 0x261dac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x261dacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261db0:
    // 0x261db0: 0xc04159e  jal         func_105678
label_261db4:
    if (ctx->pc == 0x261DB4u) {
        ctx->pc = 0x261DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DB0u;
        // 0x261db4: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261DB8u;
        goto label_261db8;
    }
    ctx->pc = 0x261DB0u;
    SET_GPR_U32(ctx, 31, 0x261DB8u);
    ctx->pc = 0x261DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261DB0u;
    // 0x261db4: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x261DB0u, 0x261DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261DB8u;
label_261db8:
    // 0x261db8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x261db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_261dbc:
    // 0x261dbc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x261dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_261dc0:
    // 0x261dc0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x261dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_261dc4:
    // 0x261dc4: 0xc041532  jal         func_1054C8
label_261dc8:
    if (ctx->pc == 0x261DC8u) {
        ctx->pc = 0x261DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DC4u;
        // 0x261dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261DCCu;
        goto label_261dcc;
    }
    ctx->pc = 0x261DC4u;
    SET_GPR_U32(ctx, 31, 0x261DCCu);
    ctx->pc = 0x261DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261DC4u;
    // 0x261dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261DC4u, 0x261DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261DCCu;
label_261dcc:
    // 0x261dcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x261dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261dd0:
    // 0x261dd0: 0x52400013  beql        $s2, $zero, . + 4 + (0x13 << 2)
label_261dd4:
    if (ctx->pc == 0x261DD4u) {
        ctx->pc = 0x261DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DD0u;
        // 0x261dd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261DD8u;
        goto label_261dd8;
    }
    ctx->pc = 0x261DD0u;
    {
        const bool branch_taken_0x261dd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x261dd0) {
            ctx->pc = 0x261DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261DD0u;
            // 0x261dd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261E20u;
            goto label_261e20;
        }
    }
    ctx->pc = 0x261DD8u;
label_261dd8:
    // 0x261dd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x261dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_261ddc:
    // 0x261ddc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x261ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_261de0:
    // 0x261de0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x261de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_261de4:
    // 0x261de4: 0x40f809  jalr        $v0
label_261de8:
    if (ctx->pc == 0x261DE8u) {
        ctx->pc = 0x261DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DE4u;
        // 0x261de8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261DECu;
        goto label_261dec;
    }
    ctx->pc = 0x261DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261DECu);
        ctx->pc = 0x261DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DE4u;
        // 0x261de8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261DE4u, 0x261DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261DECu;
label_261dec:
    // 0x261dec: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x261decu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_261df0:
    // 0x261df0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x261df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_261df4:
    // 0x261df4: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x261df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_261df8:
    // 0x261df8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261dfc:
    // 0x261dfc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x261dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_261e00:
    // 0x261e00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x261e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261e04:
    // 0x261e04: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x261e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261e08:
    // 0x261e08: 0x254a1c78  addiu       $t2, $t2, 0x1C78
    ctx->pc = 0x261e08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7288));
label_261e0c:
    // 0x261e0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261e10:
    // 0x261e10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x261e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261e14:
    // 0x261e14: 0xc041664  jal         func_105990
label_261e18:
    if (ctx->pc == 0x261E18u) {
        ctx->pc = 0x261E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E14u;
        // 0x261e18: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E1Cu;
        goto label_261e1c;
    }
    ctx->pc = 0x261E14u;
    SET_GPR_U32(ctx, 31, 0x261E1Cu);
    ctx->pc = 0x261E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E14u;
    // 0x261e18: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x261E14u, 0x261E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E1Cu;
label_261e1c:
    // 0x261e1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x261e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261e20:
    // 0x261e20: 0xc05d4f6  jal         func_1753D8
label_261e24:
    if (ctx->pc == 0x261E24u) {
        ctx->pc = 0x261E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E20u;
        // 0x261e24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E28u;
        goto label_261e28;
    }
    ctx->pc = 0x261E20u;
    SET_GPR_U32(ctx, 31, 0x261E28u);
    ctx->pc = 0x261E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E20u;
    // 0x261e24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x261E20u, 0x261E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E28u;
label_261e28:
    // 0x261e28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x261e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_261e2c:
    // 0x261e2c: 0xc05d53a  jal         func_1754E8
label_261e30:
    if (ctx->pc == 0x261E30u) {
        ctx->pc = 0x261E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E2Cu;
        // 0x261e30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E34u;
        goto label_261e34;
    }
    ctx->pc = 0x261E2Cu;
    SET_GPR_U32(ctx, 31, 0x261E34u);
    ctx->pc = 0x261E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E2Cu;
    // 0x261e30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x261E2Cu, 0x261E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E34u;
label_261e34:
    // 0x261e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261e38:
    // 0x261e38: 0xc089990  jal         func_226640
label_261e3c:
    if (ctx->pc == 0x261E3Cu) {
        ctx->pc = 0x261E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E38u;
        // 0x261e3c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E40u;
        goto label_261e40;
    }
    ctx->pc = 0x261E38u;
    SET_GPR_U32(ctx, 31, 0x261E40u);
    ctx->pc = 0x261E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E38u;
    // 0x261e3c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x261E38u, 0x261E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E40u;
label_261e40:
    // 0x261e40: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x261e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_261e44:
    // 0x261e44: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x261e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_261e48:
    // 0x261e48: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x261e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_261e4c:
    // 0x261e4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x261e4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_261e50:
    // 0x261e50: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x261e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_261e54:
    // 0x261e54: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x261e54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_261e58:
    // 0x261e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261e5c:
    // 0x261e5c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x261e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_261e60:
    // 0x261e60: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x261e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_261e64:
    // 0x261e64: 0x3e00008  jr          $ra
label_261e68:
    if (ctx->pc == 0x261E68u) {
        ctx->pc = 0x261E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E64u;
        // 0x261e68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E6Cu;
        goto label_261e6c;
    }
    ctx->pc = 0x261E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E64u;
        // 0x261e68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261E6Cu;
label_261e6c:
    // 0x261e6c: 0x0  nop
    ctx->pc = 0x261e6cu;
    // NOP
label_261e70:
    // 0x261e70: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x261e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_261e74:
    // 0x261e74: 0x0  nop
    ctx->pc = 0x261e74u;
    // NOP
    ctx->pc = 0x261e78u;
}
