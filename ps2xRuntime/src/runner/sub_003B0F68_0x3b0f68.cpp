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

// Function: sub_003B0F68
// Address: 0x3b0f68 - 0x3b10f0
void sub_003B0F68_0x3b0f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0F68_0x3b0f68");
#endif

    switch (ctx->pc) {
        case 0x3b0f68u: goto label_3b0f68;
        case 0x3b0f6cu: goto label_3b0f6c;
        case 0x3b0f70u: goto label_3b0f70;
        case 0x3b0f74u: goto label_3b0f74;
        case 0x3b0f78u: goto label_3b0f78;
        case 0x3b0f7cu: goto label_3b0f7c;
        case 0x3b0f80u: goto label_3b0f80;
        case 0x3b0f84u: goto label_3b0f84;
        case 0x3b0f88u: goto label_3b0f88;
        case 0x3b0f8cu: goto label_3b0f8c;
        case 0x3b0f90u: goto label_3b0f90;
        case 0x3b0f94u: goto label_3b0f94;
        case 0x3b0f98u: goto label_3b0f98;
        case 0x3b0f9cu: goto label_3b0f9c;
        case 0x3b0fa0u: goto label_3b0fa0;
        case 0x3b0fa4u: goto label_3b0fa4;
        case 0x3b0fa8u: goto label_3b0fa8;
        case 0x3b0facu: goto label_3b0fac;
        case 0x3b0fb0u: goto label_3b0fb0;
        case 0x3b0fb4u: goto label_3b0fb4;
        case 0x3b0fb8u: goto label_3b0fb8;
        case 0x3b0fbcu: goto label_3b0fbc;
        case 0x3b0fc0u: goto label_3b0fc0;
        case 0x3b0fc4u: goto label_3b0fc4;
        case 0x3b0fc8u: goto label_3b0fc8;
        case 0x3b0fccu: goto label_3b0fcc;
        case 0x3b0fd0u: goto label_3b0fd0;
        case 0x3b0fd4u: goto label_3b0fd4;
        case 0x3b0fd8u: goto label_3b0fd8;
        case 0x3b0fdcu: goto label_3b0fdc;
        case 0x3b0fe0u: goto label_3b0fe0;
        case 0x3b0fe4u: goto label_3b0fe4;
        case 0x3b0fe8u: goto label_3b0fe8;
        case 0x3b0fecu: goto label_3b0fec;
        case 0x3b0ff0u: goto label_3b0ff0;
        case 0x3b0ff4u: goto label_3b0ff4;
        case 0x3b0ff8u: goto label_3b0ff8;
        case 0x3b0ffcu: goto label_3b0ffc;
        case 0x3b1000u: goto label_3b1000;
        case 0x3b1004u: goto label_3b1004;
        case 0x3b1008u: goto label_3b1008;
        case 0x3b100cu: goto label_3b100c;
        case 0x3b1010u: goto label_3b1010;
        case 0x3b1014u: goto label_3b1014;
        case 0x3b1018u: goto label_3b1018;
        case 0x3b101cu: goto label_3b101c;
        case 0x3b1020u: goto label_3b1020;
        case 0x3b1024u: goto label_3b1024;
        case 0x3b1028u: goto label_3b1028;
        case 0x3b102cu: goto label_3b102c;
        case 0x3b1030u: goto label_3b1030;
        case 0x3b1034u: goto label_3b1034;
        case 0x3b1038u: goto label_3b1038;
        case 0x3b103cu: goto label_3b103c;
        case 0x3b1040u: goto label_3b1040;
        case 0x3b1044u: goto label_3b1044;
        case 0x3b1048u: goto label_3b1048;
        case 0x3b104cu: goto label_3b104c;
        case 0x3b1050u: goto label_3b1050;
        case 0x3b1054u: goto label_3b1054;
        case 0x3b1058u: goto label_3b1058;
        case 0x3b105cu: goto label_3b105c;
        case 0x3b1060u: goto label_3b1060;
        case 0x3b1064u: goto label_3b1064;
        case 0x3b1068u: goto label_3b1068;
        case 0x3b106cu: goto label_3b106c;
        case 0x3b1070u: goto label_3b1070;
        case 0x3b1074u: goto label_3b1074;
        case 0x3b1078u: goto label_3b1078;
        case 0x3b107cu: goto label_3b107c;
        case 0x3b1080u: goto label_3b1080;
        case 0x3b1084u: goto label_3b1084;
        case 0x3b1088u: goto label_3b1088;
        case 0x3b108cu: goto label_3b108c;
        case 0x3b1090u: goto label_3b1090;
        case 0x3b1094u: goto label_3b1094;
        case 0x3b1098u: goto label_3b1098;
        case 0x3b109cu: goto label_3b109c;
        case 0x3b10a0u: goto label_3b10a0;
        case 0x3b10a4u: goto label_3b10a4;
        case 0x3b10a8u: goto label_3b10a8;
        case 0x3b10acu: goto label_3b10ac;
        case 0x3b10b0u: goto label_3b10b0;
        case 0x3b10b4u: goto label_3b10b4;
        case 0x3b10b8u: goto label_3b10b8;
        case 0x3b10bcu: goto label_3b10bc;
        case 0x3b10c0u: goto label_3b10c0;
        case 0x3b10c4u: goto label_3b10c4;
        case 0x3b10c8u: goto label_3b10c8;
        case 0x3b10ccu: goto label_3b10cc;
        case 0x3b10d0u: goto label_3b10d0;
        case 0x3b10d4u: goto label_3b10d4;
        case 0x3b10d8u: goto label_3b10d8;
        case 0x3b10dcu: goto label_3b10dc;
        case 0x3b10e0u: goto label_3b10e0;
        case 0x3b10e4u: goto label_3b10e4;
        case 0x3b10e8u: goto label_3b10e8;
        case 0x3b10ecu: goto label_3b10ec;
        default: break;
    }

    ctx->pc = 0x3b0f68u;

