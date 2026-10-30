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

// Function: sub_00301CF8
// Address: 0x301cf8 - 0x302038
void sub_00301CF8_0x301cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301CF8_0x301cf8");
#endif

    switch (ctx->pc) {
        case 0x301cf8u: goto label_301cf8;
        case 0x301cfcu: goto label_301cfc;
        case 0x301d00u: goto label_301d00;
        case 0x301d04u: goto label_301d04;
        case 0x301d08u: goto label_301d08;
        case 0x301d0cu: goto label_301d0c;
        case 0x301d10u: goto label_301d10;
        case 0x301d14u: goto label_301d14;
        case 0x301d18u: goto label_301d18;
        case 0x301d1cu: goto label_301d1c;
        case 0x301d20u: goto label_301d20;
        case 0x301d24u: goto label_301d24;
        case 0x301d28u: goto label_301d28;
        case 0x301d2cu: goto label_301d2c;
        case 0x301d30u: goto label_301d30;
        case 0x301d34u: goto label_301d34;
        case 0x301d38u: goto label_301d38;
        case 0x301d3cu: goto label_301d3c;
        case 0x301d40u: goto label_301d40;
        case 0x301d44u: goto label_301d44;
        case 0x301d48u: goto label_301d48;
        case 0x301d4cu: goto label_301d4c;
        case 0x301d50u: goto label_301d50;
        case 0x301d54u: goto label_301d54;
        case 0x301d58u: goto label_301d58;
        case 0x301d5cu: goto label_301d5c;
        case 0x301d60u: goto label_301d60;
        case 0x301d64u: goto label_301d64;
        case 0x301d68u: goto label_301d68;
        case 0x301d6cu: goto label_301d6c;
        case 0x301d70u: goto label_301d70;
        case 0x301d74u: goto label_301d74;
        case 0x301d78u: goto label_301d78;
        case 0x301d7cu: goto label_301d7c;
        case 0x301d80u: goto label_301d80;
        case 0x301d84u: goto label_301d84;
        case 0x301d88u: goto label_301d88;
        case 0x301d8cu: goto label_301d8c;
        case 0x301d90u: goto label_301d90;
        case 0x301d94u: goto label_301d94;
        case 0x301d98u: goto label_301d98;
        case 0x301d9cu: goto label_301d9c;
        case 0x301da0u: goto label_301da0;
        case 0x301da4u: goto label_301da4;
        case 0x301da8u: goto label_301da8;
        case 0x301dacu: goto label_301dac;
        case 0x301db0u: goto label_301db0;
        case 0x301db4u: goto label_301db4;
        case 0x301db8u: goto label_301db8;
        case 0x301dbcu: goto label_301dbc;
        case 0x301dc0u: goto label_301dc0;
        case 0x301dc4u: goto label_301dc4;
        case 0x301dc8u: goto label_301dc8;
        case 0x301dccu: goto label_301dcc;
        case 0x301dd0u: goto label_301dd0;
        case 0x301dd4u: goto label_301dd4;
        case 0x301dd8u: goto label_301dd8;
        case 0x301ddcu: goto label_301ddc;
        case 0x301de0u: goto label_301de0;
        case 0x301de4u: goto label_301de4;
        case 0x301de8u: goto label_301de8;
        case 0x301decu: goto label_301dec;
        case 0x301df0u: goto label_301df0;
        case 0x301df4u: goto label_301df4;
        case 0x301df8u: goto label_301df8;
        case 0x301dfcu: goto label_301dfc;
        case 0x301e00u: goto label_301e00;
        case 0x301e04u: goto label_301e04;
        case 0x301e08u: goto label_301e08;
        case 0x301e0cu: goto label_301e0c;
        case 0x301e10u: goto label_301e10;
        case 0x301e14u: goto label_301e14;
        case 0x301e18u: goto label_301e18;
        case 0x301e1cu: goto label_301e1c;
        case 0x301e20u: goto label_301e20;
        case 0x301e24u: goto label_301e24;
        case 0x301e28u: goto label_301e28;
        case 0x301e2cu: goto label_301e2c;
        case 0x301e30u: goto label_301e30;
        case 0x301e34u: goto label_301e34;
        case 0x301e38u: goto label_301e38;
        case 0x301e3cu: goto label_301e3c;
        case 0x301e40u: goto label_301e40;
        case 0x301e44u: goto label_301e44;
        case 0x301e48u: goto label_301e48;
        case 0x301e4cu: goto label_301e4c;
        case 0x301e50u: goto label_301e50;
        case 0x301e54u: goto label_301e54;
        case 0x301e58u: goto label_301e58;
        case 0x301e5cu: goto label_301e5c;
        case 0x301e60u: goto label_301e60;
        case 0x301e64u: goto label_301e64;
        case 0x301e68u: goto label_301e68;
        case 0x301e6cu: goto label_301e6c;
        case 0x301e70u: goto label_301e70;
        case 0x301e74u: goto label_301e74;
        case 0x301e78u: goto label_301e78;
        case 0x301e7cu: goto label_301e7c;
        case 0x301e80u: goto label_301e80;
        case 0x301e84u: goto label_301e84;
        case 0x301e88u: goto label_301e88;
        case 0x301e8cu: goto label_301e8c;
        case 0x301e90u: goto label_301e90;
        case 0x301e94u: goto label_301e94;
        case 0x301e98u: goto label_301e98;
        case 0x301e9cu: goto label_301e9c;
        case 0x301ea0u: goto label_301ea0;
        case 0x301ea4u: goto label_301ea4;
        case 0x301ea8u: goto label_301ea8;
        case 0x301eacu: goto label_301eac;
        case 0x301eb0u: goto label_301eb0;
        case 0x301eb4u: goto label_301eb4;
        case 0x301eb8u: goto label_301eb8;
        case 0x301ebcu: goto label_301ebc;
        case 0x301ec0u: goto label_301ec0;
        case 0x301ec4u: goto label_301ec4;
        case 0x301ec8u: goto label_301ec8;
        case 0x301eccu: goto label_301ecc;
        case 0x301ed0u: goto label_301ed0;
        case 0x301ed4u: goto label_301ed4;
        case 0x301ed8u: goto label_301ed8;
        case 0x301edcu: goto label_301edc;
        case 0x301ee0u: goto label_301ee0;
        case 0x301ee4u: goto label_301ee4;
        case 0x301ee8u: goto label_301ee8;
        case 0x301eecu: goto label_301eec;
        case 0x301ef0u: goto label_301ef0;
        case 0x301ef4u: goto label_301ef4;
        case 0x301ef8u: goto label_301ef8;
        case 0x301efcu: goto label_301efc;
        case 0x301f00u: goto label_301f00;
        case 0x301f04u: goto label_301f04;
        case 0x301f08u: goto label_301f08;
        case 0x301f0cu: goto label_301f0c;
        case 0x301f10u: goto label_301f10;
        case 0x301f14u: goto label_301f14;
        case 0x301f18u: goto label_301f18;
        case 0x301f1cu: goto label_301f1c;
        case 0x301f20u: goto label_301f20;
        case 0x301f24u: goto label_301f24;
        case 0x301f28u: goto label_301f28;
        case 0x301f2cu: goto label_301f2c;
        case 0x301f30u: goto label_301f30;
        case 0x301f34u: goto label_301f34;
        case 0x301f38u: goto label_301f38;
        case 0x301f3cu: goto label_301f3c;
        case 0x301f40u: goto label_301f40;
        case 0x301f44u: goto label_301f44;
        case 0x301f48u: goto label_301f48;
        case 0x301f4cu: goto label_301f4c;
        case 0x301f50u: goto label_301f50;
        case 0x301f54u: goto label_301f54;
        case 0x301f58u: goto label_301f58;
        case 0x301f5cu: goto label_301f5c;
        case 0x301f60u: goto label_301f60;
        case 0x301f64u: goto label_301f64;
        case 0x301f68u: goto label_301f68;
        case 0x301f6cu: goto label_301f6c;
        case 0x301f70u: goto label_301f70;
        case 0x301f74u: goto label_301f74;
        case 0x301f78u: goto label_301f78;
        case 0x301f7cu: goto label_301f7c;
        case 0x301f80u: goto label_301f80;
        case 0x301f84u: goto label_301f84;
        case 0x301f88u: goto label_301f88;
        case 0x301f8cu: goto label_301f8c;
        case 0x301f90u: goto label_301f90;
        case 0x301f94u: goto label_301f94;
        case 0x301f98u: goto label_301f98;
        case 0x301f9cu: goto label_301f9c;
        case 0x301fa0u: goto label_301fa0;
        case 0x301fa4u: goto label_301fa4;
        case 0x301fa8u: goto label_301fa8;
        case 0x301facu: goto label_301fac;
        case 0x301fb0u: goto label_301fb0;
        case 0x301fb4u: goto label_301fb4;
        case 0x301fb8u: goto label_301fb8;
        case 0x301fbcu: goto label_301fbc;
        case 0x301fc0u: goto label_301fc0;
        case 0x301fc4u: goto label_301fc4;
        case 0x301fc8u: goto label_301fc8;
        case 0x301fccu: goto label_301fcc;
        case 0x301fd0u: goto label_301fd0;
        case 0x301fd4u: goto label_301fd4;
        case 0x301fd8u: goto label_301fd8;
        case 0x301fdcu: goto label_301fdc;
        case 0x301fe0u: goto label_301fe0;
        case 0x301fe4u: goto label_301fe4;
        case 0x301fe8u: goto label_301fe8;
        case 0x301fecu: goto label_301fec;
        case 0x301ff0u: goto label_301ff0;
        case 0x301ff4u: goto label_301ff4;
        case 0x301ff8u: goto label_301ff8;
        case 0x301ffcu: goto label_301ffc;
        case 0x302000u: goto label_302000;
        case 0x302004u: goto label_302004;
        case 0x302008u: goto label_302008;
        case 0x30200cu: goto label_30200c;
        case 0x302010u: goto label_302010;
        case 0x302014u: goto label_302014;
        case 0x302018u: goto label_302018;
        case 0x30201cu: goto label_30201c;
        case 0x302020u: goto label_302020;
        case 0x302024u: goto label_302024;
        case 0x302028u: goto label_302028;
        case 0x30202cu: goto label_30202c;
        case 0x302030u: goto label_302030;
        case 0x302034u: goto label_302034;
        default: break;
    }

    ctx->pc = 0x301cf8u;

