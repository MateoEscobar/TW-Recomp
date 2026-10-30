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

// Function: sub_002E0DC8
// Address: 0x2e0dc8 - 0x2e1140
void sub_002E0DC8_0x2e0dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0DC8_0x2e0dc8");
#endif

    switch (ctx->pc) {
        case 0x2e0dc8u: goto label_2e0dc8;
        case 0x2e0dccu: goto label_2e0dcc;
        case 0x2e0dd0u: goto label_2e0dd0;
        case 0x2e0dd4u: goto label_2e0dd4;
        case 0x2e0dd8u: goto label_2e0dd8;
        case 0x2e0ddcu: goto label_2e0ddc;
        case 0x2e0de0u: goto label_2e0de0;
        case 0x2e0de4u: goto label_2e0de4;
        case 0x2e0de8u: goto label_2e0de8;
        case 0x2e0decu: goto label_2e0dec;
        case 0x2e0df0u: goto label_2e0df0;
        case 0x2e0df4u: goto label_2e0df4;
        case 0x2e0df8u: goto label_2e0df8;
        case 0x2e0dfcu: goto label_2e0dfc;
        case 0x2e0e00u: goto label_2e0e00;
        case 0x2e0e04u: goto label_2e0e04;
        case 0x2e0e08u: goto label_2e0e08;
        case 0x2e0e0cu: goto label_2e0e0c;
        case 0x2e0e10u: goto label_2e0e10;
        case 0x2e0e14u: goto label_2e0e14;
        case 0x2e0e18u: goto label_2e0e18;
        case 0x2e0e1cu: goto label_2e0e1c;
        case 0x2e0e20u: goto label_2e0e20;
        case 0x2e0e24u: goto label_2e0e24;
        case 0x2e0e28u: goto label_2e0e28;
        case 0x2e0e2cu: goto label_2e0e2c;
        case 0x2e0e30u: goto label_2e0e30;
        case 0x2e0e34u: goto label_2e0e34;
        case 0x2e0e38u: goto label_2e0e38;
        case 0x2e0e3cu: goto label_2e0e3c;
        case 0x2e0e40u: goto label_2e0e40;
        case 0x2e0e44u: goto label_2e0e44;
        case 0x2e0e48u: goto label_2e0e48;
        case 0x2e0e4cu: goto label_2e0e4c;
        case 0x2e0e50u: goto label_2e0e50;
        case 0x2e0e54u: goto label_2e0e54;
        case 0x2e0e58u: goto label_2e0e58;
        case 0x2e0e5cu: goto label_2e0e5c;
        case 0x2e0e60u: goto label_2e0e60;
        case 0x2e0e64u: goto label_2e0e64;
        case 0x2e0e68u: goto label_2e0e68;
        case 0x2e0e6cu: goto label_2e0e6c;
        case 0x2e0e70u: goto label_2e0e70;
        case 0x2e0e74u: goto label_2e0e74;
        case 0x2e0e78u: goto label_2e0e78;
        case 0x2e0e7cu: goto label_2e0e7c;
        case 0x2e0e80u: goto label_2e0e80;
        case 0x2e0e84u: goto label_2e0e84;
        case 0x2e0e88u: goto label_2e0e88;
        case 0x2e0e8cu: goto label_2e0e8c;
        case 0x2e0e90u: goto label_2e0e90;
        case 0x2e0e94u: goto label_2e0e94;
        case 0x2e0e98u: goto label_2e0e98;
        case 0x2e0e9cu: goto label_2e0e9c;
        case 0x2e0ea0u: goto label_2e0ea0;
        case 0x2e0ea4u: goto label_2e0ea4;
        case 0x2e0ea8u: goto label_2e0ea8;
        case 0x2e0eacu: goto label_2e0eac;
        case 0x2e0eb0u: goto label_2e0eb0;
        case 0x2e0eb4u: goto label_2e0eb4;
        case 0x2e0eb8u: goto label_2e0eb8;
        case 0x2e0ebcu: goto label_2e0ebc;
        case 0x2e0ec0u: goto label_2e0ec0;
        case 0x2e0ec4u: goto label_2e0ec4;
        case 0x2e0ec8u: goto label_2e0ec8;
        case 0x2e0eccu: goto label_2e0ecc;
        case 0x2e0ed0u: goto label_2e0ed0;
        case 0x2e0ed4u: goto label_2e0ed4;
        case 0x2e0ed8u: goto label_2e0ed8;
        case 0x2e0edcu: goto label_2e0edc;
        case 0x2e0ee0u: goto label_2e0ee0;
        case 0x2e0ee4u: goto label_2e0ee4;
        case 0x2e0ee8u: goto label_2e0ee8;
        case 0x2e0eecu: goto label_2e0eec;
        case 0x2e0ef0u: goto label_2e0ef0;
        case 0x2e0ef4u: goto label_2e0ef4;
        case 0x2e0ef8u: goto label_2e0ef8;
        case 0x2e0efcu: goto label_2e0efc;
        case 0x2e0f00u: goto label_2e0f00;
        case 0x2e0f04u: goto label_2e0f04;
        case 0x2e0f08u: goto label_2e0f08;
        case 0x2e0f0cu: goto label_2e0f0c;
        case 0x2e0f10u: goto label_2e0f10;
        case 0x2e0f14u: goto label_2e0f14;
        case 0x2e0f18u: goto label_2e0f18;
        case 0x2e0f1cu: goto label_2e0f1c;
        case 0x2e0f20u: goto label_2e0f20;
        case 0x2e0f24u: goto label_2e0f24;
        case 0x2e0f28u: goto label_2e0f28;
        case 0x2e0f2cu: goto label_2e0f2c;
        case 0x2e0f30u: goto label_2e0f30;
        case 0x2e0f34u: goto label_2e0f34;
        case 0x2e0f38u: goto label_2e0f38;
        case 0x2e0f3cu: goto label_2e0f3c;
        case 0x2e0f40u: goto label_2e0f40;
        case 0x2e0f44u: goto label_2e0f44;
        case 0x2e0f48u: goto label_2e0f48;
        case 0x2e0f4cu: goto label_2e0f4c;
        case 0x2e0f50u: goto label_2e0f50;
        case 0x2e0f54u: goto label_2e0f54;
        case 0x2e0f58u: goto label_2e0f58;
        case 0x2e0f5cu: goto label_2e0f5c;
        case 0x2e0f60u: goto label_2e0f60;
        case 0x2e0f64u: goto label_2e0f64;
        case 0x2e0f68u: goto label_2e0f68;
        case 0x2e0f6cu: goto label_2e0f6c;
        case 0x2e0f70u: goto label_2e0f70;
        case 0x2e0f74u: goto label_2e0f74;
        case 0x2e0f78u: goto label_2e0f78;
        case 0x2e0f7cu: goto label_2e0f7c;
        case 0x2e0f80u: goto label_2e0f80;
        case 0x2e0f84u: goto label_2e0f84;
        case 0x2e0f88u: goto label_2e0f88;
        case 0x2e0f8cu: goto label_2e0f8c;
        case 0x2e0f90u: goto label_2e0f90;
        case 0x2e0f94u: goto label_2e0f94;
        case 0x2e0f98u: goto label_2e0f98;
        case 0x2e0f9cu: goto label_2e0f9c;
        case 0x2e0fa0u: goto label_2e0fa0;
        case 0x2e0fa4u: goto label_2e0fa4;
        case 0x2e0fa8u: goto label_2e0fa8;
        case 0x2e0facu: goto label_2e0fac;
        case 0x2e0fb0u: goto label_2e0fb0;
        case 0x2e0fb4u: goto label_2e0fb4;
        case 0x2e0fb8u: goto label_2e0fb8;
        case 0x2e0fbcu: goto label_2e0fbc;
        case 0x2e0fc0u: goto label_2e0fc0;
        case 0x2e0fc4u: goto label_2e0fc4;
        case 0x2e0fc8u: goto label_2e0fc8;
        case 0x2e0fccu: goto label_2e0fcc;
        case 0x2e0fd0u: goto label_2e0fd0;
        case 0x2e0fd4u: goto label_2e0fd4;
        case 0x2e0fd8u: goto label_2e0fd8;
        case 0x2e0fdcu: goto label_2e0fdc;
        case 0x2e0fe0u: goto label_2e0fe0;
        case 0x2e0fe4u: goto label_2e0fe4;
        case 0x2e0fe8u: goto label_2e0fe8;
        case 0x2e0fecu: goto label_2e0fec;
        case 0x2e0ff0u: goto label_2e0ff0;
        case 0x2e0ff4u: goto label_2e0ff4;
        case 0x2e0ff8u: goto label_2e0ff8;
        case 0x2e0ffcu: goto label_2e0ffc;
        case 0x2e1000u: goto label_2e1000;
        case 0x2e1004u: goto label_2e1004;
        case 0x2e1008u: goto label_2e1008;
        case 0x2e100cu: goto label_2e100c;
        case 0x2e1010u: goto label_2e1010;
        case 0x2e1014u: goto label_2e1014;
        case 0x2e1018u: goto label_2e1018;
        case 0x2e101cu: goto label_2e101c;
        case 0x2e1020u: goto label_2e1020;
        case 0x2e1024u: goto label_2e1024;
        case 0x2e1028u: goto label_2e1028;
        case 0x2e102cu: goto label_2e102c;
        case 0x2e1030u: goto label_2e1030;
        case 0x2e1034u: goto label_2e1034;
        case 0x2e1038u: goto label_2e1038;
        case 0x2e103cu: goto label_2e103c;
        case 0x2e1040u: goto label_2e1040;
        case 0x2e1044u: goto label_2e1044;
        case 0x2e1048u: goto label_2e1048;
        case 0x2e104cu: goto label_2e104c;
        case 0x2e1050u: goto label_2e1050;
        case 0x2e1054u: goto label_2e1054;
        case 0x2e1058u: goto label_2e1058;
        case 0x2e105cu: goto label_2e105c;
        case 0x2e1060u: goto label_2e1060;
        case 0x2e1064u: goto label_2e1064;
        case 0x2e1068u: goto label_2e1068;
        case 0x2e106cu: goto label_2e106c;
        case 0x2e1070u: goto label_2e1070;
        case 0x2e1074u: goto label_2e1074;
        case 0x2e1078u: goto label_2e1078;
        case 0x2e107cu: goto label_2e107c;
        case 0x2e1080u: goto label_2e1080;
        case 0x2e1084u: goto label_2e1084;
        case 0x2e1088u: goto label_2e1088;
        case 0x2e108cu: goto label_2e108c;
        case 0x2e1090u: goto label_2e1090;
        case 0x2e1094u: goto label_2e1094;
        case 0x2e1098u: goto label_2e1098;
        case 0x2e109cu: goto label_2e109c;
        case 0x2e10a0u: goto label_2e10a0;
        case 0x2e10a4u: goto label_2e10a4;
        case 0x2e10a8u: goto label_2e10a8;
        case 0x2e10acu: goto label_2e10ac;
        case 0x2e10b0u: goto label_2e10b0;
        case 0x2e10b4u: goto label_2e10b4;
        case 0x2e10b8u: goto label_2e10b8;
        case 0x2e10bcu: goto label_2e10bc;
        case 0x2e10c0u: goto label_2e10c0;
        case 0x2e10c4u: goto label_2e10c4;
        case 0x2e10c8u: goto label_2e10c8;
        case 0x2e10ccu: goto label_2e10cc;
        case 0x2e10d0u: goto label_2e10d0;
        case 0x2e10d4u: goto label_2e10d4;
        case 0x2e10d8u: goto label_2e10d8;
        case 0x2e10dcu: goto label_2e10dc;
        case 0x2e10e0u: goto label_2e10e0;
        case 0x2e10e4u: goto label_2e10e4;
        case 0x2e10e8u: goto label_2e10e8;
        case 0x2e10ecu: goto label_2e10ec;
        case 0x2e10f0u: goto label_2e10f0;
        case 0x2e10f4u: goto label_2e10f4;
        case 0x2e10f8u: goto label_2e10f8;
        case 0x2e10fcu: goto label_2e10fc;
        case 0x2e1100u: goto label_2e1100;
        case 0x2e1104u: goto label_2e1104;
        case 0x2e1108u: goto label_2e1108;
        case 0x2e110cu: goto label_2e110c;
        case 0x2e1110u: goto label_2e1110;
        case 0x2e1114u: goto label_2e1114;
        case 0x2e1118u: goto label_2e1118;
        case 0x2e111cu: goto label_2e111c;
        case 0x2e1120u: goto label_2e1120;
        case 0x2e1124u: goto label_2e1124;
        case 0x2e1128u: goto label_2e1128;
        case 0x2e112cu: goto label_2e112c;
        case 0x2e1130u: goto label_2e1130;
        case 0x2e1134u: goto label_2e1134;
        case 0x2e1138u: goto label_2e1138;
        case 0x2e113cu: goto label_2e113c;
        default: break;
    }

    ctx->pc = 0x2e0dc8u;

