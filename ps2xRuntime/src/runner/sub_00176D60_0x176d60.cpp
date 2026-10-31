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

// Function: sub_00176D60
// Address: 0x176d60 - 0x177038
void sub_00176D60_0x176d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176D60_0x176d60");
#endif

    switch (ctx->pc) {
        case 0x176d60u: goto label_176d60;
        case 0x176d64u: goto label_176d64;
        case 0x176d68u: goto label_176d68;
        case 0x176d6cu: goto label_176d6c;
        case 0x176d70u: goto label_176d70;
        case 0x176d74u: goto label_176d74;
        case 0x176d78u: goto label_176d78;
        case 0x176d7cu: goto label_176d7c;
        case 0x176d80u: goto label_176d80;
        case 0x176d84u: goto label_176d84;
        case 0x176d88u: goto label_176d88;
        case 0x176d8cu: goto label_176d8c;
        case 0x176d90u: goto label_176d90;
        case 0x176d94u: goto label_176d94;
        case 0x176d98u: goto label_176d98;
        case 0x176d9cu: goto label_176d9c;
        case 0x176da0u: goto label_176da0;
        case 0x176da4u: goto label_176da4;
        case 0x176da8u: goto label_176da8;
        case 0x176dacu: goto label_176dac;
        case 0x176db0u: goto label_176db0;
        case 0x176db4u: goto label_176db4;
        case 0x176db8u: goto label_176db8;
        case 0x176dbcu: goto label_176dbc;
        case 0x176dc0u: goto label_176dc0;
        case 0x176dc4u: goto label_176dc4;
        case 0x176dc8u: goto label_176dc8;
        case 0x176dccu: goto label_176dcc;
        case 0x176dd0u: goto label_176dd0;
        case 0x176dd4u: goto label_176dd4;
        case 0x176dd8u: goto label_176dd8;
        case 0x176ddcu: goto label_176ddc;
        case 0x176de0u: goto label_176de0;
        case 0x176de4u: goto label_176de4;
        case 0x176de8u: goto label_176de8;
        case 0x176decu: goto label_176dec;
        case 0x176df0u: goto label_176df0;
        case 0x176df4u: goto label_176df4;
        case 0x176df8u: goto label_176df8;
        case 0x176dfcu: goto label_176dfc;
        case 0x176e00u: goto label_176e00;
        case 0x176e04u: goto label_176e04;
        case 0x176e08u: goto label_176e08;
        case 0x176e0cu: goto label_176e0c;
        case 0x176e10u: goto label_176e10;
        case 0x176e14u: goto label_176e14;
        case 0x176e18u: goto label_176e18;
        case 0x176e1cu: goto label_176e1c;
        case 0x176e20u: goto label_176e20;
        case 0x176e24u: goto label_176e24;
        case 0x176e28u: goto label_176e28;
        case 0x176e2cu: goto label_176e2c;
        case 0x176e30u: goto label_176e30;
        case 0x176e34u: goto label_176e34;
        case 0x176e38u: goto label_176e38;
        case 0x176e3cu: goto label_176e3c;
        case 0x176e40u: goto label_176e40;
        case 0x176e44u: goto label_176e44;
        case 0x176e48u: goto label_176e48;
        case 0x176e4cu: goto label_176e4c;
        case 0x176e50u: goto label_176e50;
        case 0x176e54u: goto label_176e54;
        case 0x176e58u: goto label_176e58;
        case 0x176e5cu: goto label_176e5c;
        case 0x176e60u: goto label_176e60;
        case 0x176e64u: goto label_176e64;
        case 0x176e68u: goto label_176e68;
        case 0x176e6cu: goto label_176e6c;
        case 0x176e70u: goto label_176e70;
        case 0x176e74u: goto label_176e74;
        case 0x176e78u: goto label_176e78;
        case 0x176e7cu: goto label_176e7c;
        case 0x176e80u: goto label_176e80;
        case 0x176e84u: goto label_176e84;
        case 0x176e88u: goto label_176e88;
        case 0x176e8cu: goto label_176e8c;
        case 0x176e90u: goto label_176e90;
        case 0x176e94u: goto label_176e94;
        case 0x176e98u: goto label_176e98;
        case 0x176e9cu: goto label_176e9c;
        case 0x176ea0u: goto label_176ea0;
        case 0x176ea4u: goto label_176ea4;
        case 0x176ea8u: goto label_176ea8;
        case 0x176eacu: goto label_176eac;
        case 0x176eb0u: goto label_176eb0;
        case 0x176eb4u: goto label_176eb4;
        case 0x176eb8u: goto label_176eb8;
        case 0x176ebcu: goto label_176ebc;
        case 0x176ec0u: goto label_176ec0;
        case 0x176ec4u: goto label_176ec4;
        case 0x176ec8u: goto label_176ec8;
        case 0x176eccu: goto label_176ecc;
        case 0x176ed0u: goto label_176ed0;
        case 0x176ed4u: goto label_176ed4;
        case 0x176ed8u: goto label_176ed8;
        case 0x176edcu: goto label_176edc;
        case 0x176ee0u: goto label_176ee0;
        case 0x176ee4u: goto label_176ee4;
        case 0x176ee8u: goto label_176ee8;
        case 0x176eecu: goto label_176eec;
        case 0x176ef0u: goto label_176ef0;
        case 0x176ef4u: goto label_176ef4;
        case 0x176ef8u: goto label_176ef8;
        case 0x176efcu: goto label_176efc;
        case 0x176f00u: goto label_176f00;
        case 0x176f04u: goto label_176f04;
        case 0x176f08u: goto label_176f08;
        case 0x176f0cu: goto label_176f0c;
        case 0x176f10u: goto label_176f10;
        case 0x176f14u: goto label_176f14;
        case 0x176f18u: goto label_176f18;
        case 0x176f1cu: goto label_176f1c;
        case 0x176f20u: goto label_176f20;
        case 0x176f24u: goto label_176f24;
        case 0x176f28u: goto label_176f28;
        case 0x176f2cu: goto label_176f2c;
        case 0x176f30u: goto label_176f30;
        case 0x176f34u: goto label_176f34;
        case 0x176f38u: goto label_176f38;
        case 0x176f3cu: goto label_176f3c;
        case 0x176f40u: goto label_176f40;
        case 0x176f44u: goto label_176f44;
        case 0x176f48u: goto label_176f48;
        case 0x176f4cu: goto label_176f4c;
        case 0x176f50u: goto label_176f50;
        case 0x176f54u: goto label_176f54;
        case 0x176f58u: goto label_176f58;
        case 0x176f5cu: goto label_176f5c;
        case 0x176f60u: goto label_176f60;
        case 0x176f64u: goto label_176f64;
        case 0x176f68u: goto label_176f68;
        case 0x176f6cu: goto label_176f6c;
        case 0x176f70u: goto label_176f70;
        case 0x176f74u: goto label_176f74;
        case 0x176f78u: goto label_176f78;
        case 0x176f7cu: goto label_176f7c;
        case 0x176f80u: goto label_176f80;
        case 0x176f84u: goto label_176f84;
        case 0x176f88u: goto label_176f88;
        case 0x176f8cu: goto label_176f8c;
        case 0x176f90u: goto label_176f90;
        case 0x176f94u: goto label_176f94;
        case 0x176f98u: goto label_176f98;
        case 0x176f9cu: goto label_176f9c;
        case 0x176fa0u: goto label_176fa0;
        case 0x176fa4u: goto label_176fa4;
        case 0x176fa8u: goto label_176fa8;
        case 0x176facu: goto label_176fac;
        case 0x176fb0u: goto label_176fb0;
        case 0x176fb4u: goto label_176fb4;
        case 0x176fb8u: goto label_176fb8;
        case 0x176fbcu: goto label_176fbc;
        case 0x176fc0u: goto label_176fc0;
        case 0x176fc4u: goto label_176fc4;
        case 0x176fc8u: goto label_176fc8;
        case 0x176fccu: goto label_176fcc;
        case 0x176fd0u: goto label_176fd0;
        case 0x176fd4u: goto label_176fd4;
        case 0x176fd8u: goto label_176fd8;
        case 0x176fdcu: goto label_176fdc;
        case 0x176fe0u: goto label_176fe0;
        case 0x176fe4u: goto label_176fe4;
        case 0x176fe8u: goto label_176fe8;
        case 0x176fecu: goto label_176fec;
        case 0x176ff0u: goto label_176ff0;
        case 0x176ff4u: goto label_176ff4;
        case 0x176ff8u: goto label_176ff8;
        case 0x176ffcu: goto label_176ffc;
        case 0x177000u: goto label_177000;
        case 0x177004u: goto label_177004;
        case 0x177008u: goto label_177008;
        case 0x17700cu: goto label_17700c;
        case 0x177010u: goto label_177010;
        case 0x177014u: goto label_177014;
        case 0x177018u: goto label_177018;
        case 0x17701cu: goto label_17701c;
        case 0x177020u: goto label_177020;
        case 0x177024u: goto label_177024;
        case 0x177028u: goto label_177028;
        case 0x17702cu: goto label_17702c;
        case 0x177030u: goto label_177030;
        case 0x177034u: goto label_177034;
        default: break;
    }

    ctx->pc = 0x176d60u;