label_301cf8:
    // 0x301cf8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x301cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_301cfc:
    // 0x301cfc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x301cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_301d00:
    // 0x301d00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x301d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_301d04:
    // 0x301d04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x301d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_301d08:
    // 0x301d08: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x301d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_301d0c:
    // 0x301d0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x301d0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_301d10:
    // 0x301d10: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x301d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_301d14:
    // 0x301d14: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x301d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_301d18:
    // 0x301d18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x301d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_301d1c:
    // 0x301d1c: 0x128000bc  beqz        $s4, . + 4 + (0xBC << 2)
label_301d20:
    if (ctx->pc == 0x301D20u) {
        ctx->pc = 0x301D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D1Cu;
        // 0x301d20: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D24u;
        goto label_301d24;
    }
    ctx->pc = 0x301D1Cu;
    {
        const bool branch_taken_0x301d1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D1Cu;
        // 0x301d20: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d1c) {
            ctx->pc = 0x302010u;
            goto label_302010;
        }
    }
    ctx->pc = 0x301D24u;
label_301d24:
    // 0x301d24: 0xc088aa4  jal         func_222A90
label_301d28:
    if (ctx->pc == 0x301D28u) {
        ctx->pc = 0x301D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D24u;
        // 0x301d28: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D2Cu;
        goto label_301d2c;
    }
    ctx->pc = 0x301D24u;
    SET_GPR_U32(ctx, 31, 0x301D2Cu);
    ctx->pc = 0x301D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D24u;
    // 0x301d28: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x301D24u, 0x301D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D2Cu;