label_2e0dc8:
    // 0x2e0dc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e0dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2e0dcc:
    // 0x2e0dcc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e0dd0:
    // 0x2e0dd0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2e0dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2e0dd4:
    // 0x2e0dd4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2e0dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2e0dd8:
    // 0x2e0dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0ddc:
    // 0x2e0ddc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2e0ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2e0de0:
    // 0x2e0de0: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2e0de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e0de4:
    // 0x2e0de4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2e0de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2e0de8:
    // 0x2e0de8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2e0de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2e0dec:
    // 0x2e0dec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e0decu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0df0:
    // 0x2e0df0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2e0df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2e0df4:
    // 0x2e0df4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e0df8:
    // 0x2e0df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e0dfc:
    // 0x2e0dfc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2e0dfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2e0e00:
    // 0x2e0e00: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2e0e00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2e0e04:
    // 0x2e0e04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0e08:
    // 0x2e0e08: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2e0e08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e0e0c:
    // 0x2e0e0c: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2e0e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2e0e10:
    // 0x2e0e10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e0e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e0e14:
    // 0x2e0e14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e0e18:
    // 0x2e0e18: 0xc08bfbc  jal         func_22FEF0
label_2e0e1c:
    if (ctx->pc == 0x2E0E1Cu) {
        ctx->pc = 0x2E0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E18u;
        // 0x2e0e1c: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0E20u;
        goto label_2e0e20;
    }
    ctx->pc = 0x2E0E18u;
    SET_GPR_U32(ctx, 31, 0x2E0E20u);
    ctx->pc = 0x2E0E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E18u;
    // 0x2e0e1c: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2E0E18u, 0x2E0E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E20u;