label_176d60:
    // 0x176d60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_176d64:
    // 0x176d64: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x176d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_176d68:
    // 0x176d68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x176d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_176d6c:
    // 0x176d6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176d70:
    // 0x176d70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x176d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_176d74:
    // 0x176d74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x176d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_176d78:
    // 0x176d78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_176d7c:
    // 0x176d7c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x176d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_176d80:
    // 0x176d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_176d84:
    // 0x176d84: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x176d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_176d88:
    // 0x176d88: 0x964202b2  lhu         $v0, 0x2B2($s2)
    ctx->pc = 0x176d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 690)));
label_176d8c:
    // 0x176d8c: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
label_176d90:
    if (ctx->pc == 0x176D90u) {
        ctx->pc = 0x176D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D8Cu;
        // 0x176d90: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D94u;
        goto label_176d94;
    }
    ctx->pc = 0x176D8Cu;
    {
        const bool branch_taken_0x176d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D8Cu;
        // 0x176d90: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d8c) {
            ctx->pc = 0x17700Cu;
            goto label_17700c;
        }
    }
    ctx->pc = 0x176D94u;
label_176d94:
    // 0x176d94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x176d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176d98:
    // 0x176d98: 0x8e4202b8  lw          $v0, 0x2B8($s2)
    ctx->pc = 0x176d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_176d9c:
    // 0x176d9c: 0xa65102b2  sh          $s1, 0x2B2($s2)
    ctx->pc = 0x176d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 17));