label_301d2c:
    // 0x301d2c: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
label_301d30:
    if (ctx->pc == 0x301D30u) {
        ctx->pc = 0x301D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D2Cu;
        // 0x301d30: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D34u;
        goto label_301d34;
    }
    ctx->pc = 0x301D2Cu;
    {
        const bool branch_taken_0x301d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D2Cu;
        // 0x301d30: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d2c) {
            ctx->pc = 0x302014u;
            goto label_302014;
        }
    }
    ctx->pc = 0x301D34u;
label_301d34:
    // 0x301d34: 0xc08a076  jal         func_2281D8
label_301d38:
    if (ctx->pc == 0x301D38u) {
        ctx->pc = 0x301D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D34u;
        // 0x301d38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D3Cu;
        goto label_301d3c;
    }
    ctx->pc = 0x301D34u;
    SET_GPR_U32(ctx, 31, 0x301D3Cu);
    ctx->pc = 0x301D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D34u;
    // 0x301d38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x301D34u, 0x301D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D3Cu;
label_301d3c:
    // 0x301d3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301d40:
    // 0x301d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301d44:
    // 0x301d44: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_301d48:
    if (ctx->pc == 0x301D48u) {
        ctx->pc = 0x301D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D44u;
        // 0x301d48: 0x8e620200  lw          $v0, 0x200($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D4Cu;
        goto label_301d4c;
    }
    ctx->pc = 0x301D44u;
    {
        const bool branch_taken_0x301d44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x301d44) {
            ctx->pc = 0x301D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301D44u;
            // 0x301d48: 0x8e620200  lw          $v0, 0x200($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301D64u;
            goto label_301d64;
        }
    }
    ctx->pc = 0x301D4Cu;
label_301d4c:
    // 0x301d4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301d50:
    // 0x301d50: 0xc0a4742  jal         func_291D08
label_301d54:
    if (ctx->pc == 0x301D54u) {
        ctx->pc = 0x301D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D50u;
        // 0x301d54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D58u;
        goto label_301d58;
    }
    ctx->pc = 0x301D50u;
    SET_GPR_U32(ctx, 31, 0x301D58u);
    ctx->pc = 0x301D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D50u;
    // 0x301d54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D08u, 0x301D50u, 0x301D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D58u;
label_301d58:
    // 0x301d58: 0x105000ae  beq         $v0, $s0, . + 4 + (0xAE << 2)
label_301d5c:
    if (ctx->pc == 0x301D5Cu) {
        ctx->pc = 0x301D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D58u;
        // 0x301d5c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D60u;
        goto label_301d60;
    }
    ctx->pc = 0x301D58u;
    {
        const bool branch_taken_0x301d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x301D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D58u;
        // 0x301d5c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d58) {
            ctx->pc = 0x302014u;
            goto label_302014;
        }
    }
    ctx->pc = 0x301D60u;
label_301d60:
    // 0x301d60: 0x8e620200  lw          $v0, 0x200($s3)
    ctx->pc = 0x301d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_301d64:
    // 0x301d64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301d68:
    // 0x301d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_301d6c:
    // 0x301d6c: 0xc0a40d2  jal         func_290348
label_301d70:
    if (ctx->pc == 0x301D70u) {
        ctx->pc = 0x301D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D6Cu;
        // 0x301d70: 0xae620200  sw          $v0, 0x200($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D74u;
        goto label_301d74;
    }
    ctx->pc = 0x301D6Cu;
    SET_GPR_U32(ctx, 31, 0x301D74u);
    ctx->pc = 0x301D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D6Cu;
    // 0x301d70: 0xae620200  sw          $v0, 0x200($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x301D6Cu, 0x301D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D74u;