label_2e0e20:
    // 0x2e0e20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e0e24:
    // 0x2e0e24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e0e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0e28:
    // 0x2e0e28: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2e0e2c:
    if (ctx->pc == 0x2E0E2Cu) {
        ctx->pc = 0x2E0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E28u;
        // 0x2e0e2c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0E30u;
        goto label_2e0e30;
    }
    ctx->pc = 0x2E0E28u;
    {
        const bool branch_taken_0x2e0e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e28) {
            ctx->pc = 0x2E0E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0E28u;
            // 0x2e0e2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E30u;
            goto label_2e0e30;
        }
    }
    ctx->pc = 0x2E0E30u;
label_2e0e30:
    // 0x2e0e30: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2e0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2e0e34:
    // 0x2e0e34: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e0e34u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2e0e38:
    // 0x2e0e38: 0x2010  mfhi        $a0
    ctx->pc = 0x2e0e38u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2e0e3c:
    // 0x2e0e3c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_2e0e40:
    if (ctx->pc == 0x2E0E40u) {
        ctx->pc = 0x2E0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E3Cu;
        // 0x2e0e40: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0E44u;
        goto label_2e0e44;
    }
    ctx->pc = 0x2E0E3Cu;
    {
        const bool branch_taken_0x2e0e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e3c) {
            ctx->pc = 0x2E0E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0E3Cu;
            // 0x2e0e40: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E50u;
            goto label_2e0e50;
        }
    }
    ctx->pc = 0x2E0E44u;
label_2e0e44:
    // 0x2e0e44: 0xc0b8338  jal         func_2E0CE0
label_2e0e48:
    if (ctx->pc == 0x2E0E48u) {
        ctx->pc = 0x2E0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E44u;
        // 0x2e0e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0E4Cu;
        goto label_2e0e4c;
    }
    ctx->pc = 0x2E0E44u;
    SET_GPR_U32(ctx, 31, 0x2E0E4Cu);
    ctx->pc = 0x2E0E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E44u;
    // 0x2e0e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0CE0u, 0x2E0E44u, 0x2E0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E4Cu;
label_2e0e4c:
    // 0x2e0e4c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2e0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e0e50:
    // 0x2e0e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e0e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e0e54:
    // 0x2e0e54: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2e0e54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0e58:
    // 0x2e0e58: 0xc0e409a  jal         func_390268
label_2e0e5c:
    if (ctx->pc == 0x2E0E5Cu) {
        ctx->pc = 0x2E0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E58u;
        // 0x2e0e5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0E60u;
        goto label_2e0e60;
    }
    ctx->pc = 0x2E0E58u;
    SET_GPR_U32(ctx, 31, 0x2E0E60u);
    ctx->pc = 0x2E0E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E58u;
    // 0x2e0e5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E0E58u, 0x2E0E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E60u;
label_2e0e60:
    // 0x2e0e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0e64:
    // 0x2e0e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e0e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0e68:
    // 0x2e0e68: 0xc0a352c  jal         func_28D4B0
label_2e0e6c:
    if (ctx->pc == 0x2E0E6Cu) {
        ctx->pc = 0x2E0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E68u;
        // 0x2e0e6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0E70u;
        goto label_2e0e70;
    }
    ctx->pc = 0x2E0E68u;
    SET_GPR_U32(ctx, 31, 0x2E0E70u);
    ctx->pc = 0x2E0E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E68u;
    // 0x2e0e6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2E0E68u, 0x2E0E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E70u;