label_176da0:
    // 0x176da0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x176da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_176da4:
    // 0x176da4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x176da4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176da8:
    // 0x176da8: 0xc123508  jal         func_48D420
label_176dac:
    if (ctx->pc == 0x176DACu) {
        ctx->pc = 0x176DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DA8u;
        // 0x176dac: 0xc4540334  lwc1        $f20, 0x334($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DB0u;
        goto label_176db0;
    }
    ctx->pc = 0x176DA8u;
    SET_GPR_U32(ctx, 31, 0x176DB0u);
    ctx->pc = 0x176DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DA8u;
    // 0x176dac: 0xc4540334  lwc1        $f20, 0x334($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D420u, 0x176DA8u, 0x176DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DB0u;
label_176db0:
    // 0x176db0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x176db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_176db4:
    // 0x176db4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x176db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_176db8:
    // 0x176db8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x176db8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x70000000
label_176dbc:
    // 0x176dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176dc0:
    // 0x176dc0: 0xae03a894  sw          $v1, -0x576C($s0)
    ctx->pc = 0x176dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944916), GPR_U32(ctx, 3));
label_176dc4:
    // 0x176dc4: 0xc05d610  jal         func_175840
label_176dc8:
    if (ctx->pc == 0x176DC8u) {
        ctx->pc = 0x176DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DC4u;
        // 0x176dc8: 0xa2910460  sb          $s1, 0x460($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1120), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DCCu;
        goto label_176dcc;
    }
    ctx->pc = 0x176DC4u;
    SET_GPR_U32(ctx, 31, 0x176DCCu);
    ctx->pc = 0x176DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DC4u;
    // 0x176dc8: 0xa2910460  sb          $s1, 0x460($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1120), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x176DC4u, 0x176DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DCCu;
label_176dcc:
    // 0x176dcc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_176dd0:
    if (ctx->pc == 0x176DD0u) {
        ctx->pc = 0x176DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DCCu;
        // 0x176dd0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DD4u;
        goto label_176dd4;
    }
    ctx->pc = 0x176DCCu;
    {
        const bool branch_taken_0x176dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DCCu;
        // 0x176dd0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176dcc) {
            ctx->pc = 0x176E74u;
            goto label_176e74;
        }
    }
    ctx->pc = 0x176DD4u;
label_176dd4:
    // 0x176dd4: 0xc088d10  jal         func_223440
label_176dd8:
    if (ctx->pc == 0x176DD8u) {
        ctx->pc = 0x176DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DD4u;
        // 0x176dd8: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DDCu;
        goto label_176ddc;
    }
    ctx->pc = 0x176DD4u;
    SET_GPR_U32(ctx, 31, 0x176DDCu);
    ctx->pc = 0x176DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DD4u;
    // 0x176dd8: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223440u, 0x176DD4u, 0x176DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DDCu;