label_301d74:
    // 0x301d74: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_301d78:
    if (ctx->pc == 0x301D78u) {
        ctx->pc = 0x301D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D74u;
        // 0x301d78: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D7Cu;
        goto label_301d7c;
    }
    ctx->pc = 0x301D74u;
    {
        const bool branch_taken_0x301d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301d74) {
            ctx->pc = 0x301D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301D74u;
            // 0x301d78: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301E24u;
            goto label_301e24;
        }
    }
    ctx->pc = 0x301D7Cu;
label_301d7c:
    // 0x301d7c: 0xc089f98  jal         func_227E60
label_301d80:
    if (ctx->pc == 0x301D80u) {
        ctx->pc = 0x301D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D7Cu;
        // 0x301d80: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D84u;
        goto label_301d84;
    }
    ctx->pc = 0x301D7Cu;
    SET_GPR_U32(ctx, 31, 0x301D84u);
    ctx->pc = 0x301D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D7Cu;
    // 0x301d80: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x301D7Cu, 0x301D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D84u;
label_301d84:
    // 0x301d84: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_301d88:
    if (ctx->pc == 0x301D88u) {
        ctx->pc = 0x301D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D84u;
        // 0x301d88: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D8Cu;
        goto label_301d8c;
    }
    ctx->pc = 0x301D84u;
    {
        const bool branch_taken_0x301d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301d84) {
            ctx->pc = 0x301D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301D84u;
            // 0x301d88: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301E24u;
            goto label_301e24;
        }
    }
    ctx->pc = 0x301D8Cu;
label_301d8c:
    // 0x301d8c: 0xc0a2fc0  jal         func_28BF00
label_301d90:
    if (ctx->pc == 0x301D90u) {
        ctx->pc = 0x301D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D8Cu;
        // 0x301d90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D94u;
        goto label_301d94;
    }
    ctx->pc = 0x301D8Cu;
    SET_GPR_U32(ctx, 31, 0x301D94u);
    ctx->pc = 0x301D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D8Cu;
    // 0x301d90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x301D8Cu, 0x301D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D94u;
label_301d94:
    // 0x301d94: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x301d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_301d98:
    // 0x301d98: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x301d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_301d9c:
    // 0x301d9c: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x301d9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_301da0:
    // 0x301da0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x301da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_301da4:
    // 0x301da4: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x301da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_301da8:
    // 0x301da8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x301da8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_301dac:
    // 0x301dac: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x301dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_301db0:
    // 0x301db0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x301db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_301db4:
    // 0x301db4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x301db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_301db8:
    // 0x301db8: 0xc0cdb38  jal         func_336CE0
label_301dbc:
    if (ctx->pc == 0x301DBCu) {
        ctx->pc = 0x301DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DB8u;
        // 0x301dbc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DC0u;
        goto label_301dc0;
    }
    ctx->pc = 0x301DB8u;
    SET_GPR_U32(ctx, 31, 0x301DC0u);
    ctx->pc = 0x301DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DB8u;
    // 0x301dbc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x301DB8u, 0x301DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301DC0u;
label_301dc0:
    // 0x301dc0: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x301dc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_301dc4:
    // 0x301dc4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x301dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301dc8:
    // 0x301dc8: 0x0  nop
    ctx->pc = 0x301dc8u;
    // NOP
label_301dcc:
    // 0x301dcc: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_301dd0:
    if (ctx->pc == 0x301DD0u) {
        ctx->pc = 0x301DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DCCu;
        // 0x301dd0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DD4u;
        goto label_301dd4;
    }
    ctx->pc = 0x301DCCu;
    {
        const bool branch_taken_0x301dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301dcc) {
            ctx->pc = 0x301DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301DCCu;
            // 0x301dd0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301DF4u;
            goto label_301df4;
        }
    }
    ctx->pc = 0x301DD4u;
label_301dd4:
    // 0x301dd4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x301dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_301dd8:
    // 0x301dd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x301dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301ddc:
    // 0x301ddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x301ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301de0:
    // 0x301de0: 0xc0888a2  jal         func_222288
label_301de4:
    if (ctx->pc == 0x301DE4u) {
        ctx->pc = 0x301DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DE0u;
        // 0x301de4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DE8u;
        goto label_301de8;
    }
    ctx->pc = 0x301DE0u;
    SET_GPR_U32(ctx, 31, 0x301DE8u);
    ctx->pc = 0x301DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DE0u;
    // 0x301de4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x301DE0u, 0x301DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301DE8u;
label_301de8:
    // 0x301de8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_301dec:
    if (ctx->pc == 0x301DECu) {
        ctx->pc = 0x301DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DE8u;
        // 0x301dec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DF0u;
        goto label_301df0;
    }
    ctx->pc = 0x301DE8u;
    {
        const bool branch_taken_0x301de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301de8) {
            ctx->pc = 0x301DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301DE8u;
            // 0x301dec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301E24u;
            goto label_301e24;
        }
    }
    ctx->pc = 0x301DF0u;
