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

// Function: sub_00297A58
// Address: 0x297a58 - 0x297c90
void sub_00297A58_0x297a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297A58_0x297a58");
#endif

    switch (ctx->pc) {
        case 0x297a88u: goto label_297a88;
        case 0x297a94u: goto label_297a94;
        case 0x297aa0u: goto label_297aa0;
        case 0x297ab4u: goto label_297ab4;
        case 0x297ad0u: goto label_297ad0;
        case 0x297ae4u: goto label_297ae4;
        case 0x297b04u: goto label_297b04;
        case 0x297b30u: goto label_297b30;
        case 0x297b48u: goto label_297b48;
        case 0x297b74u: goto label_297b74;
        case 0x297b7cu: goto label_297b7c;
        case 0x297b98u: goto label_297b98;
        case 0x297ba4u: goto label_297ba4;
        case 0x297bbcu: goto label_297bbc;
        case 0x297bd0u: goto label_297bd0;
        case 0x297becu: goto label_297bec;
        case 0x297bfcu: goto label_297bfc;
        case 0x297c0cu: goto label_297c0c;
        case 0x297c24u: goto label_297c24;
        case 0x297c3cu: goto label_297c3c;
        case 0x297c68u: goto label_297c68;
        default: break;
    }

    ctx->pc = 0x297a58u;

    // 0x297a58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x297a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x297a5c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x297a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x297a60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a64: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x297a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x297a68: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x297a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x297a6c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x297a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x297a70: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x297a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x297a74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x297a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x297a78: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x297a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x297a7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297a80: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x297A80u;
    SET_GPR_U32(ctx, 31, 0x297A88u);
    ctx->pc = 0x297A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A80u;
    // 0x297a84: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297A80u, 0x297A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A88u;
label_297a88:
    // 0x297a88: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x297a88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297a8c: 0xc0a5df2  jal         func_2977C8
    ctx->pc = 0x297A8Cu;
    SET_GPR_U32(ctx, 31, 0x297A94u);
    ctx->pc = 0x297A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A8Cu;
    // 0x297a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2977C8u, 0x297A8Cu, 0x297A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A94u;
label_297a94:
    // 0x297a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a98: 0xc0a5a74  jal         func_2969D0
    ctx->pc = 0x297A98u;
    SET_GPR_U32(ctx, 31, 0x297AA0u);
    ctx->pc = 0x297A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A98u;
    // 0x297a9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969D0u, 0x297A98u, 0x297AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AA0u;
label_297aa0:
    // 0x297aa0: 0x10560072  beq         $v0, $s6, . + 4 + (0x72 << 2)
    ctx->pc = 0x297AA0u;
    {
        const bool branch_taken_0x297aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x297AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AA0u;
        // 0x297aa4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297aa0) {
            ctx->pc = 0x297C6Cu;
            goto label_297c6c;
        }
    }
    ctx->pc = 0x297AA8u;
    // 0x297aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297aac: 0xc0a6488  jal         func_299220
    ctx->pc = 0x297AACu;
    SET_GPR_U32(ctx, 31, 0x297AB4u);
    ctx->pc = 0x297AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297AACu;
    // 0x297ab0: 0x26700284  addiu       $s0, $s3, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299220u, 0x297AACu, 0x297AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AB4u;
label_297ab4:
    // 0x297ab4: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x297ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x297ab8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x297ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297abc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x297abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x297ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ac4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x297ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x297ac8: 0xc0a5c72  jal         func_2971C8
    ctx->pc = 0x297AC8u;
    SET_GPR_U32(ctx, 31, 0x297AD0u);
    ctx->pc = 0x297ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297AC8u;
    // 0x297acc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2971C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2971C8u, 0x297AC8u, 0x297AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AD0u;
label_297ad0:
    // 0x297ad0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x297ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297ad4: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x297AD4u;
    {
        const bool branch_taken_0x297ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AD4u;
        // 0x297ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ad4) {
            ctx->pc = 0x297BF4u;
            goto label_297bf4;
        }
    }
    ctx->pc = 0x297ADCu;
    // 0x297adc: 0xc0a67b8  jal         func_299EE0
    ctx->pc = 0x297ADCu;
    SET_GPR_U32(ctx, 31, 0x297AE4u);
    ctx->pc = 0x297AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297ADCu;
    // 0x297ae0: 0x2415001e  addiu       $s5, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EE0u, 0x297ADCu, 0x297AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AE4u;
label_297ae4:
    // 0x297ae4: 0x241203e8  addiu       $s2, $zero, 0x3E8
    ctx->pc = 0x297ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x297ae8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x297ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x297aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297af0: 0x2474b880  addiu       $s4, $v1, -0x4780
    ctx->pc = 0x297af0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948992));
    // 0x297af4: 0x240505dc  addiu       $a1, $zero, 0x5DC
    ctx->pc = 0x297af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x297af8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x297af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297afc: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x297AFCu;
    SET_GPR_U32(ctx, 31, 0x297B04u);
    ctx->pc = 0x297B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297AFCu;
    // 0x297b00: 0x24060bb8  addiu       $a2, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x297AFCu, 0x297B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B04u;
