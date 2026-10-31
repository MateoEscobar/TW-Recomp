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

// Function: sub_00279F50
// Address: 0x279f50 - 0x27a070
void sub_00279F50_0x279f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279F50_0x279f50");
#endif

    switch (ctx->pc) {
        case 0x279f50u: goto label_279f50;
        case 0x279f54u: goto label_279f54;
        case 0x279f58u: goto label_279f58;
        case 0x279f5cu: goto label_279f5c;
        case 0x279f60u: goto label_279f60;
        case 0x279f64u: goto label_279f64;
        case 0x279f68u: goto label_279f68;
        case 0x279f6cu: goto label_279f6c;
        case 0x279f70u: goto label_279f70;
        case 0x279f74u: goto label_279f74;
        case 0x279f78u: goto label_279f78;
        case 0x279f7cu: goto label_279f7c;
        case 0x279f80u: goto label_279f80;
        case 0x279f84u: goto label_279f84;
        case 0x279f88u: goto label_279f88;
        case 0x279f8cu: goto label_279f8c;
        case 0x279f90u: goto label_279f90;
        case 0x279f94u: goto label_279f94;
        case 0x279f98u: goto label_279f98;
        case 0x279f9cu: goto label_279f9c;
        case 0x279fa0u: goto label_279fa0;
        case 0x279fa4u: goto label_279fa4;
        case 0x279fa8u: goto label_279fa8;
        case 0x279facu: goto label_279fac;
        case 0x279fb0u: goto label_279fb0;
        case 0x279fb4u: goto label_279fb4;
        case 0x279fb8u: goto label_279fb8;
        case 0x279fbcu: goto label_279fbc;
        case 0x279fc0u: goto label_279fc0;
        case 0x279fc4u: goto label_279fc4;
        case 0x279fc8u: goto label_279fc8;
        case 0x279fccu: goto label_279fcc;
        case 0x279fd0u: goto label_279fd0;
        case 0x279fd4u: goto label_279fd4;
        case 0x279fd8u: goto label_279fd8;
        case 0x279fdcu: goto label_279fdc;
        case 0x279fe0u: goto label_279fe0;
        case 0x279fe4u: goto label_279fe4;
        case 0x279fe8u: goto label_279fe8;
        case 0x279fecu: goto label_279fec;
        case 0x279ff0u: goto label_279ff0;
        case 0x279ff4u: goto label_279ff4;
        case 0x279ff8u: goto label_279ff8;
        case 0x279ffcu: goto label_279ffc;
        case 0x27a000u: goto label_27a000;
        case 0x27a004u: goto label_27a004;
        case 0x27a008u: goto label_27a008;
        case 0x27a00cu: goto label_27a00c;
        case 0x27a010u: goto label_27a010;
        case 0x27a014u: goto label_27a014;
        case 0x27a018u: goto label_27a018;
        case 0x27a01cu: goto label_27a01c;
        case 0x27a020u: goto label_27a020;
        case 0x27a024u: goto label_27a024;
        case 0x27a028u: goto label_27a028;
        case 0x27a02cu: goto label_27a02c;
        case 0x27a030u: goto label_27a030;
        case 0x27a034u: goto label_27a034;
        case 0x27a038u: goto label_27a038;
        case 0x27a03cu: goto label_27a03c;
        case 0x27a040u: goto label_27a040;
        case 0x27a044u: goto label_27a044;
        case 0x27a048u: goto label_27a048;
        case 0x27a04cu: goto label_27a04c;
        case 0x27a050u: goto label_27a050;
        case 0x27a054u: goto label_27a054;
        case 0x27a058u: goto label_27a058;
        case 0x27a05cu: goto label_27a05c;
        case 0x27a060u: goto label_27a060;
        case 0x27a064u: goto label_27a064;
        case 0x27a068u: goto label_27a068;
        case 0x27a06cu: goto label_27a06c;
        default: break;
    }

    ctx->pc = 0x279f50u;

label_279f50:
    // 0x279f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_279f54:
    // 0x279f54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x279f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_279f58:
    // 0x279f58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x279f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_279f5c:
    // 0x279f5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x279f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_279f60:
    // 0x279f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279f64:
    // 0x279f64: 0xc08a61a  jal         func_229868
label_279f68:
    if (ctx->pc == 0x279F68u) {
        ctx->pc = 0x279F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F64u;
        // 0x279f68: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F6Cu;
        goto label_279f6c;
    }
    ctx->pc = 0x279F64u;
    SET_GPR_U32(ctx, 31, 0x279F6Cu);
    ctx->pc = 0x279F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F64u;
    // 0x279f68: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279F64u, 0x279F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F6Cu;
label_279f6c:
    // 0x279f6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279f70:
    // 0x279f70: 0xc0e2612  jal         func_389848
label_279f74:
    if (ctx->pc == 0x279F74u) {
        ctx->pc = 0x279F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F70u;
        // 0x279f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F78u;
        goto label_279f78;
    }
    ctx->pc = 0x279F70u;
    SET_GPR_U32(ctx, 31, 0x279F78u);
    ctx->pc = 0x279F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F70u;
    // 0x279f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x279F70u, 0x279F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F78u;