label_301df0:
    // 0x301df0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x301df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_301df4:
    // 0x301df4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x301df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_301df8:
    // 0x301df8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x301df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_301dfc:
    // 0x301dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301e00:
    // 0x301e00: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x301e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_301e04:
    // 0x301e04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x301e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_301e08:
    // 0x301e08: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x301e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_301e0c:
    // 0x301e0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x301e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301e10:
    // 0x301e10: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x301e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
label_301e14:
    // 0x301e14: 0xc0a459a  jal         func_291668
label_301e18:
    if (ctx->pc == 0x301E18u) {
        ctx->pc = 0x301E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E14u;
        // 0x301e18: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E1Cu;
        goto label_301e1c;
    }
    ctx->pc = 0x301E14u;
    SET_GPR_U32(ctx, 31, 0x301E1Cu);
    ctx->pc = 0x301E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E14u;
    // 0x301e18: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291668u, 0x301E14u, 0x301E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E1Cu;
label_301e1c:
    // 0x301e1c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_301e20:
    if (ctx->pc == 0x301E20u) {
        ctx->pc = 0x301E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E1Cu;
        // 0x301e20: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E24u;
        goto label_301e24;
    }
    ctx->pc = 0x301E1Cu;
    {
        const bool branch_taken_0x301e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E1Cu;
        // 0x301e20: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e1c) {
            ctx->pc = 0x302014u;
            goto label_302014;
        }
    }
    ctx->pc = 0x301E24u;
label_301e24:
    // 0x301e24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x301e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301e28:
    // 0x301e28: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x301e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_301e2c:
    // 0x301e2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x301e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301e30:
    // 0x301e30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x301e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301e34:
    // 0x301e34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x301e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301e38:
    // 0x301e38: 0xc0a4d90  jal         func_293640
label_301e3c:
    if (ctx->pc == 0x301E3Cu) {
        ctx->pc = 0x301E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E38u;
        // 0x301e3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E40u;
        goto label_301e40;
    }
    ctx->pc = 0x301E38u;
    SET_GPR_U32(ctx, 31, 0x301E40u);
    ctx->pc = 0x301E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E38u;
    // 0x301e3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x301E38u, 0x301E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E40u;
label_301e40:
    // 0x301e40: 0xc089f98  jal         func_227E60
label_301e44:
    if (ctx->pc == 0x301E44u) {
        ctx->pc = 0x301E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E40u;
        // 0x301e44: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E48u;
        goto label_301e48;
    }
    ctx->pc = 0x301E40u;
    SET_GPR_U32(ctx, 31, 0x301E48u);
    ctx->pc = 0x301E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E40u;
    // 0x301e44: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x301E40u, 0x301E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E48u;
label_301e48:
    // 0x301e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301e4c:
    // 0x301e4c: 0x10430071  beq         $v0, $v1, . + 4 + (0x71 << 2)
label_301e50:
    if (ctx->pc == 0x301E50u) {
        ctx->pc = 0x301E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E4Cu;
        // 0x301e50: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E54u;
        goto label_301e54;
    }
    ctx->pc = 0x301E4Cu;
    {
        const bool branch_taken_0x301e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x301E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E4Cu;
        // 0x301e50: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e4c) {
            ctx->pc = 0x302014u;
            goto label_302014;
        }
    }
    ctx->pc = 0x301E54u;
label_301e54:
    // 0x301e54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x301e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_301e58:
    // 0x301e58: 0xc088a92  jal         func_222A48
label_301e5c:
    if (ctx->pc == 0x301E5Cu) {
        ctx->pc = 0x301E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E58u;
        // 0x301e5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E60u;
        goto label_301e60;
    }
    ctx->pc = 0x301E58u;
    SET_GPR_U32(ctx, 31, 0x301E60u);
    ctx->pc = 0x301E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E58u;
    // 0x301e5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x301E58u, 0x301E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E60u;
label_301e60:
    // 0x301e60: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_301e64:
    if (ctx->pc == 0x301E64u) {
        ctx->pc = 0x301E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E60u;
        // 0x301e64: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E68u;
        goto label_301e68;
    }
    ctx->pc = 0x301E60u;
    {
        const bool branch_taken_0x301e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301e60) {
            ctx->pc = 0x301E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301E60u;
            // 0x301e64: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301E80u;
            goto label_301e80;
        }
    }
    ctx->pc = 0x301E68u;
label_301e68:
    // 0x301e68: 0xc087502  jal         func_21D408
label_301e6c:
    if (ctx->pc == 0x301E6Cu) {
        ctx->pc = 0x301E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E68u;
        // 0x301e6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E70u;
        goto label_301e70;
    }
    ctx->pc = 0x301E68u;
    SET_GPR_U32(ctx, 31, 0x301E70u);
    ctx->pc = 0x301E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E68u;
    // 0x301e6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x301E68u, 0x301E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E70u;
label_301e70:
    // 0x301e70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x301e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301e74:
    // 0x301e74: 0xc0a40ca  jal         func_290328