label_176ddc:
    // 0x176ddc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_176de0:
    if (ctx->pc == 0x176DE0u) {
        ctx->pc = 0x176DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DDCu;
        // 0x176de0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DE4u;
        goto label_176de4;
    }
    ctx->pc = 0x176DDCu;
    {
        const bool branch_taken_0x176ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DDCu;
        // 0x176de0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ddc) {
            ctx->pc = 0x176E70u;
            goto label_176e70;
        }
    }
    ctx->pc = 0x176DE4u;
label_176de4:
    // 0x176de4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x176de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176de8:
    // 0x176de8: 0x2443d040  addiu       $v1, $v0, -0x2FC0
    ctx->pc = 0x176de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955072));
label_176dec:
    // 0x176dec: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x176decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
label_176df0:
    // 0x176df0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176df4:
    // 0x176df4: 0x1000000a  b           . + 4 + (0xA << 2)
label_176df8:
    if (ctx->pc == 0x176DF8u) {
        ctx->pc = 0x176DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DF4u;
        // 0x176df8: 0x3c150059  lui         $s5, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DFCu;
        goto label_176dfc;
    }
    ctx->pc = 0x176DF4u;
    {
        const bool branch_taken_0x176df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DF4u;
        // 0x176df8: 0x3c150059  lui         $s5, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176df4) {
            ctx->pc = 0x176E20u;
            goto label_176e20;
        }
    }
    ctx->pc = 0x176DFCu;
label_176dfc:
    // 0x176dfc: 0x0  nop
    ctx->pc = 0x176dfcu;
    // NOP
label_176e00:
    // 0x176e00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x176e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_176e04:
    // 0x176e04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x176e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_176e08:
    // 0x176e08: 0x8c450304  lw          $a1, 0x304($v0)
    ctx->pc = 0x176e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
label_176e0c:
    // 0x176e0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x176e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_176e10:
    // 0x176e10: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x176e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_176e14:
    // 0x176e14: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x176e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_176e18:
    // 0x176e18: 0x40f809  jalr        $v0
label_176e1c:
    if (ctx->pc == 0x176E1Cu) {
        ctx->pc = 0x176E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E18u;
        // 0x176e1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E20u;
        goto label_176e20;
    }
    ctx->pc = 0x176E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176E20u);
        ctx->pc = 0x176E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E18u;
        // 0x176e1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176E18u, 0x176E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176E20u;
label_176e20:
    // 0x176e20: 0xc05d610  jal         func_175840
label_176e24:
    if (ctx->pc == 0x176E24u) {
        ctx->pc = 0x176E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E20u;
        // 0x176e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E28u;
        goto label_176e28;
    }
    ctx->pc = 0x176E20u;
    SET_GPR_U32(ctx, 31, 0x176E28u);
    ctx->pc = 0x176E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E20u;
    // 0x176e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x176E20u, 0x176E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E28u;
label_176e28:
    // 0x176e28: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x176e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_176e2c:
    // 0x176e2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_176e30:
    if (ctx->pc == 0x176E30u) {
        ctx->pc = 0x176E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E2Cu;
        // 0x176e30: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E34u;
        goto label_176e34;
    }
    ctx->pc = 0x176E2Cu;
    {
        const bool branch_taken_0x176e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E2Cu;
        // 0x176e30: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e2c) {
            ctx->pc = 0x176E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176e00;
        }
    }
    ctx->pc = 0x176E34u;
label_176e34:
    // 0x176e34: 0x8e63a894  lw          $v1, -0x576C($s3)
    ctx->pc = 0x176e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944916)));
label_176e38:
    // 0x176e38: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x176e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_176e3c:
    // 0x176e3c: 0x8e4602b8  lw          $a2, 0x2B8($s2)
    ctx->pc = 0x176e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_176e40:
    // 0x176e40: 0x2624d040  addiu       $a0, $s1, -0x2FC0
    ctx->pc = 0x176e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955072));
label_176e44:
    // 0x176e44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x176e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_176e48:
    // 0x176e48: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x176e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_176e4c:
    // 0x176e4c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_176e50:
    // 0x176e50: 0xc0411f4  jal         func_1047D0
label_176e54:
    if (ctx->pc == 0x176E54u) {
        ctx->pc = 0x176E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E50u;
        // 0x176e54: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E58u;
        goto label_176e58;
    }
    ctx->pc = 0x176E50u;
    SET_GPR_U32(ctx, 31, 0x176E58u);
    ctx->pc = 0x176E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E50u;
    // 0x176e54: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1047D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047D0u, 0x176E50u, 0x176E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E58u;
