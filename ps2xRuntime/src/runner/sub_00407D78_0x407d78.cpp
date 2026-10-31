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

// Function: sub_00407D78
// Address: 0x407d78 - 0x407ec0
void sub_00407D78_0x407d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407D78_0x407d78");
#endif

    switch (ctx->pc) {
        case 0x407d78u: goto label_407d78;
        case 0x407d7cu: goto label_407d7c;
        case 0x407d80u: goto label_407d80;
        case 0x407d84u: goto label_407d84;
        case 0x407d88u: goto label_407d88;
        case 0x407d8cu: goto label_407d8c;
        case 0x407d90u: goto label_407d90;
        case 0x407d94u: goto label_407d94;
        case 0x407d98u: goto label_407d98;
        case 0x407d9cu: goto label_407d9c;
        case 0x407da0u: goto label_407da0;
        case 0x407da4u: goto label_407da4;
        case 0x407da8u: goto label_407da8;
        case 0x407dacu: goto label_407dac;
        case 0x407db0u: goto label_407db0;
        case 0x407db4u: goto label_407db4;
        case 0x407db8u: goto label_407db8;
        case 0x407dbcu: goto label_407dbc;
        case 0x407dc0u: goto label_407dc0;
        case 0x407dc4u: goto label_407dc4;
        case 0x407dc8u: goto label_407dc8;
        case 0x407dccu: goto label_407dcc;
        case 0x407dd0u: goto label_407dd0;
        case 0x407dd4u: goto label_407dd4;
        case 0x407dd8u: goto label_407dd8;
        case 0x407ddcu: goto label_407ddc;
        case 0x407de0u: goto label_407de0;
        case 0x407de4u: goto label_407de4;
        case 0x407de8u: goto label_407de8;
        case 0x407decu: goto label_407dec;
        case 0x407df0u: goto label_407df0;
        case 0x407df4u: goto label_407df4;
        case 0x407df8u: goto label_407df8;
        case 0x407dfcu: goto label_407dfc;
        case 0x407e00u: goto label_407e00;
        case 0x407e04u: goto label_407e04;
        case 0x407e08u: goto label_407e08;
        case 0x407e0cu: goto label_407e0c;
        case 0x407e10u: goto label_407e10;
        case 0x407e14u: goto label_407e14;
        case 0x407e18u: goto label_407e18;
        case 0x407e1cu: goto label_407e1c;
        case 0x407e20u: goto label_407e20;
        case 0x407e24u: goto label_407e24;
        case 0x407e28u: goto label_407e28;
        case 0x407e2cu: goto label_407e2c;
        case 0x407e30u: goto label_407e30;
        case 0x407e34u: goto label_407e34;
        case 0x407e38u: goto label_407e38;
        case 0x407e3cu: goto label_407e3c;
        case 0x407e40u: goto label_407e40;
        case 0x407e44u: goto label_407e44;
        case 0x407e48u: goto label_407e48;
        case 0x407e4cu: goto label_407e4c;
        case 0x407e50u: goto label_407e50;
        case 0x407e54u: goto label_407e54;
        case 0x407e58u: goto label_407e58;
        case 0x407e5cu: goto label_407e5c;
        case 0x407e60u: goto label_407e60;
        case 0x407e64u: goto label_407e64;
        case 0x407e68u: goto label_407e68;
        case 0x407e6cu: goto label_407e6c;
        case 0x407e70u: goto label_407e70;
        case 0x407e74u: goto label_407e74;
        case 0x407e78u: goto label_407e78;
        case 0x407e7cu: goto label_407e7c;
        case 0x407e80u: goto label_407e80;
        case 0x407e84u: goto label_407e84;
        case 0x407e88u: goto label_407e88;
        case 0x407e8cu: goto label_407e8c;
        case 0x407e90u: goto label_407e90;
        case 0x407e94u: goto label_407e94;
        case 0x407e98u: goto label_407e98;
        case 0x407e9cu: goto label_407e9c;
        case 0x407ea0u: goto label_407ea0;
        case 0x407ea4u: goto label_407ea4;
        case 0x407ea8u: goto label_407ea8;
        case 0x407eacu: goto label_407eac;
        case 0x407eb0u: goto label_407eb0;
        case 0x407eb4u: goto label_407eb4;
        case 0x407eb8u: goto label_407eb8;
        case 0x407ebcu: goto label_407ebc;
        default: break;
    }

    ctx->pc = 0x407d78u;