label_301e78:
    if (ctx->pc == 0x301E78u) {
        ctx->pc = 0x301E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E74u;
        // 0x301e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E7Cu;
        goto label_301e7c;
    }
    ctx->pc = 0x301E74u;
    SET_GPR_U32(ctx, 31, 0x301E7Cu);
    ctx->pc = 0x301E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E74u;
    // 0x301e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x301E74u, 0x301E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E7Cu;
label_301e7c:
    // 0x301e7c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x301e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_301e80:
    // 0x301e80: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x301e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_301e84:
    // 0x301e84: 0x86900092  lh          $s0, 0x92($s4)
    ctx->pc = 0x301e84u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_301e88:
    // 0x301e88: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x301e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_301e8c:
    // 0x301e8c: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x301e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_301e90:
    // 0x301e90: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x301e90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_301e94:
    // 0x301e94: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x301e94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_301e98:
    // 0x301e98: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x301e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_301e9c:
    // 0x301e9c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x301e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_301ea0:
    // 0x301ea0: 0x40f809  jalr        $v0
label_301ea4:
    if (ctx->pc == 0x301EA4u) {
        ctx->pc = 0x301EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EA0u;
        // 0x301ea4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301EA8u;
        goto label_301ea8;
    }
    ctx->pc = 0x301EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301EA8u);
        ctx->pc = 0x301EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EA0u;
        // 0x301ea4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301EA0u, 0x301EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301EA8u;
label_301ea8:
    // 0x301ea8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x301ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_301eac:
    // 0x301eac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x301eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301eb0:
    // 0x301eb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x301eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_301eb4:
    // 0x301eb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x301eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301eb8:
    // 0x301eb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301ebc:
    // 0x301ebc: 0x40f809  jalr        $v0
label_301ec0:
    if (ctx->pc == 0x301EC0u) {
        ctx->pc = 0x301EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EBCu;
        // 0x301ec0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301EC4u;
        goto label_301ec4;
    }
    ctx->pc = 0x301EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301EC4u);
        ctx->pc = 0x301EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EBCu;
        // 0x301ec0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301EBCu, 0x301EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301EC4u;
label_301ec4:
    // 0x301ec4: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x301ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_301ec8:
    // 0x301ec8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x301ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301ecc:
    // 0x301ecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x301eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301ed0:
    // 0x301ed0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x301ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301ed4:
    // 0x301ed4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x301ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_301ed8:
    // 0x301ed8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301ed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301edc:
    // 0x301edc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x301edcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301ee0:
    // 0x301ee0: 0xc106e2c  jal         func_41B8B0
label_301ee4:
    if (ctx->pc == 0x301EE4u) {
        ctx->pc = 0x301EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EE0u;
        // 0x301ee4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301EE8u;
        goto label_301ee8;
    }
    ctx->pc = 0x301EE0u;
    SET_GPR_U32(ctx, 31, 0x301EE8u);
    ctx->pc = 0x301EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301EE0u;
    // 0x301ee4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x301EE0u, 0x301EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EE8u;
label_301ee8:
    // 0x301ee8: 0x8262002c  lb          $v0, 0x2C($s3)
    ctx->pc = 0x301ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
label_301eec:
    // 0x301eec: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
label_301ef0:
    if (ctx->pc == 0x301EF0u) {
        ctx->pc = 0x301EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EECu;
        // 0x301ef0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301EF4u;
        goto label_301ef4;
    }
    ctx->pc = 0x301EECu;
    {
        const bool branch_taken_0x301eec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EECu;
        // 0x301ef0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301eec) {
            ctx->pc = 0x301F38u;
            goto label_301f38;
        }
    }
    ctx->pc = 0x301EF4u;
label_301ef4:
    // 0x301ef4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_301ef8:
    if (ctx->pc == 0x301EF8u) {
        ctx->pc = 0x301EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EF4u;
        // 0x301ef8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301EFCu;
        goto label_301efc;
    }
    ctx->pc = 0x301EF4u;
    {
        const bool branch_taken_0x301ef4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301EF4u;
        // 0x301ef8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ef4) {
            ctx->pc = 0x301F08u;
            goto label_301f08;
        }
    }
    ctx->pc = 0x301EFCu;
label_301efc:
    // 0x301efc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x301efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_301f00:
    // 0x301f00: 0x10000002  b           . + 4 + (0x2 << 2)
label_301f04:
    if (ctx->pc == 0x301F04u) {
        ctx->pc = 0x301F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F00u;
        // 0x301f04: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F08u;
        goto label_301f08;
    }
    ctx->pc = 0x301F00u;
    {
        const bool branch_taken_0x301f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F00u;
        // 0x301f04: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f00) {
            ctx->pc = 0x301F0Cu;
            goto label_301f0c;
        }
    }
    ctx->pc = 0x301F08u;
label_301f08:
    // 0x301f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301f0c:
    // 0x301f0c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x301f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_301f10:
    // 0x301f10: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x301f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_301f14:
    // 0x301f14: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x301f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_301f18:
    // 0x301f18: 0x40f809  jalr        $v0
label_301f1c:
    if (ctx->pc == 0x301F1Cu) {
        ctx->pc = 0x301F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F18u;
        // 0x301f1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F20u;
        goto label_301f20;
    }
    ctx->pc = 0x301F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301F20u);
        ctx->pc = 0x301F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F18u;
        // 0x301f1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301F18u, 0x301F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301F20u;