label_176e58:
    // 0x176e58: 0x8e63a894  lw          $v1, -0x576C($s3)
    ctx->pc = 0x176e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944916)));
label_176e5c:
    // 0x176e5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_176e60:
    // 0x176e60: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_176e64:
    if (ctx->pc == 0x176E64u) {
        ctx->pc = 0x176E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E60u;
        // 0x176e64: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E68u;
        goto label_176e68;
    }
    ctx->pc = 0x176E60u;
    {
        const bool branch_taken_0x176e60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x176E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E60u;
        // 0x176e64: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e60) {
            ctx->pc = 0x176E80u;
            goto label_176e80;
        }
    }
    ctx->pc = 0x176E68u;
label_176e68:
    // 0x176e68: 0x10000005  b           . + 4 + (0x5 << 2)
label_176e6c:
    if (ctx->pc == 0x176E6Cu) {
        ctx->pc = 0x176E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E68u;
        // 0x176e6c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E70u;
        goto label_176e70;
    }
    ctx->pc = 0x176E68u;
    {
        const bool branch_taken_0x176e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E68u;
        // 0x176e6c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e68) {
            ctx->pc = 0x176E80u;
            goto label_176e80;
        }
    }
    ctx->pc = 0x176E70u;
label_176e70:
    // 0x176e70: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x176e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_176e74:
    // 0x176e74: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x176e74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
label_176e78:
    // 0x176e78: 0x24428420  addiu       $v0, $v0, -0x7BE0
    ctx->pc = 0x176e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935584));
label_176e7c:
    // 0x176e7c: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x176e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_176e80:
    // 0x176e80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x176e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176e84:
    // 0x176e84: 0x10000009  b           . + 4 + (0x9 << 2)
label_176e88:
    if (ctx->pc == 0x176E88u) {
        ctx->pc = 0x176E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E84u;
        // 0x176e88: 0x265002bc  addiu       $s0, $s2, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 700));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E8Cu;
        goto label_176e8c;
    }
    ctx->pc = 0x176E84u;
    {
        const bool branch_taken_0x176e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E84u;
        // 0x176e88: 0x265002bc  addiu       $s0, $s2, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e84) {
            ctx->pc = 0x176EACu;
            goto label_176eac;
        }
    }
    ctx->pc = 0x176E8Cu;
label_176e8c:
    // 0x176e8c: 0x0  nop
    ctx->pc = 0x176e8cu;
    // NOP
label_176e90:
    // 0x176e90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x176e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_176e94:
    // 0x176e94: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x176e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_176e98:
    // 0x176e98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x176e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_176e9c:
    // 0x176e9c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x176e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_176ea0:
    // 0x176ea0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x176ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_176ea4:
    // 0x176ea4: 0x40f809  jalr        $v0
label_176ea8:
    if (ctx->pc == 0x176EA8u) {
        ctx->pc = 0x176EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EA4u;
        // 0x176ea8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EACu;
        goto label_176eac;
    }
    ctx->pc = 0x176EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176EACu);
        ctx->pc = 0x176EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EA4u;
        // 0x176ea8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176EA4u, 0x176EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176EACu;
label_176eac:
    // 0x176eac: 0xc05d45e  jal         func_175178
label_176eb0:
    if (ctx->pc == 0x176EB0u) {
        ctx->pc = 0x176EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EACu;
        // 0x176eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EB4u;
        goto label_176eb4;
    }
    ctx->pc = 0x176EACu;
    SET_GPR_U32(ctx, 31, 0x176EB4u);
    ctx->pc = 0x176EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EACu;
    // 0x176eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x176EACu, 0x176EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EB4u;
label_176eb4:
    // 0x176eb4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x176eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_176eb8:
    // 0x176eb8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_176ebc:
    if (ctx->pc == 0x176EBCu) {
        ctx->pc = 0x176EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EB8u;
        // 0x176ebc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EC0u;
        goto label_176ec0;
    }
    ctx->pc = 0x176EB8u;
    {
        const bool branch_taken_0x176eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176eb8) {
            ctx->pc = 0x176EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176EB8u;
            // 0x176ebc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176e90;
        }
    }
    ctx->pc = 0x176EC0u;
label_176ec0:
    // 0x176ec0: 0x8e64a894  lw          $a0, -0x576C($s3)
    ctx->pc = 0x176ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944916)));