label_407d78:
    // 0x407d78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x407d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_407d7c:
    // 0x407d7c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x407d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_407d80:
    // 0x407d80: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x407d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_407d84:
    // 0x407d84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x407d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_407d88:
    // 0x407d88: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x407d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_407d8c:
    // 0x407d8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x407d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407d90:
    // 0x407d90: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x407d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_407d94:
    // 0x407d94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x407d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_407d98:
    // 0x407d98: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x407d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_407d9c:
    // 0x407d9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x407d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_407da0:
    // 0x407da0: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x407da0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_407da4:
    // 0x407da4: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x407da4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_407da8:
    // 0x407da8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x407da8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_407dac:
    // 0x407dac: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x407dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_407db0:
    // 0x407db0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x407db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407db4:
    // 0x407db4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x407db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_407db8:
    // 0x407db8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x407db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_407dbc:
    // 0x407dbc: 0x40f809  jalr        $v0
label_407dc0:
    if (ctx->pc == 0x407DC0u) {
        ctx->pc = 0x407DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DBCu;
        // 0x407dc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DC4u;
        goto label_407dc4;
    }
    ctx->pc = 0x407DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407DC4u);
        ctx->pc = 0x407DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DBCu;
        // 0x407dc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407DBCu, 0x407DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407DC4u;
label_407dc4:
    // 0x407dc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x407dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407dc8:
    // 0x407dc8: 0xc0ea146  jal         func_3A8518
label_407dcc:
    if (ctx->pc == 0x407DCCu) {
        ctx->pc = 0x407DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DC8u;
        // 0x407dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DD0u;
        goto label_407dd0;
    }
    ctx->pc = 0x407DC8u;
    SET_GPR_U32(ctx, 31, 0x407DD0u);
    ctx->pc = 0x407DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407DC8u;
    // 0x407dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x407DC8u, 0x407DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407DD0u;
label_407dd0:
    // 0x407dd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x407dd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407dd4:
    // 0x407dd4: 0xc0ea146  jal         func_3A8518
label_407dd8:
    if (ctx->pc == 0x407DD8u) {
        ctx->pc = 0x407DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DD4u;
        // 0x407dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DDCu;
        goto label_407ddc;
    }
    ctx->pc = 0x407DD4u;
    SET_GPR_U32(ctx, 31, 0x407DDCu);
    ctx->pc = 0x407DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407DD4u;
    // 0x407dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x407DD4u, 0x407DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407DDCu;
label_407ddc:
    // 0x407ddc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x407ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407de0:
    // 0x407de0: 0xc0ea146  jal         func_3A8518
label_407de4:
    if (ctx->pc == 0x407DE4u) {
        ctx->pc = 0x407DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DE0u;
        // 0x407de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DE8u;
        goto label_407de8;
    }
    ctx->pc = 0x407DE0u;
    SET_GPR_U32(ctx, 31, 0x407DE8u);
    ctx->pc = 0x407DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407DE0u;
    // 0x407de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x407DE0u, 0x407DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407DE8u;
label_407de8:
    // 0x407de8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x407de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407dec:
    // 0x407dec: 0xc0ea13a  jal         func_3A84E8
label_407df0:
    if (ctx->pc == 0x407DF0u) {
        ctx->pc = 0x407DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DECu;
        // 0x407df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407DF4u;
        goto label_407df4;
    }
    ctx->pc = 0x407DECu;
    SET_GPR_U32(ctx, 31, 0x407DF4u);
    ctx->pc = 0x407DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407DECu;
    // 0x407df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x407DECu, 0x407DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407DF4u;
label_407df4:
    // 0x407df4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x407df4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_407df8:
    // 0x407df8: 0xc0ea13a  jal         func_3A84E8
label_407dfc:
    if (ctx->pc == 0x407DFCu) {
        ctx->pc = 0x407DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407DF8u;
        // 0x407dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E00u;
        goto label_407e00;
    }
    ctx->pc = 0x407DF8u;
    SET_GPR_U32(ctx, 31, 0x407E00u);
    ctx->pc = 0x407DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407DF8u;
    // 0x407dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x407DF8u, 0x407E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E00u;
label_407e00:
    // 0x407e00: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x407e00u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_407e04:
    // 0x407e04: 0xc0ea13a  jal         func_3A84E8
label_407e08:
    if (ctx->pc == 0x407E08u) {
        ctx->pc = 0x407E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E04u;
        // 0x407e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E0Cu;
        goto label_407e0c;
    }
    ctx->pc = 0x407E04u;
    SET_GPR_U32(ctx, 31, 0x407E0Cu);
    ctx->pc = 0x407E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E04u;
    // 0x407e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x407E04u, 0x407E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E0Cu;
label_407e0c:
    // 0x407e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407e10:
    // 0x407e10: 0xc0ea13a  jal         func_3A84E8