label_3b0f68:
    // 0x3b0f68: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x3b0f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_3b0f6c:
    // 0x3b0f6c: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x3b0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
label_3b0f70:
    // 0x3b0f70: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x3b0f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
label_3b0f74:
    // 0x3b0f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b0f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f78:
    // 0x3b0f78: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x3b0f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_3b0f7c:
    // 0x3b0f7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b0f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f80:
    // 0x3b0f80: 0x7fb304a0  sq          $s3, 0x4A0($sp)
    ctx->pc = 0x3b0f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 19));
label_3b0f84:
    // 0x3b0f84: 0x7fb40490  sq          $s4, 0x490($sp)
    ctx->pc = 0x3b0f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 20));
label_3b0f88:
    // 0x3b0f88: 0x7fb50480  sq          $s5, 0x480($sp)
    ctx->pc = 0x3b0f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 21));
label_3b0f8c:
    // 0x3b0f8c: 0x7fb60470  sq          $s6, 0x470($sp)
    ctx->pc = 0x3b0f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 22));
label_3b0f90:
    // 0x3b0f90: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3b0f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3b0f94:
    // 0x3b0f94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b0f98:
    // 0x3b0f98: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b0f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b0f9c:
    // 0x3b0f9c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b0fa0:
    // 0x3b0fa0: 0x40f809  jalr        $v0
label_3b0fa4:
    if (ctx->pc == 0x3B0FA4u) {
        ctx->pc = 0x3B0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FA0u;
        // 0x3b0fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FA8u;
        goto label_3b0fa8;
    }
    ctx->pc = 0x3B0FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0FA8u);
        ctx->pc = 0x3B0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FA0u;
        // 0x3b0fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0FA0u, 0x3B0FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0FA8u;
label_3b0fa8:
    // 0x3b0fa8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b0fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0fac:
    // 0x3b0fac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b0facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b0fb0:
    // 0x3b0fb0: 0xc0e858c  jal         func_3A1630
