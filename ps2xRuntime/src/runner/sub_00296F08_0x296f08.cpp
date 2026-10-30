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

// Function: sub_00296F08
// Address: 0x296f08 - 0x296fc8
void sub_00296F08_0x296f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296F08_0x296f08");
#endif

    switch (ctx->pc) {
        case 0x296f08u: goto label_296f08;
        case 0x296f0cu: goto label_296f0c;
        case 0x296f10u: goto label_296f10;
        case 0x296f14u: goto label_296f14;
        case 0x296f18u: goto label_296f18;
        case 0x296f1cu: goto label_296f1c;
        case 0x296f20u: goto label_296f20;
        case 0x296f24u: goto label_296f24;
        case 0x296f28u: goto label_296f28;
        case 0x296f2cu: goto label_296f2c;
        case 0x296f30u: goto label_296f30;
        case 0x296f34u: goto label_296f34;
        case 0x296f38u: goto label_296f38;
        case 0x296f3cu: goto label_296f3c;
        case 0x296f40u: goto label_296f40;
        case 0x296f44u: goto label_296f44;
        case 0x296f48u: goto label_296f48;
        case 0x296f4cu: goto label_296f4c;
        case 0x296f50u: goto label_296f50;
        case 0x296f54u: goto label_296f54;
        case 0x296f58u: goto label_296f58;
        case 0x296f5cu: goto label_296f5c;
        case 0x296f60u: goto label_296f60;
        case 0x296f64u: goto label_296f64;
        case 0x296f68u: goto label_296f68;
        case 0x296f6cu: goto label_296f6c;
        case 0x296f70u: goto label_296f70;
        case 0x296f74u: goto label_296f74;
        case 0x296f78u: goto label_296f78;
        case 0x296f7cu: goto label_296f7c;
        case 0x296f80u: goto label_296f80;
        case 0x296f84u: goto label_296f84;
        case 0x296f88u: goto label_296f88;
        case 0x296f8cu: goto label_296f8c;
        case 0x296f90u: goto label_296f90;
        case 0x296f94u: goto label_296f94;
        case 0x296f98u: goto label_296f98;
        case 0x296f9cu: goto label_296f9c;
        case 0x296fa0u: goto label_296fa0;
        case 0x296fa4u: goto label_296fa4;
        case 0x296fa8u: goto label_296fa8;
        case 0x296facu: goto label_296fac;
        case 0x296fb0u: goto label_296fb0;
        case 0x296fb4u: goto label_296fb4;
        case 0x296fb8u: goto label_296fb8;
        case 0x296fbcu: goto label_296fbc;
        case 0x296fc0u: goto label_296fc0;
        case 0x296fc4u: goto label_296fc4;
        default: break;
    }

    ctx->pc = 0x296f08u;

label_296f08:
    // 0x296f08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x296f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_296f0c:
    // 0x296f0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x296f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_296f10:
    // 0x296f10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x296f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_296f14:
    // 0x296f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296f18:
    // 0x296f18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x296f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_296f1c:
    // 0x296f1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x296f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_296f20:
    // 0x296f20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x296f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_296f24:
    // 0x296f24: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x296f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_296f28:
    // 0x296f28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x296f28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_296f2c:
    // 0x296f2c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x296f2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_296f30:
    // 0x296f30: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x296f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_296f34:
    // 0x296f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_296f38:
    // 0x296f38: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x296f38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_296f3c:
    // 0x296f3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x296f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_296f40:
    // 0x296f40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x296f40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_296f44:
    // 0x296f44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x296f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_296f48:
    // 0x296f48: 0x40f809  jalr        $v0
label_296f4c:
    if (ctx->pc == 0x296F4Cu) {
        ctx->pc = 0x296F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F48u;
        // 0x296f4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296F50u;
        goto label_296f50;
    }
    ctx->pc = 0x296F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296F50u);
        ctx->pc = 0x296F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F48u;
        // 0x296f4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F48u, 0x296F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F50u;
label_296f50:
    // 0x296f50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x296f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_296f54:
    // 0x296f54: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x296f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_296f58:
    // 0x296f58: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x296f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_296f5c:
    // 0x296f5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x296f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_296f60:
    // 0x296f60: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x296f60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
label_296f64:
    // 0x296f64: 0x10710005  beq         $v1, $s1, . + 4 + (0x5 << 2)
label_296f68:
    if (ctx->pc == 0x296F68u) {
        ctx->pc = 0x296F6Cu;
        goto label_296f6c;
    }
    ctx->pc = 0x296F64u;
    {
        const bool branch_taken_0x296f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x296f64) {
            ctx->pc = 0x296F7Cu;
            goto label_296f7c;
        }
    }
    ctx->pc = 0x296F6Cu;
label_296f6c:
    // 0x296f6c: 0xc0a5b84  jal         func_296E10
label_296f70:
    if (ctx->pc == 0x296F70u) {
        ctx->pc = 0x296F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F6Cu;
        // 0x296f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296F74u;
        goto label_296f74;
    }
    ctx->pc = 0x296F6Cu;
    SET_GPR_U32(ctx, 31, 0x296F74u);
    ctx->pc = 0x296F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F6Cu;
    // 0x296f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E10u, 0x296F6Cu, 0x296F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F74u;
label_296f74:
    // 0x296f74: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x296f74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
label_296f78:
    // 0x296f78: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x296f78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
label_296f7c:
    // 0x296f7c: 0xc0a5a72  jal         func_2969C8
label_296f80:
    if (ctx->pc == 0x296F80u) {
        ctx->pc = 0x296F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F7Cu;
        // 0x296f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296F84u;
        goto label_296f84;
    }
    ctx->pc = 0x296F7Cu;
    SET_GPR_U32(ctx, 31, 0x296F84u);
    ctx->pc = 0x296F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F7Cu;
    // 0x296f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x296F7Cu, 0x296F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F84u;
label_296f84:
    // 0x296f84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x296f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_296f88:
    // 0x296f88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_296f8c:
    // 0x296f8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x296f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_296f90:
    // 0x296f90: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x296f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_296f94:
    // 0x296f94: 0x24840284  addiu       $a0, $a0, 0x284
    ctx->pc = 0x296f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
label_296f98:
    // 0x296f98: 0xc0a6800  jal         func_29A000
label_296f9c:
    if (ctx->pc == 0x296F9Cu) {
        ctx->pc = 0x296F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F98u;
        // 0x296f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296FA0u;
        goto label_296fa0;
    }
    ctx->pc = 0x296F98u;
    SET_GPR_U32(ctx, 31, 0x296FA0u);
    ctx->pc = 0x296F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F98u;
    // 0x296f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x296F98u, 0x296FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FA0u;
label_296fa0:
    // 0x296fa0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x296fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_296fa4:
    // 0x296fa4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x296fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_296fa8:
    // 0x296fa8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x296fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_296fac:
    // 0x296fac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_296fb0:
    // 0x296fb0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x296fb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296fb4:
    // 0x296fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_296fb8:
    // 0x296fb8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x296fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_296fbc:
    // 0x296fbc: 0x3e00008  jr          $ra
label_296fc0:
    if (ctx->pc == 0x296FC0u) {
        ctx->pc = 0x296FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FBCu;
        // 0x296fc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296FC4u;
        goto label_296fc4;
    }
    ctx->pc = 0x296FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FBCu;
        // 0x296fc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296FC4u;
label_296fc4:
    // 0x296fc4: 0x0  nop
    ctx->pc = 0x296fc4u;
    // NOP
    ctx->pc = 0x296fc8u;
}