label_2e0e70:
    // 0x2e0e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0e74:
    // 0x2e0e74: 0x3c01451c  lui         $at, 0x451C
    ctx->pc = 0x2e0e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17692 << 16));
label_2e0e78:
    // 0x2e0e78: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2e0e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_2e0e7c:
    // 0x2e0e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e0e80:
    // 0x2e0e80: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2e0e84:
    if (ctx->pc == 0x2E0E84u) {
        ctx->pc = 0x2E0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E80u;
        // 0x2e0e84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0E88u;
        goto label_2e0e88;
    }
    ctx->pc = 0x2E0E80u;
    {
        const bool branch_taken_0x2e0e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E80u;
        // 0x2e0e84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e80) {
            ctx->pc = 0x2E0E9Cu;
            goto label_2e0e9c;
        }
    }
    ctx->pc = 0x2E0E88u;
label_2e0e88:
    // 0x2e0e88: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2e0e88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2e0e8c:
    // 0x2e0e8c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e0e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e0e90:
    // 0x2e0e90: 0xc0cdb38  jal         func_336CE0
label_2e0e94:
    if (ctx->pc == 0x2E0E94u) {
        ctx->pc = 0x2E0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E90u;
        // 0x2e0e94: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0E98u;
        goto label_2e0e98;
    }
    ctx->pc = 0x2E0E90u;
    SET_GPR_U32(ctx, 31, 0x2E0E98u);
    ctx->pc = 0x2E0E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E90u;
    // 0x2e0e94: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E0E90u, 0x2E0E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E98u;
label_2e0e98:
    // 0x2e0e98: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2e0e98u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2e0e9c:
    // 0x2e0e9c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x2e0e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e0ea0:
    // 0x2e0ea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e0ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e0ea4:
    // 0x2e0ea4: 0x0  nop
    ctx->pc = 0x2e0ea4u;
    // NOP
label_2e0ea8:
    // 0x2e0ea8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_2e0eac:
    if (ctx->pc == 0x2E0EACu) {
        ctx->pc = 0x2E0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EA8u;
        // 0x2e0eac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0EB0u;
        goto label_2e0eb0;
    }
    ctx->pc = 0x2E0EA8u;
    {
        const bool branch_taken_0x2e0ea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EA8u;
        // 0x2e0eac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ea8) {
            ctx->pc = 0x2E0F10u;
            goto label_2e0f10;
        }
    }
    ctx->pc = 0x2E0EB0u;
label_2e0eb0:
    // 0x2e0eb0: 0xc088bd2  jal         func_222F48
label_2e0eb4:
    if (ctx->pc == 0x2E0EB4u) {
        ctx->pc = 0x2E0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EB0u;
        // 0x2e0eb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0EB8u;
        goto label_2e0eb8;
    }
    ctx->pc = 0x2E0EB0u;
    SET_GPR_U32(ctx, 31, 0x2E0EB8u);
    ctx->pc = 0x2E0EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0EB0u;
    // 0x2e0eb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222F48u, 0x2E0EB0u, 0x2E0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0EB8u;
label_2e0eb8:
    // 0x2e0eb8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2e0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2e0ebc:
    // 0x2e0ebc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e0ec0:
    // 0x2e0ec0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2e0ec4:
    if (ctx->pc == 0x2E0EC4u) {
        ctx->pc = 0x2E0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EC0u;
        // 0x2e0ec4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0EC8u;
        goto label_2e0ec8;
    }
    ctx->pc = 0x2E0EC0u;
    {
        const bool branch_taken_0x2e0ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EC0u;
        // 0x2e0ec4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ec0) {
            ctx->pc = 0x2E0EE4u;
            goto label_2e0ee4;
        }
    }
    ctx->pc = 0x2E0EC8u;
label_2e0ec8:
    // 0x2e0ec8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2e0ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_2e0ecc:
    // 0x2e0ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e0ed0:
    // 0x2e0ed0: 0x0  nop
    ctx->pc = 0x2e0ed0u;
    // NOP
label_2e0ed4:
    // 0x2e0ed4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e0ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e0ed8:
    // 0x2e0ed8: 0x0  nop
    ctx->pc = 0x2e0ed8u;
    // NOP
label_2e0edc:
    // 0x2e0edc: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_2e0ee0:
    if (ctx->pc == 0x2E0EE0u) {
        ctx->pc = 0x2E0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EDCu;
        // 0x2e0ee0: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0EE4u;
        goto label_2e0ee4;
    }
    ctx->pc = 0x2E0EDCu;
    {
        const bool branch_taken_0x2e0edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0edc) {
            ctx->pc = 0x2E0EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0EDCu;
            // 0x2e0ee0: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0F10u;
            goto label_2e0f10;
        }
    }
    ctx->pc = 0x2E0EE4u;
label_2e0ee4:
    // 0x2e0ee4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e0ee8:
    // 0x2e0ee8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2e0eec:
    if (ctx->pc == 0x2E0EECu) {
        ctx->pc = 0x2E0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EE8u;
        // 0x2e0eec: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0EF0u;
        goto label_2e0ef0;
    }
    ctx->pc = 0x2E0EE8u;
    {
        const bool branch_taken_0x2e0ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EE8u;
        // 0x2e0eec: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ee8) {
            ctx->pc = 0x2E0F10u;
            goto label_2e0f10;
        }
    }
    ctx->pc = 0x2E0EF0u;
label_2e0ef0:
    // 0x2e0ef0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2e0ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2e0ef4:
    // 0x2e0ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e0ef8:
    // 0x2e0ef8: 0x0  nop
    ctx->pc = 0x2e0ef8u;
    // NOP
label_2e0efc:
    // 0x2e0efc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e0efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e0f00:
    // 0x2e0f00: 0x0  nop
    ctx->pc = 0x2e0f00u;
    // NOP