label_297b04:
    // 0x297b04: 0x553018  mult        $a2, $v0, $s5
    ctx->pc = 0x297b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x297b08: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x297B08u;
    {
        const bool branch_taken_0x297b08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b08) {
            ctx->pc = 0x297B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297B08u;
            // 0x297b0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297B10u;
            goto label_297b10;
        }
    }
    ctx->pc = 0x297B10u;
label_297b10:
    // 0x297b10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x297b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297b1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x297b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x297b20: 0xd2001a  div         $zero, $a2, $s2
    ctx->pc = 0x297b20u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x297b24: 0x3012  mflo        $a2
    ctx->pc = 0x297b24u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x297b28: 0xc0a5bc2  jal         func_296F08
    ctx->pc = 0x297B28u;
    SET_GPR_U32(ctx, 31, 0x297B30u);
    ctx->pc = 0x297B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B28u;
    // 0x297b2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F08u, 0x297B28u, 0x297B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B30u;
label_297b30:
    // 0x297b30: 0x1616004e  bne         $s0, $s6, . + 4 + (0x4E << 2)
    ctx->pc = 0x297B30u;
    {
        const bool branch_taken_0x297b30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x297B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B30u;
        // 0x297b34: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b30) {
            ctx->pc = 0x297C6Cu;
            goto label_297c6c;
        }
    }
    ctx->pc = 0x297B38u;
    // 0x297b38: 0x240505dc  addiu       $a1, $zero, 0x5DC
    ctx->pc = 0x297b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x297b3c: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x297b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x297b40: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x297B40u;
    SET_GPR_U32(ctx, 31, 0x297B48u);
    ctx->pc = 0x297B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B40u;
    // 0x297b44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x297B40u, 0x297B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B48u;
label_297b48:
    // 0x297b48: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x297b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x297b4c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x297b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x297b50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x297B50u;
    {
        const bool branch_taken_0x297b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b50) {
            ctx->pc = 0x297B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297B50u;
            // 0x297b54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297B58u;
            goto label_297b58;
        }
    }
    ctx->pc = 0x297B58u;
label_297b58:
    // 0x297b58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x297b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b5c: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x297b5cu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x297b60: 0x24840284  addiu       $a0, $a0, 0x284
    ctx->pc = 0x297b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    // 0x297b64: 0x1012  mflo        $v0
    ctx->pc = 0x297b64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x297b68: 0x21023  negu        $v0, $v0
    ctx->pc = 0x297b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x297b6c: 0xc0a681e  jal         func_29A078
    ctx->pc = 0x297B6Cu;
    SET_GPR_U32(ctx, 31, 0x297B74u);
    ctx->pc = 0x297B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B6Cu;
    // 0x297b70: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A078u, 0x297B6Cu, 0x297B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B74u;
label_297b74:
    // 0x297b74: 0xc08a61a  jal         func_229868
    ctx->pc = 0x297B74u;
    SET_GPR_U32(ctx, 31, 0x297B7Cu);
    ctx->pc = 0x297B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B74u;
    // 0x297b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x297B74u, 0x297B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B7Cu;
label_297b7c:
    // 0x297b7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b80: 0x5200003a  beql        $s0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x297B80u;
    {
        const bool branch_taken_0x297b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b80) {
            ctx->pc = 0x297B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297B80u;
            // 0x297b84: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C6Cu;
            goto label_297c6c;
        }
    }
    ctx->pc = 0x297B88u;
    // 0x297b88: 0x56130038  bnel        $s0, $s3, . + 4 + (0x38 << 2)
    ctx->pc = 0x297B88u;
    {
        const bool branch_taken_0x297b88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x297b88) {
            ctx->pc = 0x297B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297B88u;
            // 0x297b8c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C6Cu;
            goto label_297c6c;
        }
    }
    ctx->pc = 0x297B90u;
    // 0x297b90: 0xc087502  jal         func_21D408
    ctx->pc = 0x297B90u;
    SET_GPR_U32(ctx, 31, 0x297B98u);
    ctx->pc = 0x297B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B90u;
    // 0x297b94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x297B90u, 0x297B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B98u;
label_297b98:
    // 0x297b98: 0x245100f8  addiu       $s1, $v0, 0xF8
    ctx->pc = 0x297b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
    // 0x297b9c: 0xc0a5d08  jal         func_297420
    ctx->pc = 0x297B9Cu;
    SET_GPR_U32(ctx, 31, 0x297BA4u);
    ctx->pc = 0x297BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B9Cu;
    // 0x297ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297420u, 0x297B9Cu, 0x297BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BA4u;
label_297ba4:
    // 0x297ba4: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x297BA4u;
    {
        const bool branch_taken_0x297ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297ba4) {
            ctx->pc = 0x297BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297BA4u;
            // 0x297ba8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C6Cu;
            goto label_297c6c;
        }
    }
    ctx->pc = 0x297BACu;
    // 0x297bac: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x297bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x297bb0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x297bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297bb4: 0xc089998  jal         func_226660
    ctx->pc = 0x297BB4u;
    SET_GPR_U32(ctx, 31, 0x297BBCu);
    ctx->pc = 0x297BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BB4u;
    // 0x297bb8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x297BB4u, 0x297BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BBCu;