label_279f78:
    // 0x279f78: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_279f7c:
    if (ctx->pc == 0x279F7Cu) {
        ctx->pc = 0x279F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F78u;
        // 0x279f7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F80u;
        goto label_279f80;
    }
    ctx->pc = 0x279F78u;
    {
        const bool branch_taken_0x279f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F78u;
        // 0x279f7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f78) {
            ctx->pc = 0x27A028u;
            goto label_27a028;
        }
    }
    ctx->pc = 0x279F80u;
label_279f80:
    // 0x279f80: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_279f84:
    if (ctx->pc == 0x279F84u) {
        ctx->pc = 0x279F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F80u;
        // 0x279f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F88u;
        goto label_279f88;
    }
    ctx->pc = 0x279F80u;
    {
        const bool branch_taken_0x279f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F80u;
        // 0x279f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f80) {
            ctx->pc = 0x27A058u;
            goto label_27a058;
        }
    }
    ctx->pc = 0x279F88u;
label_279f88:
    // 0x279f88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x279f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_279f8c:
    // 0x279f8c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x279f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_279f90:
    // 0x279f90: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x279f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_279f94:
    // 0x279f94: 0x40f809  jalr        $v0
label_279f98:
    if (ctx->pc == 0x279F98u) {
        ctx->pc = 0x279F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F94u;
        // 0x279f98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F9Cu;
        goto label_279f9c;
    }
    ctx->pc = 0x279F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279F9Cu);
        ctx->pc = 0x279F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F94u;
        // 0x279f98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279F94u, 0x279F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279F9Cu;
label_279f9c:
    // 0x279f9c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_279fa0:
    if (ctx->pc == 0x279FA0u) {
        ctx->pc = 0x279FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F9Cu;
        // 0x279fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FA4u;
        goto label_279fa4;
    }
    ctx->pc = 0x279F9Cu;
    {
        const bool branch_taken_0x279f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F9Cu;
        // 0x279fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f9c) {
            ctx->pc = 0x27A028u;
            goto label_27a028;
        }
    }
    ctx->pc = 0x279FA4u;
label_279fa4:
    // 0x279fa4: 0xc09e780  jal         func_279E00
label_279fa8:
    if (ctx->pc == 0x279FA8u) {
        ctx->pc = 0x279FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FA4u;
        // 0x279fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FACu;
        goto label_279fac;
    }
    ctx->pc = 0x279FA4u;
    SET_GPR_U32(ctx, 31, 0x279FACu);
    ctx->pc = 0x279FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FA4u;
    // 0x279fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E00u, 0x279FA4u, 0x279FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FACu;
label_279fac:
    // 0x279fac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_279fb0:
    if (ctx->pc == 0x279FB0u) {
        ctx->pc = 0x279FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FACu;
        // 0x279fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FB4u;
        goto label_279fb4;
    }
    ctx->pc = 0x279FACu;
    {
        const bool branch_taken_0x279fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FACu;
        // 0x279fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fac) {
            ctx->pc = 0x279FF8u;
            goto label_279ff8;
        }
    }
    ctx->pc = 0x279FB4u;
label_279fb4:
    // 0x279fb4: 0xc08a684  jal         func_229A10
label_279fb8:
    if (ctx->pc == 0x279FB8u) {
        ctx->pc = 0x279FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FB4u;
        // 0x279fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FBCu;
        goto label_279fbc;
    }
    ctx->pc = 0x279FB4u;
    SET_GPR_U32(ctx, 31, 0x279FBCu);
    ctx->pc = 0x279FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FB4u;
    // 0x279fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279FB4u, 0x279FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FBCu;
label_279fbc:
    // 0x279fbc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x279fbcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_279fc0:
    // 0x279fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x279fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_279fc4:
    // 0x279fc4: 0x0  nop
    ctx->pc = 0x279fc4u;
    // NOP
label_279fc8:
    // 0x279fc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279fcc:
    // 0x279fcc: 0x0  nop
    ctx->pc = 0x279fccu;
    // NOP
label_279fd0:
    // 0x279fd0: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_279fd4:
    if (ctx->pc == 0x279FD4u) {
        ctx->pc = 0x279FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FD0u;
        // 0x279fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FD8u;
        goto label_279fd8;
    }
    ctx->pc = 0x279FD0u;
    {
        const bool branch_taken_0x279fd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FD0u;
        // 0x279fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fd0) {
            ctx->pc = 0x27A058u;
            goto label_27a058;
        }
    }
    ctx->pc = 0x279FD8u;
label_279fd8:
    // 0x279fd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279fdc:
    // 0x279fdc: 0xc4400970  lwc1        $f0, 0x970($v0)
    ctx->pc = 0x279fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279fe0:
    // 0x279fe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x279fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279fe4:
    // 0x279fe4: 0x0  nop
    ctx->pc = 0x279fe4u;
    // NOP