label_2e0f04:
    // 0x2e0f04: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2e0f08:
    if (ctx->pc == 0x2E0F08u) {
        ctx->pc = 0x2E0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F04u;
        // 0x2e0f08: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F0Cu;
        goto label_2e0f0c;
    }
    ctx->pc = 0x2E0F04u;
    {
        const bool branch_taken_0x2e0f04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F04u;
        // 0x2e0f08: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f04) {
            ctx->pc = 0x2E0F10u;
            goto label_2e0f10;
        }
    }
    ctx->pc = 0x2E0F0Cu;
label_2e0f0c:
    // 0x2e0f0c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e0f10:
    // 0x2e0f10: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_2e0f14:
    if (ctx->pc == 0x2E0F14u) {
        ctx->pc = 0x2E0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F10u;
        // 0x2e0f14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F18u;
        goto label_2e0f18;
    }
    ctx->pc = 0x2E0F10u;
    {
        const bool branch_taken_0x2e0f10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f10) {
            ctx->pc = 0x2E0F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0F10u;
            // 0x2e0f14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0F30u;
            goto label_2e0f30;
        }
    }
    ctx->pc = 0x2E0F18u;
label_2e0f18:
    // 0x2e0f18: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2e0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2e0f1c:
    // 0x2e0f1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e0f20:
    if (ctx->pc == 0x2E0F20u) {
        ctx->pc = 0x2E0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F1Cu;
        // 0x2e0f20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F24u;
        goto label_2e0f24;
    }
    ctx->pc = 0x2E0F1Cu;
    {
        const bool branch_taken_0x2e0f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f1c) {
            ctx->pc = 0x2E0F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0F1Cu;
            // 0x2e0f20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0F30u;
            goto label_2e0f30;
        }
    }
    ctx->pc = 0x2E0F24u;
label_2e0f24:
    // 0x2e0f24: 0xc0a36c8  jal         func_28DB20
label_2e0f28:
    if (ctx->pc == 0x2E0F28u) {
        ctx->pc = 0x2E0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F24u;
        // 0x2e0f28: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F2Cu;
        goto label_2e0f2c;
    }
    ctx->pc = 0x2E0F24u;
    SET_GPR_U32(ctx, 31, 0x2E0F2Cu);
    ctx->pc = 0x2E0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F24u;
    // 0x2e0f28: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E0F24u, 0x2E0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F2Cu;
label_2e0f2c:
    // 0x2e0f2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e0f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0f30:
    // 0x2e0f30: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2e0f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2e0f34:
    // 0x2e0f34: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_2e0f38:
    if (ctx->pc == 0x2E0F38u) {
        ctx->pc = 0x2E0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F34u;
        // 0x2e0f38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F3Cu;
        goto label_2e0f3c;
    }
    ctx->pc = 0x2E0F34u;
    {
        const bool branch_taken_0x2e0f34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F34u;
        // 0x2e0f38: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f34) {
            ctx->pc = 0x2E0F78u;
            goto label_2e0f78;
        }
    }
    ctx->pc = 0x2E0F3Cu;
label_2e0f3c:
    // 0x2e0f3c: 0xc0a36c2  jal         func_28DB08
label_2e0f40:
    if (ctx->pc == 0x2E0F40u) {
        ctx->pc = 0x2E0F44u;
        goto label_2e0f44;
    }
    ctx->pc = 0x2E0F3Cu;
    SET_GPR_U32(ctx, 31, 0x2E0F44u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2E0F3Cu, 0x2E0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F44u;
label_2e0f44:
    // 0x2e0f44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0f48:
    // 0x2e0f48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2e0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e0f4c:
    // 0x2e0f4c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e0f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e0f50:
    // 0x2e0f50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2e0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e0f54:
    // 0x2e0f54: 0x40f809  jalr        $v0
label_2e0f58:
    if (ctx->pc == 0x2E0F58u) {
        ctx->pc = 0x2E0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F54u;
        // 0x2e0f58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F5Cu;
        goto label_2e0f5c;
    }
    ctx->pc = 0x2E0F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0F5Cu);
        ctx->pc = 0x2E0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F54u;
        // 0x2e0f58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0F54u, 0x2E0F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0F5Cu;
label_2e0f5c:
    // 0x2e0f5c: 0x1452006c  bne         $v0, $s2, . + 4 + (0x6C << 2)
label_2e0f60:
    if (ctx->pc == 0x2E0F60u) {
        ctx->pc = 0x2E0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F5Cu;
        // 0x2e0f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F64u;
        goto label_2e0f64;
    }
    ctx->pc = 0x2E0F5Cu;
    {
        const bool branch_taken_0x2e0f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F5Cu;
        // 0x2e0f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f5c) {
            ctx->pc = 0x2E1110u;
            goto label_2e1110;
        }
    }
    ctx->pc = 0x2E0F64u;
label_2e0f64:
    // 0x2e0f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0f68:
    // 0x2e0f68: 0xc0bf0fa  jal         func_2FC3E8
label_2e0f6c:
    if (ctx->pc == 0x2E0F6Cu) {
        ctx->pc = 0x2E0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F68u;
        // 0x2e0f6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F70u;
        goto label_2e0f70;
    }
    ctx->pc = 0x2E0F68u;
    SET_GPR_U32(ctx, 31, 0x2E0F70u);
    ctx->pc = 0x2E0F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F68u;
    // 0x2e0f6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2E0F68u, 0x2E0F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F70u;
label_2e0f70:
    // 0x2e0f70: 0x10000066  b           . + 4 + (0x66 << 2)
label_2e0f74:
    if (ctx->pc == 0x2E0F74u) {
        ctx->pc = 0x2E0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F70u;
        // 0x2e0f74: 0xae330054  sw          $s3, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F78u;
        goto label_2e0f78;
    }
    ctx->pc = 0x2E0F70u;
    {
        const bool branch_taken_0x2e0f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F70u;
        // 0x2e0f74: 0xae330054  sw          $s3, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f70) {
            ctx->pc = 0x2E110Cu;
            goto label_2e110c;
        }
    }
    ctx->pc = 0x2E0F78u;