label_3b0fb4:
    if (ctx->pc == 0x3B0FB4u) {
        ctx->pc = 0x3B0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FB0u;
        // 0x3b0fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FB8u;
        goto label_3b0fb8;
    }
    ctx->pc = 0x3B0FB0u;
    SET_GPR_U32(ctx, 31, 0x3B0FB8u);
    ctx->pc = 0x3B0FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FB0u;
    // 0x3b0fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B0FB0u, 0x3B0FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FB8u;
label_3b0fb8:
    // 0x3b0fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b0fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b0fbc:
    // 0x3b0fbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b0fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0fc0:
    // 0x3b0fc0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3b0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3b0fc4:
    // 0x3b0fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0fc8:
    // 0x3b0fc8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3b0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3b0fcc:
    // 0x3b0fcc: 0xc0ea146  jal         func_3A8518
label_3b0fd0:
    if (ctx->pc == 0x3B0FD0u) {
        ctx->pc = 0x3B0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FCCu;
        // 0x3b0fd0: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FD4u;
        goto label_3b0fd4;
    }
    ctx->pc = 0x3B0FCCu;
    SET_GPR_U32(ctx, 31, 0x3B0FD4u);
    ctx->pc = 0x3B0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FCCu;
    // 0x3b0fd0: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B0FCCu, 0x3B0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FD4u;
label_3b0fd4:
    // 0x3b0fd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b0fd8:
    // 0x3b0fd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b0fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0fdc:
    // 0x3b0fdc: 0xc0ea12a  jal         func_3A84A8
label_3b0fe0:
    if (ctx->pc == 0x3B0FE0u) {
        ctx->pc = 0x3B0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FDCu;
        // 0x3b0fe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FE4u;
        goto label_3b0fe4;
    }
    ctx->pc = 0x3B0FDCu;
    SET_GPR_U32(ctx, 31, 0x3B0FE4u);
    ctx->pc = 0x3B0FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FDCu;
    // 0x3b0fe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B0FDCu, 0x3B0FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FE4u;
label_3b0fe4:
    // 0x3b0fe4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b0fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0fe8:
    // 0x3b0fe8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b0fec:
    // 0x3b0fec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b0fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0ff0:
    // 0x3b0ff0: 0xc0ea12a  jal         func_3A84A8
label_3b0ff4:
    if (ctx->pc == 0x3B0FF4u) {
        ctx->pc = 0x3B0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FF0u;
        // 0x3b0ff4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0FF8u;
        goto label_3b0ff8;
    }
    ctx->pc = 0x3B0FF0u;
    SET_GPR_U32(ctx, 31, 0x3B0FF8u);
    ctx->pc = 0x3B0FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0FF0u;
    // 0x3b0ff4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B0FF0u, 0x3B0FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0FF8u;
label_3b0ff8:
    // 0x3b0ff8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b0ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0ffc:
    // 0x3b0ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1000:
    // 0x3b1000: 0xc0ea146  jal         func_3A8518
label_3b1004:
    if (ctx->pc == 0x3B1004u) {
        ctx->pc = 0x3B1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1000u;
        // 0x3b1004: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1008u;
        goto label_3b1008;
    }
    ctx->pc = 0x3B1000u;
    SET_GPR_U32(ctx, 31, 0x3B1008u);
    ctx->pc = 0x3B1004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1000u;
    // 0x3b1004: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B1000u, 0x3B1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1008u;
label_3b1008:
    // 0x3b1008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b100c:
    // 0x3b100c: 0xc0ea14c  jal         func_3A8530
label_3b1010:
    if (ctx->pc == 0x3B1010u) {
        ctx->pc = 0x3B1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B100Cu;
        // 0x3b1010: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1014u;
        goto label_3b1014;
    }
    ctx->pc = 0x3B100Cu;
    SET_GPR_U32(ctx, 31, 0x3B1014u);
    ctx->pc = 0x3B1010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B100Cu;
    // 0x3b1010: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B100Cu, 0x3B1014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1014u;