label_279fe8:
    // 0x279fe8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_279fec:
    if (ctx->pc == 0x279FECu) {
        ctx->pc = 0x279FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FE8u;
        // 0x279fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FF0u;
        goto label_279ff0;
    }
    ctx->pc = 0x279FE8u;
    {
        const bool branch_taken_0x279fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FE8u;
        // 0x279fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fe8) {
            ctx->pc = 0x27A054u;
            goto label_27a054;
        }
    }
    ctx->pc = 0x279FF0u;
label_279ff0:
    // 0x279ff0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_279ff4:
    if (ctx->pc == 0x279FF4u) {
        ctx->pc = 0x279FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FF0u;
        // 0x279ff4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FF8u;
        goto label_279ff8;
    }
    ctx->pc = 0x279FF0u;
    {
        const bool branch_taken_0x279ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FF0u;
        // 0x279ff4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ff0) {
            ctx->pc = 0x27A05Cu;
            goto label_27a05c;
        }
    }
    ctx->pc = 0x279FF8u;
label_279ff8:
    // 0x279ff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279ffc:
    // 0x279ffc: 0xc09e42a  jal         func_2790A8
label_27a000:
    if (ctx->pc == 0x27A000u) {
        ctx->pc = 0x27A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FFCu;
        // 0x27a000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A004u;
        goto label_27a004;
    }
    ctx->pc = 0x279FFCu;
    SET_GPR_U32(ctx, 31, 0x27A004u);
    ctx->pc = 0x27A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FFCu;
    // 0x27a000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x279FFCu, 0x27A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A004u;
label_27a004:
    // 0x27a004: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a008:
    // 0x27a008: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27a008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_27a00c:
    // 0x27a00c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27a00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27a010:
    // 0x27a010: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x27a010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a014:
    // 0x27a014: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27a014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27a018:
    // 0x27a018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a01c:
    // 0x27a01c: 0x0  nop
    ctx->pc = 0x27a01cu;
    // NOP
label_27a020:
    // 0x27a020: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27a024:
    if (ctx->pc == 0x27A024u) {
        ctx->pc = 0x27A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A020u;
        // 0x27a024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A028u;
        goto label_27a028;
    }
    ctx->pc = 0x27A020u;
    {
        const bool branch_taken_0x27a020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A020u;
        // 0x27a024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a020) {
            ctx->pc = 0x27A030u;
            goto label_27a030;
        }
    }
    ctx->pc = 0x27A028u;
label_27a028:
    // 0x27a028: 0x1000000b  b           . + 4 + (0xB << 2)
label_27a02c:
    if (ctx->pc == 0x27A02Cu) {
        ctx->pc = 0x27A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A028u;
        // 0x27a02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A030u;
        goto label_27a030;
    }
    ctx->pc = 0x27A028u;
    {
        const bool branch_taken_0x27a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A028u;
        // 0x27a02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a028) {
            ctx->pc = 0x27A058u;
            goto label_27a058;
        }
    }
    ctx->pc = 0x27A030u;
label_27a030:
    // 0x27a030: 0xc08a684  jal         func_229A10
label_27a034:
    if (ctx->pc == 0x27A034u) {
        ctx->pc = 0x27A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A030u;
        // 0x27a034: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A038u;
        goto label_27a038;
    }
    ctx->pc = 0x27A030u;
    SET_GPR_U32(ctx, 31, 0x27A038u);
    ctx->pc = 0x27A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A030u;
    // 0x27a034: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x27A030u, 0x27A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A038u;
label_27a038:
    // 0x27a038: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a03c:
    // 0x27a03c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x27a03cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_27a040:
    // 0x27a040: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x27a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a044:
    // 0x27a044: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a048:
    // 0x27a048: 0x0  nop
    ctx->pc = 0x27a048u;
    // NOP
label_27a04c:
    // 0x27a04c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_27a050:
    if (ctx->pc == 0x27A050u) {
        ctx->pc = 0x27A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A04Cu;
        // 0x27a050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A054u;
        goto label_27a054;
    }
    ctx->pc = 0x27A04Cu;
    {
        const bool branch_taken_0x27a04c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A04Cu;
        // 0x27a050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a04c) {
            ctx->pc = 0x27A058u;
            goto label_27a058;
        }
    }
    ctx->pc = 0x27A054u;
label_27a054:
    // 0x27a054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a058:
    // 0x27a058: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27a058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27a05c:
    // 0x27a05c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27a05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27a060:
    // 0x27a060: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27a060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27a064:
    // 0x27a064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27a068:
    // 0x27a068: 0x3e00008  jr          $ra
label_27a06c:
    if (ctx->pc == 0x27A06Cu) {
        ctx->pc = 0x27A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A068u;
        // 0x27a06c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A070u;
        goto label_fallthrough_0x27a068;
    }
    ctx->pc = 0x27A068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A068u;
        // 0x27a06c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27a068:
    ctx->pc = 0x27A070u;
}