label_2e0f78:
    // 0x2e0f78: 0x1660002a  bnez        $s3, . + 4 + (0x2A << 2)
label_2e0f7c:
    if (ctx->pc == 0x2E0F7Cu) {
        ctx->pc = 0x2E0F80u;
        goto label_2e0f80;
    }
    ctx->pc = 0x2E0F78u;
    {
        const bool branch_taken_0x2e0f78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f78) {
            ctx->pc = 0x2E1024u;
            goto label_2e1024;
        }
    }
    ctx->pc = 0x2E0F80u;
label_2e0f80:
    // 0x2e0f80: 0x12000062  beqz        $s0, . + 4 + (0x62 << 2)
label_2e0f84:
    if (ctx->pc == 0x2E0F84u) {
        ctx->pc = 0x2E0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F80u;
        // 0x2e0f84: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0F88u;
        goto label_2e0f88;
    }
    ctx->pc = 0x2E0F80u;
    {
        const bool branch_taken_0x2e0f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F80u;
        // 0x2e0f84: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f80) {
            ctx->pc = 0x2E110Cu;
            goto label_2e110c;
        }
    }
    ctx->pc = 0x2E0F88u;
label_2e0f88:
    // 0x2e0f88: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2e0f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2e0f8c:
    // 0x2e0f8c: 0x26c34b00  addiu       $v1, $s6, 0x4B00
    ctx->pc = 0x2e0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_2e0f90:
    // 0x2e0f90: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2e0f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2e0f94:
    // 0x2e0f94: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e0f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e0f98:
    // 0x2e0f98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2e0f9c:
    // 0x2e0f9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e0fa0:
    // 0x2e0fa0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2e0fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e0fa4:
    // 0x2e0fa4: 0xc0cd7d2  jal         func_335F48
label_2e0fa8:
    if (ctx->pc == 0x2E0FA8u) {
        ctx->pc = 0x2E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FA4u;
        // 0x2e0fa8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0FACu;
        goto label_2e0fac;
    }
    ctx->pc = 0x2E0FA4u;
    SET_GPR_U32(ctx, 31, 0x2E0FACu);
    ctx->pc = 0x2E0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FA4u;
    // 0x2e0fa8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2E0FA4u, 0x2E0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FACu;
label_2e0fac:
    // 0x2e0fac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e0facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e0fb0:
    // 0x2e0fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0fb4:
    // 0x2e0fb4: 0xc0cd780  jal         func_335E00
label_2e0fb8:
    if (ctx->pc == 0x2E0FB8u) {
        ctx->pc = 0x2E0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FB4u;
        // 0x2e0fb8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0FBCu;
        goto label_2e0fbc;
    }
    ctx->pc = 0x2E0FB4u;
    SET_GPR_U32(ctx, 31, 0x2E0FBCu);
    ctx->pc = 0x2E0FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FB4u;
    // 0x2e0fb8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2E0FB4u, 0x2E0FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FBCu;
label_2e0fbc:
    // 0x2e0fbc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e0fbcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2e0fc0:
    // 0x2e0fc0: 0xc0cd742  jal         func_335D08
label_2e0fc4:
    if (ctx->pc == 0x2E0FC4u) {
        ctx->pc = 0x2E0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FC0u;
        // 0x2e0fc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0FC8u;
        goto label_2e0fc8;
    }
    ctx->pc = 0x2E0FC0u;
    SET_GPR_U32(ctx, 31, 0x2E0FC8u);
    ctx->pc = 0x2E0FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FC0u;
    // 0x2e0fc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2E0FC0u, 0x2E0FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FC8u;
label_2e0fc8:
    // 0x2e0fc8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e0fc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e0fcc:
    // 0x2e0fcc: 0xc0cdd2e  jal         func_3374B8
label_2e0fd0:
    if (ctx->pc == 0x2E0FD0u) {
        ctx->pc = 0x2E0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FCCu;
        // 0x2e0fd0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0FD4u;
        goto label_2e0fd4;
    }
    ctx->pc = 0x2E0FCCu;
    SET_GPR_U32(ctx, 31, 0x2E0FD4u);
    ctx->pc = 0x2E0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FCCu;
    // 0x2e0fd0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2E0FCCu, 0x2E0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FD4u;
label_2e0fd4:
    // 0x2e0fd4: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2e0fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2e0fd8:
    // 0x2e0fd8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2e0fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2e0fdc:
    // 0x2e0fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e0fe0:
    // 0x2e0fe0: 0x0  nop
    ctx->pc = 0x2e0fe0u;
    // NOP
label_2e0fe4:
    // 0x2e0fe4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e0fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e0fe8:
    // 0x2e0fe8: 0x0  nop
    ctx->pc = 0x2e0fe8u;
    // NOP
label_2e0fec:
    // 0x2e0fec: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_2e0ff0:
    if (ctx->pc == 0x2E0FF0u) {
        ctx->pc = 0x2E0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FECu;
        // 0x2e0ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0FF4u;
        goto label_2e0ff4;
    }
    ctx->pc = 0x2E0FECu;
    {
        const bool branch_taken_0x2e0fec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FECu;
        // 0x2e0ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fec) {
            ctx->pc = 0x2E1110u;
            goto label_2e1110;
        }
    }
    ctx->pc = 0x2E0FF4u;
label_2e0ff4:
    // 0x2e0ff4: 0xc0a367c  jal         func_28D9F0
label_2e0ff8:
    if (ctx->pc == 0x2E0FF8u) {
        ctx->pc = 0x2E0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FF4u;
        // 0x2e0ff8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0FFCu;
        goto label_2e0ffc;
    }
    ctx->pc = 0x2E0FF4u;
    SET_GPR_U32(ctx, 31, 0x2E0FFCu);
    ctx->pc = 0x2E0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FF4u;
    // 0x2e0ff8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E0FF4u, 0x2E0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FFCu;