label_176ec4:
    // 0x176ec4: 0x24030240  addiu       $v1, $zero, 0x240
    ctx->pc = 0x176ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_176ec8:
    // 0x176ec8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x176ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_176ecc:
    // 0x176ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176ed0:
    // 0x176ed0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x176ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_176ed4:
    // 0x176ed4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x176ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176ed8:
    // 0x176ed8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x176ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_176edc:
    // 0x176edc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x176edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_176ee0:
    // 0x176ee0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_176ee4:
    if (ctx->pc == 0x176EE4u) {
        ctx->pc = 0x176EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EE0u;
        // 0x176ee4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EE8u;
        goto label_176ee8;
    }
    ctx->pc = 0x176EE0u;
    {
        const bool branch_taken_0x176ee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x176EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EE0u;
        // 0x176ee4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ee0) {
            ctx->pc = 0x176F00u;
            goto label_176f00;
        }
    }
    ctx->pc = 0x176EE8u;
label_176ee8:
    // 0x176ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176eec:
    // 0x176eec: 0xc05d8a4  jal         func_176290
label_176ef0:
    if (ctx->pc == 0x176EF0u) {
        ctx->pc = 0x176EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EECu;
        // 0x176ef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EF4u;
        goto label_176ef4;
    }
    ctx->pc = 0x176EECu;
    SET_GPR_U32(ctx, 31, 0x176EF4u);
    ctx->pc = 0x176EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EECu;
    // 0x176ef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176290u, 0x176EECu, 0x176EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EF4u;
label_176ef4:
    // 0x176ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176ef8:
    // 0x176ef8: 0xc05da3a  jal         func_1768E8
label_176efc:
    if (ctx->pc == 0x176EFCu) {
        ctx->pc = 0x176EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EF8u;
        // 0x176efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F00u;
        goto label_176f00;
    }
    ctx->pc = 0x176EF8u;
    SET_GPR_U32(ctx, 31, 0x176F00u);
    ctx->pc = 0x176EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EF8u;
    // 0x176efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768E8u, 0x176EF8u, 0x176F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F00u;
label_176f00:
    // 0x176f00: 0x864202b0  lh          $v0, 0x2B0($s2)
    ctx->pc = 0x176f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 688)));
label_176f04:
    // 0x176f04: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_176f08:
    if (ctx->pc == 0x176F08u) {
        ctx->pc = 0x176F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F04u;
        // 0x176f08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F0Cu;
        goto label_176f0c;
    }
    ctx->pc = 0x176F04u;
    {
        const bool branch_taken_0x176f04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x176F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F04u;
        // 0x176f08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f04) {
            ctx->pc = 0x176F4Cu;
            goto label_176f4c;
        }
    }
    ctx->pc = 0x176F0Cu;
label_176f0c:
    // 0x176f0c: 0xc089f4a  jal         func_227D28
label_176f10:
    if (ctx->pc == 0x176F10u) {
        ctx->pc = 0x176F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F0Cu;
        // 0x176f10: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F14u;
        goto label_176f14;
    }
    ctx->pc = 0x176F0Cu;
    SET_GPR_U32(ctx, 31, 0x176F14u);
    ctx->pc = 0x176F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F0Cu;
    // 0x176f10: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x176F0Cu, 0x176F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F14u;
label_176f14:
    // 0x176f14: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_176f18:
    if (ctx->pc == 0x176F18u) {
        ctx->pc = 0x176F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F14u;
        // 0x176f18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F1Cu;
        goto label_176f1c;
    }
    ctx->pc = 0x176F14u;
    {
        const bool branch_taken_0x176f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176f14) {
            ctx->pc = 0x176F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176F14u;
            // 0x176f18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176F50u;
            goto label_176f50;
        }
    }
    ctx->pc = 0x176F1Cu;
label_176f1c:
    // 0x176f1c: 0xc088f04  jal         func_223C10
label_176f20:
    if (ctx->pc == 0x176F20u) {
        ctx->pc = 0x176F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F1Cu;
        // 0x176f20: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F24u;
        goto label_176f24;
    }
    ctx->pc = 0x176F1Cu;
    SET_GPR_U32(ctx, 31, 0x176F24u);
    ctx->pc = 0x176F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F1Cu;
    // 0x176f20: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x176F1Cu, 0x176F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F24u;
label_176f24:
    // 0x176f24: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_176f28:
    if (ctx->pc == 0x176F28u) {
        ctx->pc = 0x176F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F24u;
        // 0x176f28: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F2Cu;
        goto label_176f2c;
    }
    ctx->pc = 0x176F24u;
    {
        const bool branch_taken_0x176f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176f24) {
            ctx->pc = 0x176F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176F24u;
            // 0x176f28: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176F50u;
            goto label_176f50;
        }
    }
    ctx->pc = 0x176F2Cu;