label_3b1014:
    // 0x3b1014: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b1014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1018:
    // 0x3b1018: 0xc0ea146  jal         func_3A8518
label_3b101c:
    if (ctx->pc == 0x3B101Cu) {
        ctx->pc = 0x3B101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1018u;
        // 0x3b101c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1020u;
        goto label_3b1020;
    }
    ctx->pc = 0x3B1018u;
    SET_GPR_U32(ctx, 31, 0x3B1020u);
    ctx->pc = 0x3B101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1018u;
    // 0x3b101c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B1018u, 0x3B1020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1020u;
label_3b1020:
    // 0x3b1020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1024:
    // 0x3b1024: 0xc0e862e  jal         func_3A18B8
label_3b1028:
    if (ctx->pc == 0x3B1028u) {
        ctx->pc = 0x3B1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1024u;
        // 0x3b1028: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B102Cu;
        goto label_3b102c;
    }
    ctx->pc = 0x3B1024u;
    SET_GPR_U32(ctx, 31, 0x3B102Cu);
    ctx->pc = 0x3B1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1024u;
    // 0x3b1028: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3B1024u, 0x3B102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B102Cu;
label_3b102c:
    // 0x3b102c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1030:
    // 0x3b1030: 0xc0e896c  jal         func_3A25B0
label_3b1034:
    if (ctx->pc == 0x3B1034u) {
        ctx->pc = 0x3B1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1030u;
        // 0x3b1034: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1038u;
        goto label_3b1038;
    }
    ctx->pc = 0x3B1030u;
    SET_GPR_U32(ctx, 31, 0x3B1038u);
    ctx->pc = 0x3B1034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1030u;
    // 0x3b1034: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3B1030u, 0x3B1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1038u;
label_3b1038:
    // 0x3b1038: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3b1038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3b103c:
    // 0x3b103c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b1040:
    // 0x3b1040: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3b1040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3b1044:
    // 0x3b1044: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3b1044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3b1048:
    // 0x3b1048: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3b1048u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3b104c:
    // 0x3b104c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3b104cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3b1050:
    // 0x3b1050: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3b1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3b1054:
    // 0x3b1054: 0x40f809  jalr        $v0
label_3b1058:
    if (ctx->pc == 0x3B1058u) {
        ctx->pc = 0x3B1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1054u;
        // 0x3b1058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B105Cu;
        goto label_3b105c;
    }
    ctx->pc = 0x3B1054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B105Cu);
        ctx->pc = 0x3B1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1054u;
        // 0x3b1058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1054u, 0x3B105Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B105Cu;
label_3b105c:
    // 0x3b105c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x3b105cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b1060:
    // 0x3b1060: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b1060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1064:
    // 0x3b1064: 0xc0e90ca  jal         func_3A4328
label_3b1068:
    if (ctx->pc == 0x3B1068u) {
        ctx->pc = 0x3B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1064u;
        // 0x3b1068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B106Cu;
        goto label_3b106c;
    }
    ctx->pc = 0x3B1064u;
    SET_GPR_U32(ctx, 31, 0x3B106Cu);
    ctx->pc = 0x3B1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1064u;
    // 0x3b1068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B1064u, 0x3B106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B106Cu;
label_3b106c:
    // 0x3b106c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b106cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1070:
    // 0x3b1070: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b1070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1074:
    // 0x3b1074: 0xae920014  sw          $s2, 0x14($s4)
    ctx->pc = 0x3b1074u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 18));
label_3b1078:
    // 0x3b1078: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x3b1078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_3b107c:
    // 0x3b107c: 0xc0e9694  jal         func_3A5A50
label_3b1080:
    if (ctx->pc == 0x3B1080u) {
        ctx->pc = 0x3B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B107Cu;
        // 0x3b1080: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1084u;
        goto label_3b1084;
    }
    ctx->pc = 0x3B107Cu;
    SET_GPR_U32(ctx, 31, 0x3B1084u);
    ctx->pc = 0x3B1080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B107Cu;
    // 0x3b1080: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B107Cu, 0x3B1084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1084u;