label_2e0ffc:
    // 0x2e0ffc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_2e1000:
    if (ctx->pc == 0x2E1000u) {
        ctx->pc = 0x2E1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FFCu;
        // 0x2e1000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1004u;
        goto label_2e1004;
    }
    ctx->pc = 0x2E0FFCu;
    {
        const bool branch_taken_0x2e0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FFCu;
        // 0x2e1000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ffc) {
            ctx->pc = 0x2E110Cu;
            goto label_2e110c;
        }
    }
    ctx->pc = 0x2E1004u;
label_2e1004:
    // 0x2e1004: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e1004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1008:
    // 0x2e1008: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2e1008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2e100c:
    // 0x2e100c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e100cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e1010:
    // 0x2e1010: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e1010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1014:
    // 0x2e1014: 0xc0bf800  jal         func_2FE000
label_2e1018:
    if (ctx->pc == 0x2E1018u) {
        ctx->pc = 0x2E1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1014u;
        // 0x2e1018: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E101Cu;
        goto label_2e101c;
    }
    ctx->pc = 0x2E1014u;
    SET_GPR_U32(ctx, 31, 0x2E101Cu);
    ctx->pc = 0x2E1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1014u;
    // 0x2e1018: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E1014u, 0x2E101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E101Cu;
label_2e101c:
    // 0x2e101c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2e1020:
    if (ctx->pc == 0x2E1020u) {
        ctx->pc = 0x2E1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E101Cu;
        // 0x2e1020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1024u;
        goto label_2e1024;
    }
    ctx->pc = 0x2E101Cu;
    {
        const bool branch_taken_0x2e101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E101Cu;
        // 0x2e1020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e101c) {
            ctx->pc = 0x2E1110u;
            goto label_2e1110;
        }
    }
    ctx->pc = 0x2E1024u;
label_2e1024:
    // 0x2e1024: 0xc10587a  jal         func_4161E8
label_2e1028:
    if (ctx->pc == 0x2E1028u) {
        ctx->pc = 0x2E1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1024u;
        // 0x2e1028: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E102Cu;
        goto label_2e102c;
    }
    ctx->pc = 0x2E1024u;
    SET_GPR_U32(ctx, 31, 0x2E102Cu);
    ctx->pc = 0x2E1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1024u;
    // 0x2e1028: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E1024u, 0x2E102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E102Cu;
label_2e102c:
    // 0x2e102c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e102cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1030:
    // 0x2e1030: 0xc0cdb38  jal         func_336CE0
label_2e1034:
    if (ctx->pc == 0x2E1034u) {
        ctx->pc = 0x2E1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1030u;
        // 0x2e1034: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1038u;
        goto label_2e1038;
    }
    ctx->pc = 0x2E1030u;
    SET_GPR_U32(ctx, 31, 0x2E1038u);
    ctx->pc = 0x2E1034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1030u;
    // 0x2e1034: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E1030u, 0x2E1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1038u;
label_2e1038:
    // 0x2e1038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e1038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e103c:
    // 0x2e103c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e103cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e1040:
    // 0x2e1040: 0x0  nop
    ctx->pc = 0x2e1040u;
    // NOP
label_2e1044:
    // 0x2e1044: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1048:
    // 0x2e1048: 0x0  nop
    ctx->pc = 0x2e1048u;
    // NOP
label_2e104c:
    // 0x2e104c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2e1050:
    if (ctx->pc == 0x2E1050u) {
        ctx->pc = 0x2E1054u;
        goto label_2e1054;
    }
    ctx->pc = 0x2E104Cu;
    {
        const bool branch_taken_0x2e104c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e104c) {
            ctx->pc = 0x2E1098u;
            goto label_2e1098;
        }
    }
    ctx->pc = 0x2E1054u;
label_2e1054:
    // 0x2e1054: 0xc0b81f4  jal         func_2E07D0
label_2e1058:
    if (ctx->pc == 0x2E1058u) {
        ctx->pc = 0x2E1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1054u;
        // 0x2e1058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E105Cu;
        goto label_2e105c;
    }
    ctx->pc = 0x2E1054u;
    SET_GPR_U32(ctx, 31, 0x2E105Cu);
    ctx->pc = 0x2E1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1054u;
    // 0x2e1058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07D0u, 0x2E1054u, 0x2E105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E105Cu;
label_2e105c:
    // 0x2e105c: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
label_2e1060:
    if (ctx->pc == 0x2E1060u) {
        ctx->pc = 0x2E1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E105Cu;
        // 0x2e1060: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1064u;
        goto label_2e1064;
    }
    ctx->pc = 0x2E105Cu;
    {
        const bool branch_taken_0x2e105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E105Cu;
        // 0x2e1060: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e105c) {
            ctx->pc = 0x2E106Cu;
            goto label_2e106c;
        }
    }
    ctx->pc = 0x2E1064u;
label_2e1064:
    // 0x2e1064: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2e1068:
    if (ctx->pc == 0x2E1068u) {
        ctx->pc = 0x2E1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1064u;
        // 0x2e1068: 0xa232005a  sb          $s2, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E106Cu;
        goto label_2e106c;
    }
    ctx->pc = 0x2E1064u;
    {
        const bool branch_taken_0x2e1064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1064u;
        // 0x2e1068: 0xa232005a  sb          $s2, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1064) {
            ctx->pc = 0x2E1110u;
            goto label_2e1110;
        }
    }
    ctx->pc = 0x2E106Cu;
label_2e106c:
    // 0x2e106c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2e106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2e1070:
    // 0x2e1070: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2e1070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e1074:
    // 0x2e1074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e1074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e1078:
    // 0x2e1078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e1078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e107c:
    // 0x2e107c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2e107cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e1080:
    // 0x2e1080: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e1080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e1084:
    // 0x2e1084: 0xc10587a  jal         func_4161E8
label_2e1088:
    if (ctx->pc == 0x2E1088u) {
        ctx->pc = 0x2E1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1084u;
        // 0x2e1088: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E108Cu;
        goto label_2e108c;
    }
    ctx->pc = 0x2E1084u;
    SET_GPR_U32(ctx, 31, 0x2E108Cu);
    ctx->pc = 0x2E1088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1084u;
    // 0x2e1088: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E1084u, 0x2E108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E108Cu;