label_176f2c:
    // 0x176f2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x176f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_176f30:
    // 0x176f30: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x176f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_176f34:
    // 0x176f34: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x176f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_176f38:
    // 0x176f38: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x176f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
label_176f3c:
    // 0x176f3c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x176f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_176f40:
    // 0x176f40: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x176f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_176f44:
    // 0x176f44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_176f48:
    if (ctx->pc == 0x176F48u) {
        ctx->pc = 0x176F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F44u;
        // 0x176f48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F4Cu;
        goto label_176f4c;
    }
    ctx->pc = 0x176F44u;
    {
        const bool branch_taken_0x176f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F44u;
        // 0x176f48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f44) {
            ctx->pc = 0x176F58u;
            goto label_176f58;
        }
    }
    ctx->pc = 0x176F4Cu;
label_176f4c:
    // 0x176f4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176f50:
    // 0x176f50: 0x1000001d  b           . + 4 + (0x1D << 2)
label_176f54:
    if (ctx->pc == 0x176F54u) {
        ctx->pc = 0x176F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F50u;
        // 0x176f54: 0xa64002b0  sh          $zero, 0x2B0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 688), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F58u;
        goto label_176f58;
    }
    ctx->pc = 0x176F50u;
    {
        const bool branch_taken_0x176f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F50u;
        // 0x176f54: 0xa64002b0  sh          $zero, 0x2B0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 688), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f50) {
            ctx->pc = 0x176FC8u;
            goto label_176fc8;
        }
    }
    ctx->pc = 0x176F58u;
label_176f58:
    // 0x176f58: 0xc440cc60  lwc1        $f0, -0x33A0($v0)
    ctx->pc = 0x176f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176f5c:
    // 0x176f5c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x176f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176f60:
    // 0x176f60: 0x0  nop
    ctx->pc = 0x176f60u;
    // NOP
label_176f64:
    // 0x176f64: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_176f68:
    if (ctx->pc == 0x176F68u) {
        ctx->pc = 0x176F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F64u;
        // 0x176f68: 0x8e4602b8  lw          $a2, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F6Cu;
        goto label_176f6c;
    }
    ctx->pc = 0x176F64u;
    {
        const bool branch_taken_0x176f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176f64) {
            ctx->pc = 0x176F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176F64u;
            // 0x176f68: 0x8e4602b8  lw          $a2, 0x2B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176FCCu;
            goto label_176fcc;
        }
    }
    ctx->pc = 0x176F6Cu;
label_176f6c:
    // 0x176f6c: 0xc05d08e  jal         func_174238
label_176f70:
    if (ctx->pc == 0x176F70u) {
        ctx->pc = 0x176F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F6Cu;
        // 0x176f70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F74u;
        goto label_176f74;
    }
    ctx->pc = 0x176F6Cu;
    SET_GPR_U32(ctx, 31, 0x176F74u);
    ctx->pc = 0x176F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F6Cu;
    // 0x176f70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174238u, 0x176F6Cu, 0x176F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F74u;
label_176f74:
    // 0x176f74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_176f78:
    // 0x176f78: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x176f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_176f7c:
    // 0x176f7c: 0xc441cc6c  lwc1        $f1, -0x3394($v0)
    ctx->pc = 0x176f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176f80:
    // 0x176f80: 0x964202b0  lhu         $v0, 0x2B0($s2)
    ctx->pc = 0x176f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 688)));
label_176f84:
    // 0x176f84: 0x0  nop
    ctx->pc = 0x176f84u;
    // NOP
label_176f88:
    // 0x176f88: 0x0  nop
    ctx->pc = 0x176f88u;
    // NOP
label_176f8c:
    // 0x176f8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x176f8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_176f90:
    // 0x176f90: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x176f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_176f94:
    // 0x176f94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x176f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_176f98:
    // 0x176f98: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x176f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_176f9c:
    // 0x176f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_176fa0:
    // 0x176fa0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x176fa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_176fa4:
    // 0x176fa4: 0xa64202b0  sh          $v0, 0x2B0($s2)
    ctx->pc = 0x176fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 688), (uint16_t)GPR_U32(ctx, 2));
label_176fa8:
    // 0x176fa8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x176fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_176fac:
    // 0x176fac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_176fb0:
    // 0x176fb0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x176fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_176fb4:
    // 0x176fb4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x176fb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_176fb8:
    // 0x176fb8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_176fbc:
    if (ctx->pc == 0x176FBCu) {
        ctx->pc = 0x176FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FB8u;
        // 0x176fbc: 0x8e4602b8  lw          $a2, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FC0u;
        goto label_176fc0;
    }
    ctx->pc = 0x176FB8u;
    {
        const bool branch_taken_0x176fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176fb8) {
            ctx->pc = 0x176FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176FB8u;
            // 0x176fbc: 0x8e4602b8  lw          $a2, 0x2B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176FCCu;
            goto label_176fcc;
        }
    }
    ctx->pc = 0x176FC0u;