label_407e14:
    if (ctx->pc == 0x407E14u) {
        ctx->pc = 0x407E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E10u;
        // 0x407e14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E18u;
        goto label_407e18;
    }
    ctx->pc = 0x407E10u;
    SET_GPR_U32(ctx, 31, 0x407E18u);
    ctx->pc = 0x407E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E10u;
    // 0x407e14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x407E10u, 0x407E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E18u;
label_407e18:
    // 0x407e18: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x407e18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_407e1c:
    // 0x407e1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x407e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_407e20:
    // 0x407e20: 0xc0ea12a  jal         func_3A84A8
label_407e24:
    if (ctx->pc == 0x407E24u) {
        ctx->pc = 0x407E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E20u;
        // 0x407e24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E28u;
        goto label_407e28;
    }
    ctx->pc = 0x407E20u;
    SET_GPR_U32(ctx, 31, 0x407E28u);
    ctx->pc = 0x407E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E20u;
    // 0x407e24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x407E20u, 0x407E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E28u;
label_407e28:
    // 0x407e28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x407e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_407e2c:
    // 0x407e2c: 0xc0ea12a  jal         func_3A84A8
label_407e30:
    if (ctx->pc == 0x407E30u) {
        ctx->pc = 0x407E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E2Cu;
        // 0x407e30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E34u;
        goto label_407e34;
    }
    ctx->pc = 0x407E2Cu;
    SET_GPR_U32(ctx, 31, 0x407E34u);
    ctx->pc = 0x407E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E2Cu;
    // 0x407e30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x407E2Cu, 0x407E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E34u;
label_407e34:
    // 0x407e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x407e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_407e38:
    // 0x407e38: 0xc0e858c  jal         func_3A1630
label_407e3c:
    if (ctx->pc == 0x407E3Cu) {
        ctx->pc = 0x407E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407E38u;
        // 0x407e3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407E40u;
        goto label_407e40;
    }
    ctx->pc = 0x407E38u;
    SET_GPR_U32(ctx, 31, 0x407E40u);
    ctx->pc = 0x407E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407E38u;
    // 0x407e3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x407E38u, 0x407E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407E40u;
label_407e40:
    // 0x407e40: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x407e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_407e44:
    // 0x407e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x407e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_407e48:
    // 0x407e48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x407e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_407e4c:
    // 0x407e4c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x407e4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407e50:
    // 0x407e50: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x407e50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_407e54:
    // 0x407e54: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x407e54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407e58:
    // 0x407e58: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x407e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_407e5c:
    // 0x407e5c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x407e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_407e60:
    // 0x407e60: 0xa6540014  sh          $s4, 0x14($s2)
    ctx->pc = 0x407e60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 20));
label_407e64:
    // 0x407e64: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x407e64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_407e68:
    // 0x407e68: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x407e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_407e6c:
    // 0x407e6c: 0xe655001c  swc1        $f21, 0x1C($s2)
    ctx->pc = 0x407e6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_407e70:
    // 0x407e70: 0xe6570010  swc1        $f23, 0x10($s2)
    ctx->pc = 0x407e70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_407e74:
    // 0x407e74: 0xa6550016  sh          $s5, 0x16($s2)
    ctx->pc = 0x407e74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 21));
label_407e78:
    // 0x407e78: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x407e78u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_407e7c:
    // 0x407e7c: 0xae3300b4  sw          $s3, 0xB4($s1)
    ctx->pc = 0x407e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 19));
label_407e80:
    // 0x407e80: 0xe63600c0  swc1        $f22, 0xC0($s1)
    ctx->pc = 0x407e80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_407e84:
    // 0x407e84: 0xe63600bc  swc1        $f22, 0xBC($s1)
    ctx->pc = 0x407e84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_407e88:
    // 0x407e88: 0xae3300b0  sw          $s3, 0xB0($s1)
    ctx->pc = 0x407e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 19));
label_407e8c:
    // 0x407e8c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x407e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_407e90:
    // 0x407e90: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x407e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_407e94:
    // 0x407e94: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x407e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_407e98:
    // 0x407e98: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x407e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_407e9c:
    // 0x407e9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x407e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_407ea0:
    // 0x407ea0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x407ea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_407ea4:
    // 0x407ea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x407ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_407ea8:
    // 0x407ea8: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x407ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_407eac:
    // 0x407eac: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x407eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_407eb0:
    // 0x407eb0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x407eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_407eb4:
    // 0x407eb4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x407eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_407eb8:
    // 0x407eb8: 0x3e00008  jr          $ra
label_407ebc:
    if (ctx->pc == 0x407EBCu) {
        ctx->pc = 0x407EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EB8u;
        // 0x407ebc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407EC0u;
        goto label_fallthrough_0x407eb8;
    }
    ctx->pc = 0x407EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EB8u;
        // 0x407ebc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x407eb8:
    ctx->pc = 0x407EC0u;
}