label_301f20:
    // 0x301f20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x301f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_301f24:
    // 0x301f24: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_301f28:
    if (ctx->pc == 0x301F28u) {
        ctx->pc = 0x301F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F24u;
        // 0x301f28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F2Cu;
        goto label_301f2c;
    }
    ctx->pc = 0x301F24u;
    {
        const bool branch_taken_0x301f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x301F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F24u;
        // 0x301f28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f24) {
            ctx->pc = 0x301F38u;
            goto label_301f38;
        }
    }
    ctx->pc = 0x301F2Cu;
label_301f2c:
    // 0x301f2c: 0xc0a35f6  jal         func_28D7D8
label_301f30:
    if (ctx->pc == 0x301F30u) {
        ctx->pc = 0x301F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F2Cu;
        // 0x301f30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F34u;
        goto label_301f34;
    }
    ctx->pc = 0x301F2Cu;
    SET_GPR_U32(ctx, 31, 0x301F34u);
    ctx->pc = 0x301F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F2Cu;
    // 0x301f30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x301F2Cu, 0x301F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F34u;
label_301f34:
    // 0x301f34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301f38:
    // 0x301f38: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x301f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_301f3c:
    // 0x301f3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x301f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_301f40:
    // 0x301f40: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x301f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_301f44:
    // 0x301f44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x301f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301f48:
    // 0x301f48: 0xc0c0846  jal         func_302118
label_301f4c:
    if (ctx->pc == 0x301F4Cu) {
        ctx->pc = 0x301F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F48u;
        // 0x301f4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F50u;
        goto label_301f50;
    }
    ctx->pc = 0x301F48u;
    SET_GPR_U32(ctx, 31, 0x301F50u);
    ctx->pc = 0x301F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F48u;
    // 0x301f4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x301F48u, 0x301F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F50u;
label_301f50:
    // 0x301f50: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x301f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_301f54:
    // 0x301f54: 0xc08a096  jal         func_228258
label_301f58:
    if (ctx->pc == 0x301F58u) {
        ctx->pc = 0x301F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F54u;
        // 0x301f58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F5Cu;
        goto label_301f5c;
    }
    ctx->pc = 0x301F54u;
    SET_GPR_U32(ctx, 31, 0x301F5Cu);
    ctx->pc = 0x301F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F54u;
    // 0x301f58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x301F54u, 0x301F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F5Cu;
label_301f5c:
    // 0x301f5c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_301f60:
    if (ctx->pc == 0x301F60u) {
        ctx->pc = 0x301F64u;
        goto label_301f64;
    }
    ctx->pc = 0x301F5Cu;
    {
        const bool branch_taken_0x301f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301f5c) {
            ctx->pc = 0x301FC0u;
            goto label_301fc0;
        }
    }
    ctx->pc = 0x301F64u;
label_301f64:
    // 0x301f64: 0xc0a40d2  jal         func_290348
label_301f68:
    if (ctx->pc == 0x301F68u) {
        ctx->pc = 0x301F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F64u;
        // 0x301f68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F6Cu;
        goto label_301f6c;
    }
    ctx->pc = 0x301F64u;
    SET_GPR_U32(ctx, 31, 0x301F6Cu);
    ctx->pc = 0x301F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F64u;
    // 0x301f68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x301F64u, 0x301F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F6Cu;
label_301f6c:
    // 0x301f6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_301f70:
    if (ctx->pc == 0x301F70u) {
        ctx->pc = 0x301F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F6Cu;
        // 0x301f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F74u;
        goto label_301f74;
    }
    ctx->pc = 0x301F6Cu;
    {
        const bool branch_taken_0x301f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F6Cu;
        // 0x301f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f6c) {
            ctx->pc = 0x301FA8u;
            goto label_301fa8;
        }
    }
    ctx->pc = 0x301F74u;
label_301f74:
    // 0x301f74: 0xc087502  jal         func_21D408
label_301f78:
    if (ctx->pc == 0x301F78u) {
        ctx->pc = 0x301F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F74u;
        // 0x301f78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301F7Cu;
        goto label_301f7c;
    }
    ctx->pc = 0x301F74u;
    SET_GPR_U32(ctx, 31, 0x301F7Cu);
    ctx->pc = 0x301F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F74u;
    // 0x301f78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x301F74u, 0x301F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F7Cu;
label_301f7c:
    // 0x301f7c: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x301f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_301f80:
    // 0x301f80: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x301f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_301f84:
    // 0x301f84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301f88:
    // 0x301f88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x301f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301f8c:
    // 0x301f8c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x301f8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_301f90:
    // 0x301f90: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x301f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_301f94:
    // 0x301f94: 0xa263028f  sb          $v1, 0x28F($s3)
    ctx->pc = 0x301f94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 655), (uint8_t)GPR_U32(ctx, 3));
label_301f98:
    // 0x301f98: 0xc0a34ba  jal         func_28D2E8