label_176fc0:
    // 0x176fc0: 0xa64002b0  sh          $zero, 0x2B0($s2)
    ctx->pc = 0x176fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 688), (uint16_t)GPR_U32(ctx, 0));
label_176fc4:
    // 0x176fc4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x176fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176fc8:
    // 0x176fc8: 0x8e4602b8  lw          $a2, 0x2B8($s2)
    ctx->pc = 0x176fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_176fcc:
    // 0x176fcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x176fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_176fd0:
    // 0x176fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176fd4:
    // 0x176fd4: 0xc04118c  jal         func_104630
label_176fd8:
    if (ctx->pc == 0x176FD8u) {
        ctx->pc = 0x176FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FD4u;
        // 0x176fd8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FDCu;
        goto label_176fdc;
    }
    ctx->pc = 0x176FD4u;
    SET_GPR_U32(ctx, 31, 0x176FDCu);
    ctx->pc = 0x176FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176FD4u;
    // 0x176fd8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104630u, 0x176FD4u, 0x176FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FDCu;
label_176fdc:
    // 0x176fdc: 0x8e63a894  lw          $v1, -0x576C($s3)
    ctx->pc = 0x176fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944916)));
label_176fe0:
    // 0x176fe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_176fe4:
    // 0x176fe4: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_176fe8:
    if (ctx->pc == 0x176FE8u) {
        ctx->pc = 0x176FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FE4u;
        // 0x176fe8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FECu;
        goto label_176fec;
    }
    ctx->pc = 0x176FE4u;
    {
        const bool branch_taken_0x176fe4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x176FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FE4u;
        // 0x176fe8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fe4) {
            ctx->pc = 0x176FF4u;
            goto label_176ff4;
        }
    }
    ctx->pc = 0x176FECu;
label_176fec:
    // 0x176fec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x176fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_176ff0:
    // 0x176ff0: 0x8e63a894  lw          $v1, -0x576C($s3)
    ctx->pc = 0x176ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944916)));
label_176ff4:
    // 0x176ff4: 0x26a27210  addiu       $v0, $s5, 0x7210
    ctx->pc = 0x176ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29200));
label_176ff8:
    // 0x176ff8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_176ffc:
    if (ctx->pc == 0x176FFCu) {
        ctx->pc = 0x176FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FF8u;
        // 0x176ffc: 0xa64002b2  sh          $zero, 0x2B2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177000u;
        goto label_177000;
    }
    ctx->pc = 0x176FF8u;
    {
        const bool branch_taken_0x176ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x176ff8) {
            ctx->pc = 0x176FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176FF8u;
            // 0x176ffc: 0xa64002b2  sh          $zero, 0x2B2($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17700Cu;
            goto label_17700c;
        }
    }
    ctx->pc = 0x177000u;
label_177000:
    // 0x177000: 0xc05123c  jal         func_1448F0
label_177004:
    if (ctx->pc == 0x177004u) {
        ctx->pc = 0x177008u;
        goto label_177008;
    }
    ctx->pc = 0x177000u;
    SET_GPR_U32(ctx, 31, 0x177008u);
    ctx->pc = 0x1448F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1448F0u, 0x177000u, 0x177008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177008u;
label_177008:
    // 0x177008: 0xa64002b2  sh          $zero, 0x2B2($s2)
    ctx->pc = 0x177008u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 690), (uint16_t)GPR_U32(ctx, 0));
label_17700c:
    // 0x17700c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17700cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_177010:
    // 0x177010: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x177010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_177014:
    // 0x177014: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x177014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_177018:
    // 0x177018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17701c:
    // 0x17701c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17701cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177020:
    // 0x177020: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x177020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177024:
    // 0x177024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177028:
    // 0x177028: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x177028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17702c:
    // 0x17702c: 0x3e00008  jr          $ra
label_177030:
    if (ctx->pc == 0x177030u) {
        ctx->pc = 0x177030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17702Cu;
        // 0x177030: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177034u;
        goto label_177034;
    }
    ctx->pc = 0x17702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17702Cu;
        // 0x177030: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17702Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177034u;
label_177034:
    // 0x177034: 0x0  nop
    ctx->pc = 0x177034u;
    // NOP
    ctx->pc = 0x177038u;
}