label_3b1084:
    // 0x3b1084: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3b1088:
    if (ctx->pc == 0x3B1088u) {
        ctx->pc = 0x3B1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1084u;
        // 0x3b1088: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B108Cu;
        goto label_3b108c;
    }
    ctx->pc = 0x3B1084u;
    {
        const bool branch_taken_0x3b1084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1084u;
        // 0x3b1088: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1084) {
            ctx->pc = 0x3B10C4u;
            goto label_3b10c4;
        }
    }
    ctx->pc = 0x3B108Cu;
label_3b108c:
    // 0x3b108c: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x3b108cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_3b1090:
    // 0x3b1090: 0xafb60440  sw          $s6, 0x440($sp)
    ctx->pc = 0x3b1090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 22));
label_3b1094:
    // 0x3b1094: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3b1094u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3b1098:
    // 0x3b1098: 0x26311fe0  addiu       $s1, $s1, 0x1FE0
    ctx->pc = 0x3b1098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8160));
label_3b109c:
    // 0x3b109c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b109cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b10a0:
    // 0x3b10a0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3b10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3b10a4:
    // 0x3b10a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b10a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b10a8:
    // 0x3b10a8: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3b10a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3b10ac:
    // 0x3b10ac: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3b10acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b10b0:
    // 0x3b10b0: 0xc0e9fa6  jal         func_3A7E98
label_3b10b4:
    if (ctx->pc == 0x3B10B4u) {
        ctx->pc = 0x3B10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10B0u;
        // 0x3b10b4: 0xafa20450  sw          $v0, 0x450($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10B8u;
        goto label_3b10b8;
    }
    ctx->pc = 0x3B10B0u;
    SET_GPR_U32(ctx, 31, 0x3B10B8u);
    ctx->pc = 0x3B10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B10B0u;
    // 0x3b10b4: 0xafa20450  sw          $v0, 0x450($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B10B0u, 0x3B10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B10B8u;
label_3b10b8:
    // 0x3b10b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b10b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b10bc:
    // 0x3b10bc: 0xc0f15bc  jal         func_3C56F0
label_3b10c0:
    if (ctx->pc == 0x3B10C0u) {
        ctx->pc = 0x3B10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10BCu;
        // 0x3b10c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10C4u;
        goto label_3b10c4;
    }
    ctx->pc = 0x3B10BCu;
    SET_GPR_U32(ctx, 31, 0x3B10C4u);
    ctx->pc = 0x3B10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B10BCu;
    // 0x3b10c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B10BCu, 0x3B10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B10C4u;
label_3b10c4:
    // 0x3b10c4: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x3b10c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3b10c8:
    // 0x3b10c8: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x3b10c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3b10cc:
    // 0x3b10cc: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x3b10ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3b10d0:
    // 0x3b10d0: 0x7bb304a0  lq          $s3, 0x4A0($sp)
    ctx->pc = 0x3b10d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3b10d4:
    // 0x3b10d4: 0x7bb40490  lq          $s4, 0x490($sp)
    ctx->pc = 0x3b10d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3b10d8:
    // 0x3b10d8: 0x7bb50480  lq          $s5, 0x480($sp)
    ctx->pc = 0x3b10d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3b10dc:
    // 0x3b10dc: 0x7bb60470  lq          $s6, 0x470($sp)
    ctx->pc = 0x3b10dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3b10e0:
    // 0x3b10e0: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3b10e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3b10e4:
    // 0x3b10e4: 0x3e00008  jr          $ra
label_3b10e8:
    if (ctx->pc == 0x3B10E8u) {
        ctx->pc = 0x3B10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10E4u;
        // 0x3b10e8: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10ECu;
        goto label_3b10ec;
    }
    ctx->pc = 0x3B10E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10E4u;
        // 0x3b10e8: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B10E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B10ECu;
label_3b10ec:
    // 0x3b10ec: 0x0  nop
    ctx->pc = 0x3b10ecu;
    // NOP
    ctx->pc = 0x3b10f0u;
}