label_2e108c:
    // 0x2e108c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e1090:
    // 0x2e1090: 0xc0cdb38  jal         func_336CE0
label_2e1094:
    if (ctx->pc == 0x2E1094u) {
        ctx->pc = 0x2E1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1090u;
        // 0x2e1094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1098u;
        goto label_2e1098;
    }
    ctx->pc = 0x2E1090u;
    SET_GPR_U32(ctx, 31, 0x2E1098u);
    ctx->pc = 0x2E1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1090u;
    // 0x2e1094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E1090u, 0x2E1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1098u;
label_2e1098:
    // 0x2e1098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e1098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e109c:
    // 0x2e109c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e109cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e10a0:
    // 0x2e10a0: 0x0  nop
    ctx->pc = 0x2e10a0u;
    // NOP
label_2e10a4:
    // 0x2e10a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e10a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e10a8:
    // 0x2e10a8: 0x0  nop
    ctx->pc = 0x2e10a8u;
    // NOP
label_2e10ac:
    // 0x2e10ac: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_2e10b0:
    if (ctx->pc == 0x2E10B0u) {
        ctx->pc = 0x2E10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10ACu;
        // 0x2e10b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E10B4u;
        goto label_2e10b4;
    }
    ctx->pc = 0x2E10ACu;
    {
        const bool branch_taken_0x2e10ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10ACu;
        // 0x2e10b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10ac) {
            ctx->pc = 0x2E1110u;
            goto label_2e1110;
        }
    }
    ctx->pc = 0x2E10B4u;
label_2e10b4:
    // 0x2e10b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e10b8:
    // 0x2e10b8: 0xc0a2ab0  jal         func_28AAC0
label_2e10bc:
    if (ctx->pc == 0x2E10BCu) {
        ctx->pc = 0x2E10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10B8u;
        // 0x2e10bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E10C0u;
        goto label_2e10c0;
    }
    ctx->pc = 0x2E10B8u;
    SET_GPR_U32(ctx, 31, 0x2E10C0u);
    ctx->pc = 0x2E10BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10B8u;
    // 0x2e10bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2E10B8u, 0x2E10C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10C0u;
label_2e10c0:
    // 0x2e10c0: 0xae330054  sw          $s3, 0x54($s1)
    ctx->pc = 0x2e10c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 19));
label_2e10c4:
    // 0x2e10c4: 0xc0a367c  jal         func_28D9F0
label_2e10c8:
    if (ctx->pc == 0x2E10C8u) {
        ctx->pc = 0x2E10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10C4u;
        // 0x2e10c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E10CCu;
        goto label_2e10cc;
    }
    ctx->pc = 0x2E10C4u;
    SET_GPR_U32(ctx, 31, 0x2E10CCu);
    ctx->pc = 0x2E10C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10C4u;
    // 0x2e10c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E10C4u, 0x2E10CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10CCu;
label_2e10cc:
    // 0x2e10cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e10ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e10d0:
    // 0x2e10d0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2e10d4:
    if (ctx->pc == 0x2E10D4u) {
        ctx->pc = 0x2E10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10D0u;
        // 0x2e10d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E10D8u;
        goto label_2e10d8;
    }
    ctx->pc = 0x2E10D0u;
    {
        const bool branch_taken_0x2e10d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10D0u;
        // 0x2e10d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10d0) {
            ctx->pc = 0x2E1110u;
            goto label_2e1110;
        }
    }
    ctx->pc = 0x2E10D8u;
label_2e10d8:
    // 0x2e10d8: 0xc10587a  jal         func_4161E8
label_2e10dc:
    if (ctx->pc == 0x2E10DCu) {
        ctx->pc = 0x2E10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10D8u;
        // 0x2e10dc: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E10E0u;
        goto label_2e10e0;
    }
    ctx->pc = 0x2E10D8u;
    SET_GPR_U32(ctx, 31, 0x2E10E0u);
    ctx->pc = 0x2E10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10D8u;
    // 0x2e10dc: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E10D8u, 0x2E10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10E0u;
label_2e10e0:
    // 0x2e10e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e10e4:
    // 0x2e10e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e10e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e10e8:
    // 0x2e10e8: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2e10e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e10ec:
    // 0x2e10ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e10ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e10f0:
    // 0x2e10f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e10f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e10f4:
    // 0x2e10f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e10f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e10f8:
    // 0x2e10f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e10f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2e10fc:
    // 0x2e10fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e10fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e1100:
    // 0x2e1100: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e1100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1104:
    // 0x2e1104: 0xc0bee7a  jal         func_2FB9E8
label_2e1108:
    if (ctx->pc == 0x2E1108u) {
        ctx->pc = 0x2E1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1104u;
        // 0x2e1108: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E110Cu;
        goto label_2e110c;
    }
    ctx->pc = 0x2E1104u;
    SET_GPR_U32(ctx, 31, 0x2E110Cu);
    ctx->pc = 0x2E1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1104u;
    // 0x2e1108: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E1104u, 0x2E110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E110Cu;
label_2e110c:
    // 0x2e110c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e110cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1110:
    // 0x2e1110: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2e1110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e1114:
    // 0x2e1114: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2e1114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e1118:
    // 0x2e1118: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2e1118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e111c:
    // 0x2e111c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2e111cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e1120:
    // 0x2e1120: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e1120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e1124:
    // 0x2e1124: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2e1124u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1128:
    // 0x2e1128: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2e1128u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e112c:
    // 0x2e112c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1130:
    // 0x2e1130: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2e1130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e1134:
    // 0x2e1134: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2e1134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e1138:
    // 0x2e1138: 0x3e00008  jr          $ra
label_2e113c:
    if (ctx->pc == 0x2E113Cu) {
        ctx->pc = 0x2E113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1138u;
        // 0x2e113c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1140u;
        goto label_fallthrough_0x2e1138;
    }
    ctx->pc = 0x2E1138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1138u;
        // 0x2e113c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1138:
    ctx->pc = 0x2E1140u;
}