label_301f9c:
    if (ctx->pc == 0x301F9Cu) {
        ctx->pc = 0x301F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F98u;
        // 0x301f9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301FA0u;
        goto label_301fa0;
    }
    ctx->pc = 0x301F98u;
    SET_GPR_U32(ctx, 31, 0x301FA0u);
    ctx->pc = 0x301F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F98u;
    // 0x301f9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x301F98u, 0x301FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301FA0u;
label_301fa0:
    // 0x301fa0: 0x10000007  b           . + 4 + (0x7 << 2)
label_301fa4:
    if (ctx->pc == 0x301FA4u) {
        ctx->pc = 0x301FA8u;
        goto label_301fa8;
    }
    ctx->pc = 0x301FA0u;
    {
        const bool branch_taken_0x301fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301fa0) {
            ctx->pc = 0x301FC0u;
            goto label_301fc0;
        }
    }
    ctx->pc = 0x301FA8u;
label_301fa8:
    // 0x301fa8: 0xc0a354e  jal         func_28D538
label_301fac:
    if (ctx->pc == 0x301FACu) {
        ctx->pc = 0x301FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FA8u;
        // 0x301fac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301FB0u;
        goto label_301fb0;
    }
    ctx->pc = 0x301FA8u;
    SET_GPR_U32(ctx, 31, 0x301FB0u);
    ctx->pc = 0x301FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301FA8u;
    // 0x301fac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x301FA8u, 0x301FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301FB0u;
label_301fb0:
    // 0x301fb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301fb4:
    // 0x301fb4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x301fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301fb8:
    // 0x301fb8: 0xc0a33f8  jal         func_28CFE0
label_301fbc:
    if (ctx->pc == 0x301FBCu) {
        ctx->pc = 0x301FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FB8u;
        // 0x301fbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301FC0u;
        goto label_301fc0;
    }
    ctx->pc = 0x301FB8u;
    SET_GPR_U32(ctx, 31, 0x301FC0u);
    ctx->pc = 0x301FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301FB8u;
    // 0x301fbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x301FB8u, 0x301FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301FC0u;
label_301fc0:
    // 0x301fc0: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
label_301fc4:
    if (ctx->pc == 0x301FC4u) {
        ctx->pc = 0x301FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FC0u;
        // 0x301fc4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301FC8u;
        goto label_301fc8;
    }
    ctx->pc = 0x301FC0u;
    {
        const bool branch_taken_0x301fc0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x301FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FC0u;
        // 0x301fc4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301fc0) {
            ctx->pc = 0x302014u;
            goto label_302014;
        }
    }
    ctx->pc = 0x301FC8u;
label_301fc8:
    // 0x301fc8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x301fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_301fcc:
    // 0x301fcc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x301fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_301fd0:
    // 0x301fd0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x301fd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301fd4:
    // 0x301fd4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301fd8:
    // 0x301fd8: 0x40f809  jalr        $v0
label_301fdc:
    if (ctx->pc == 0x301FDCu) {
        ctx->pc = 0x301FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FD8u;
        // 0x301fdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301FE0u;
        goto label_301fe0;
    }
    ctx->pc = 0x301FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301FE0u);
        ctx->pc = 0x301FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FD8u;
        // 0x301fdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301FD8u, 0x301FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301FE0u;
label_301fe0:
    // 0x301fe0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x301fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_301fe4:
    // 0x301fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301fe8:
    // 0x301fe8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x301fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301fec:
    // 0x301fec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301ff0:
    // 0x301ff0: 0x40f809  jalr        $v0
label_301ff4:
    if (ctx->pc == 0x301FF4u) {
        ctx->pc = 0x301FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FF0u;
        // 0x301ff4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301FF8u;
        goto label_301ff8;
    }
    ctx->pc = 0x301FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301FF8u);
        ctx->pc = 0x301FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FF0u;
        // 0x301ff4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301FF0u, 0x301FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301FF8u;
label_301ff8:
    // 0x301ff8: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x301ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_301ffc:
    // 0x301ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302000:
    // 0x302000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302004:
    // 0x302004: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302008:
    // 0x302008: 0xc0b11c4  jal         func_2C4710
label_30200c:
    if (ctx->pc == 0x30200Cu) {
        ctx->pc = 0x30200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302008u;
        // 0x30200c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302010u;
        goto label_302010;
    }
    ctx->pc = 0x302008u;
    SET_GPR_U32(ctx, 31, 0x302010u);
    ctx->pc = 0x30200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302008u;
    // 0x30200c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x302008u, 0x302010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302010u;
label_302010:
    // 0x302010: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x302010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_302014:
    // 0x302014: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x302014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_302018:
    // 0x302018: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x302018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30201c:
    // 0x30201c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30201cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_302020:
    // 0x302020: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x302020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_302024:
    // 0x302024: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x302024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_302028:
    // 0x302028: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x302028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30202c:
    // 0x30202c: 0x3e00008  jr          $ra
label_302030:
    if (ctx->pc == 0x302030u) {
        ctx->pc = 0x302030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30202Cu;
        // 0x302030: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302034u;
        goto label_302034;
    }
    ctx->pc = 0x30202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30202Cu;
        // 0x302030: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30202Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302034u;
label_302034:
    // 0x302034: 0x0  nop
    ctx->pc = 0x302034u;
    // NOP
    ctx->pc = 0x302038u;
}