label_297bbc:
    // 0x297bbc: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x297BBCu;
    {
        const bool branch_taken_0x297bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297bbc) {
            ctx->pc = 0x297BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297BBCu;
            // 0x297bc0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C6Cu;
            goto label_297c6c;
        }
    }
    ctx->pc = 0x297BC4u;
    // 0x297bc4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x297bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x297bc8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x297BC8u;
    SET_GPR_U32(ctx, 31, 0x297BD0u);
    ctx->pc = 0x297BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BC8u;
    // 0x297bcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x297BC8u, 0x297BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BD0u;
label_297bd0:
    // 0x297bd0: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x297bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x297bd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x297bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297bd8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x297bd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x297bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297be0: 0x2c3280a  movz        $a1, $s6, $v1
    ctx->pc = 0x297be0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 22));
    // 0x297be4: 0xc0a5d0c  jal         func_297430
    ctx->pc = 0x297BE4u;
    SET_GPR_U32(ctx, 31, 0x297BECu);
    ctx->pc = 0x297BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BE4u;
    // 0x297be8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297430u, 0x297BE4u, 0x297BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BECu;
label_297bec:
    // 0x297bec: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x297BECu;
    {
        const bool branch_taken_0x297bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BECu;
        // 0x297bf0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bec) {
            ctx->pc = 0x297C6Cu;
            goto label_297c6c;
        }
    }
    ctx->pc = 0x297BF4u;
label_297bf4:
    // 0x297bf4: 0xc0a67b8  jal         func_299EE0
    ctx->pc = 0x297BF4u;
    SET_GPR_U32(ctx, 31, 0x297BFCu);
    ctx->pc = 0x297BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BF4u;
    // 0x297bf8: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EE0u, 0x297BF4u, 0x297BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BFCu;
label_297bfc:
    // 0x297bfc: 0x1456000c  bne         $v0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x297BFCu;
    {
        const bool branch_taken_0x297bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x297C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BFCu;
        // 0x297c00: 0x2604b880  addiu       $a0, $s0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bfc) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x297C04u;
    // 0x297c04: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x297C04u;
    SET_GPR_U32(ctx, 31, 0x297C0Cu);
    ctx->pc = 0x297C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C04u;
    // 0x297c08: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x297C04u, 0x297C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C0Cu;
label_297c0c:
    // 0x297c0c: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x297c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x297c10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297C10u;
    {
        const bool branch_taken_0x297c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C10u;
        // 0x297c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c10) {
            ctx->pc = 0x297C2Cu;
            goto label_297c2c;
        }
    }
    ctx->pc = 0x297C18u;
    // 0x297c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c1c: 0xc0a5d0c  jal         func_297430
    ctx->pc = 0x297C1Cu;
    SET_GPR_U32(ctx, 31, 0x297C24u);
    ctx->pc = 0x297C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C1Cu;
    // 0x297c20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297430u, 0x297C1Cu, 0x297C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C24u;
label_297c24:
    // 0x297c24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x297C24u;
    {
        const bool branch_taken_0x297c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C24u;
        // 0x297c28: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c24) {
            ctx->pc = 0x297C6Cu;
            goto label_297c6c;
        }
    }
    ctx->pc = 0x297C2Cu;
label_297c2c:
    // 0x297c2c: 0x2604b880  addiu       $a0, $s0, -0x4780
    ctx->pc = 0x297c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
label_297c30:
    // 0x297c30: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x297c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x297c34: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x297C34u;
    SET_GPR_U32(ctx, 31, 0x297C3Cu);
    ctx->pc = 0x297C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C34u;
    // 0x297c38: 0x24061770  addiu       $a2, $zero, 0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x297C34u, 0x297C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C3Cu;
label_297c3c:
    // 0x297c3c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x297c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x297c40: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x297c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x297c44: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x297c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x297c48: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x297c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x297c4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x297c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x297c50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x297C50u;
    {
        const bool branch_taken_0x297c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c50) {
            ctx->pc = 0x297C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297C50u;
            // 0x297c54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C58u;
            goto label_297c58;
        }
    }
    ctx->pc = 0x297C58u;
label_297c58:
    // 0x297c58: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x297c58u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x297c5c: 0x2812  mflo        $a1
    ctx->pc = 0x297c5cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x297c60: 0xc0a5bf2  jal         func_296FC8
    ctx->pc = 0x297C60u;
    SET_GPR_U32(ctx, 31, 0x297C68u);
    ctx->pc = 0x297C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C60u;
    // 0x297c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296FC8u, 0x297C60u, 0x297C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C68u;
label_297c68:
    // 0x297c68: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x297c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_297c6c:
    // 0x297c6c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x297c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297c70: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x297c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297c74: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x297c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297c78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x297c78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297c7c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x297c7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297c80: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x297c80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297c88: 0x3e00008  jr          $ra
    ctx->pc = 0x297C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C88u;
        // 0x297c8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C90u;
}
