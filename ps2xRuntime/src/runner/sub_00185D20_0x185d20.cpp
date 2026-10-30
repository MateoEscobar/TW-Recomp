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

// Function: sub_00185D20
// Address: 0x185d20 - 0x186068
void sub_00185D20_0x185d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185D20_0x185d20");
#endif

    switch (ctx->pc) {
        case 0x185d20u: goto label_185d20;
        case 0x185d24u: goto label_185d24;
        case 0x185d28u: goto label_185d28;
        case 0x185d2cu: goto label_185d2c;
        case 0x185d30u: goto label_185d30;
        case 0x185d34u: goto label_185d34;
        case 0x185d38u: goto label_185d38;
        case 0x185d3cu: goto label_185d3c;
        case 0x185d40u: goto label_185d40;
        case 0x185d44u: goto label_185d44;
        case 0x185d48u: goto label_185d48;
        case 0x185d4cu: goto label_185d4c;
        case 0x185d50u: goto label_185d50;
        case 0x185d54u: goto label_185d54;
        case 0x185d58u: goto label_185d58;
        case 0x185d5cu: goto label_185d5c;
        case 0x185d60u: goto label_185d60;
        case 0x185d64u: goto label_185d64;
        case 0x185d68u: goto label_185d68;
        case 0x185d6cu: goto label_185d6c;
        case 0x185d70u: goto label_185d70;
        case 0x185d74u: goto label_185d74;
        case 0x185d78u: goto label_185d78;
        case 0x185d7cu: goto label_185d7c;
        case 0x185d80u: goto label_185d80;
        case 0x185d84u: goto label_185d84;
        case 0x185d88u: goto label_185d88;
        case 0x185d8cu: goto label_185d8c;
        case 0x185d90u: goto label_185d90;
        case 0x185d94u: goto label_185d94;
        case 0x185d98u: goto label_185d98;
        case 0x185d9cu: goto label_185d9c;
        case 0x185da0u: goto label_185da0;
        case 0x185da4u: goto label_185da4;
        case 0x185da8u: goto label_185da8;
        case 0x185dacu: goto label_185dac;
        case 0x185db0u: goto label_185db0;
        case 0x185db4u: goto label_185db4;
        case 0x185db8u: goto label_185db8;
        case 0x185dbcu: goto label_185dbc;
        case 0x185dc0u: goto label_185dc0;
        case 0x185dc4u: goto label_185dc4;
        case 0x185dc8u: goto label_185dc8;
        case 0x185dccu: goto label_185dcc;
        case 0x185dd0u: goto label_185dd0;
        case 0x185dd4u: goto label_185dd4;
        case 0x185dd8u: goto label_185dd8;
        case 0x185ddcu: goto label_185ddc;
        case 0x185de0u: goto label_185de0;
        case 0x185de4u: goto label_185de4;
        case 0x185de8u: goto label_185de8;
        case 0x185decu: goto label_185dec;
        case 0x185df0u: goto label_185df0;
        case 0x185df4u: goto label_185df4;
        case 0x185df8u: goto label_185df8;
        case 0x185dfcu: goto label_185dfc;
        case 0x185e00u: goto label_185e00;
        case 0x185e04u: goto label_185e04;
        case 0x185e08u: goto label_185e08;
        case 0x185e0cu: goto label_185e0c;
        case 0x185e10u: goto label_185e10;
        case 0x185e14u: goto label_185e14;
        case 0x185e18u: goto label_185e18;
        case 0x185e1cu: goto label_185e1c;
        case 0x185e20u: goto label_185e20;
        case 0x185e24u: goto label_185e24;
        case 0x185e28u: goto label_185e28;
        case 0x185e2cu: goto label_185e2c;
        case 0x185e30u: goto label_185e30;
        case 0x185e34u: goto label_185e34;
        case 0x185e38u: goto label_185e38;
        case 0x185e3cu: goto label_185e3c;
        case 0x185e40u: goto label_185e40;
        case 0x185e44u: goto label_185e44;
        case 0x185e48u: goto label_185e48;
        case 0x185e4cu: goto label_185e4c;
        case 0x185e50u: goto label_185e50;
        case 0x185e54u: goto label_185e54;
        case 0x185e58u: goto label_185e58;
        case 0x185e5cu: goto label_185e5c;
        case 0x185e60u: goto label_185e60;
        case 0x185e64u: goto label_185e64;
        case 0x185e68u: goto label_185e68;
        case 0x185e6cu: goto label_185e6c;
        case 0x185e70u: goto label_185e70;
        case 0x185e74u: goto label_185e74;
        case 0x185e78u: goto label_185e78;
        case 0x185e7cu: goto label_185e7c;
        case 0x185e80u: goto label_185e80;
        case 0x185e84u: goto label_185e84;
        case 0x185e88u: goto label_185e88;
        case 0x185e8cu: goto label_185e8c;
        case 0x185e90u: goto label_185e90;
        case 0x185e94u: goto label_185e94;
        case 0x185e98u: goto label_185e98;
        case 0x185e9cu: goto label_185e9c;
        case 0x185ea0u: goto label_185ea0;
        case 0x185ea4u: goto label_185ea4;
        case 0x185ea8u: goto label_185ea8;
        case 0x185eacu: goto label_185eac;
        case 0x185eb0u: goto label_185eb0;
        case 0x185eb4u: goto label_185eb4;
        case 0x185eb8u: goto label_185eb8;
        case 0x185ebcu: goto label_185ebc;
        case 0x185ec0u: goto label_185ec0;
        case 0x185ec4u: goto label_185ec4;
        case 0x185ec8u: goto label_185ec8;
        case 0x185eccu: goto label_185ecc;
        case 0x185ed0u: goto label_185ed0;
        case 0x185ed4u: goto label_185ed4;
        case 0x185ed8u: goto label_185ed8;
        case 0x185edcu: goto label_185edc;
        case 0x185ee0u: goto label_185ee0;
        case 0x185ee4u: goto label_185ee4;
        case 0x185ee8u: goto label_185ee8;
        case 0x185eecu: goto label_185eec;
        case 0x185ef0u: goto label_185ef0;
        case 0x185ef4u: goto label_185ef4;
        case 0x185ef8u: goto label_185ef8;
        case 0x185efcu: goto label_185efc;
        case 0x185f00u: goto label_185f00;
        case 0x185f04u: goto label_185f04;
        case 0x185f08u: goto label_185f08;
        case 0x185f0cu: goto label_185f0c;
        case 0x185f10u: goto label_185f10;
        case 0x185f14u: goto label_185f14;
        case 0x185f18u: goto label_185f18;
        case 0x185f1cu: goto label_185f1c;
        case 0x185f20u: goto label_185f20;
        case 0x185f24u: goto label_185f24;
        case 0x185f28u: goto label_185f28;
        case 0x185f2cu: goto label_185f2c;
        case 0x185f30u: goto label_185f30;
        case 0x185f34u: goto label_185f34;
        case 0x185f38u: goto label_185f38;
        case 0x185f3cu: goto label_185f3c;
        case 0x185f40u: goto label_185f40;
        case 0x185f44u: goto label_185f44;
        case 0x185f48u: goto label_185f48;
        case 0x185f4cu: goto label_185f4c;
        case 0x185f50u: goto label_185f50;
        case 0x185f54u: goto label_185f54;
        case 0x185f58u: goto label_185f58;
        case 0x185f5cu: goto label_185f5c;
        case 0x185f60u: goto label_185f60;
        case 0x185f64u: goto label_185f64;
        case 0x185f68u: goto label_185f68;
        case 0x185f6cu: goto label_185f6c;
        case 0x185f70u: goto label_185f70;
        case 0x185f74u: goto label_185f74;
        case 0x185f78u: goto label_185f78;
        case 0x185f7cu: goto label_185f7c;
        case 0x185f80u: goto label_185f80;
        case 0x185f84u: goto label_185f84;
        case 0x185f88u: goto label_185f88;
        case 0x185f8cu: goto label_185f8c;
        case 0x185f90u: goto label_185f90;
        case 0x185f94u: goto label_185f94;
        case 0x185f98u: goto label_185f98;
        case 0x185f9cu: goto label_185f9c;
        case 0x185fa0u: goto label_185fa0;
        case 0x185fa4u: goto label_185fa4;
        case 0x185fa8u: goto label_185fa8;
        case 0x185facu: goto label_185fac;
        case 0x185fb0u: goto label_185fb0;
        case 0x185fb4u: goto label_185fb4;
        case 0x185fb8u: goto label_185fb8;
        case 0x185fbcu: goto label_185fbc;
        case 0x185fc0u: goto label_185fc0;
        case 0x185fc4u: goto label_185fc4;
        case 0x185fc8u: goto label_185fc8;
        case 0x185fccu: goto label_185fcc;
        case 0x185fd0u: goto label_185fd0;
        case 0x185fd4u: goto label_185fd4;
        case 0x185fd8u: goto label_185fd8;
        case 0x185fdcu: goto label_185fdc;
        case 0x185fe0u: goto label_185fe0;
        case 0x185fe4u: goto label_185fe4;
        case 0x185fe8u: goto label_185fe8;
        case 0x185fecu: goto label_185fec;
        case 0x185ff0u: goto label_185ff0;
        case 0x185ff4u: goto label_185ff4;
        case 0x185ff8u: goto label_185ff8;
        case 0x185ffcu: goto label_185ffc;
        case 0x186000u: goto label_186000;
        case 0x186004u: goto label_186004;
        case 0x186008u: goto label_186008;
        case 0x18600cu: goto label_18600c;
        case 0x186010u: goto label_186010;
        case 0x186014u: goto label_186014;
        case 0x186018u: goto label_186018;
        case 0x18601cu: goto label_18601c;
        case 0x186020u: goto label_186020;
        case 0x186024u: goto label_186024;
        case 0x186028u: goto label_186028;
        case 0x18602cu: goto label_18602c;
        case 0x186030u: goto label_186030;
        case 0x186034u: goto label_186034;
        case 0x186038u: goto label_186038;
        case 0x18603cu: goto label_18603c;
        case 0x186040u: goto label_186040;
        case 0x186044u: goto label_186044;
        case 0x186048u: goto label_186048;
        case 0x18604cu: goto label_18604c;
        case 0x186050u: goto label_186050;
        case 0x186054u: goto label_186054;
        case 0x186058u: goto label_186058;
        case 0x18605cu: goto label_18605c;
        case 0x186060u: goto label_186060;
        case 0x186064u: goto label_186064;
        default: break;
    }

    ctx->pc = 0x185d20u;

label_185d20:
    // 0x185d20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x185d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_185d24:
    // 0x185d24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x185d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_185d28:
    // 0x185d28: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x185d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_185d2c:
    // 0x185d2c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x185d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_185d30:
    // 0x185d30: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x185d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_185d34:
    // 0x185d34: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x185d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_185d38:
    // 0x185d38: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x185d38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185d3c:
    // 0x185d3c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x185d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_185d40:
    // 0x185d40: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x185d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_185d44:
    // 0x185d44: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x185d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_185d48:
    // 0x185d48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x185d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_185d4c:
    // 0x185d4c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x185d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_185d50:
    // 0x185d50: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x185d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_185d54:
    // 0x185d54: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x185d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_185d58:
    // 0x185d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_185d5c:
    // 0x185d5c: 0x8c65cdb4  lw          $a1, -0x324C($v1)
    ctx->pc = 0x185d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_185d60:
    // 0x185d60: 0x8c571034  lw          $s7, 0x1034($v0)
    ctx->pc = 0x185d60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4148)));
label_185d64:
    // 0x185d64: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x185d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_185d68:
    // 0x185d68: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x185d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_185d6c:
    // 0x185d6c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x185d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_185d70:
    // 0x185d70: 0x40f809  jalr        $v0
label_185d74:
    if (ctx->pc == 0x185D74u) {
        ctx->pc = 0x185D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D70u;
        // 0x185d74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185D78u;
        goto label_185d78;
    }
    ctx->pc = 0x185D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185D78u);
        ctx->pc = 0x185D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D70u;
        // 0x185d74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185D70u, 0x185D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185D78u;
label_185d78:
    // 0x185d78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x185d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185d7c:
    // 0x185d7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_185d80:
    // 0x185d80: 0xc11cb14  jal         func_472C50
label_185d84:
    if (ctx->pc == 0x185D84u) {
        ctx->pc = 0x185D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D80u;
        // 0x185d84: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185D88u;
        goto label_185d88;
    }
    ctx->pc = 0x185D80u;
    SET_GPR_U32(ctx, 31, 0x185D88u);
    ctx->pc = 0x185D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D80u;
    // 0x185d84: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C50u, 0x185D80u, 0x185D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D88u;
label_185d88:
    // 0x185d88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x185d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185d8c:
    // 0x185d8c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x185d8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185d90:
    // 0x185d90: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x185d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_185d94:
    // 0x185d94: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x185d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_185d98:
    // 0x185d98: 0x40f809  jalr        $v0
label_185d9c:
    if (ctx->pc == 0x185D9Cu) {
        ctx->pc = 0x185D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D98u;
        // 0x185d9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DA0u;
        goto label_185da0;
    }
    ctx->pc = 0x185D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185DA0u);
        ctx->pc = 0x185D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D98u;
        // 0x185d9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185D98u, 0x185DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185DA0u;
label_185da0:
    // 0x185da0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_185da4:
    if (ctx->pc == 0x185DA4u) {
        ctx->pc = 0x185DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DA0u;
        // 0x185da4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DA8u;
        goto label_185da8;
    }
    ctx->pc = 0x185DA0u;
    {
        const bool branch_taken_0x185da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DA0u;
        // 0x185da4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185da0) {
            ctx->pc = 0x185DB0u;
            goto label_185db0;
        }
    }
    ctx->pc = 0x185DA8u;
label_185da8:
    // 0x185da8: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_185dac:
    if (ctx->pc == 0x185DACu) {
        ctx->pc = 0x185DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DA8u;
        // 0x185dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DB0u;
        goto label_185db0;
    }
    ctx->pc = 0x185DA8u;
    {
        const bool branch_taken_0x185da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DA8u;
        // 0x185dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185da8) {
            ctx->pc = 0x186034u;
            goto label_186034;
        }
    }
    ctx->pc = 0x185DB0u;
label_185db0:
    // 0x185db0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x185db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_185db4:
    // 0x185db4: 0x2451ad28  addiu       $s1, $v0, -0x52D8
    ctx->pc = 0x185db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946088));
label_185db8:
    // 0x185db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185dbc:
    // 0x185dbc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x185dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_185dc0:
    // 0x185dc0: 0x26b2149c  addiu       $s2, $s5, 0x149C
    ctx->pc = 0x185dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 5276));
label_185dc4:
    // 0x185dc4: 0x40f809  jalr        $v0
label_185dc8:
    if (ctx->pc == 0x185DC8u) {
        ctx->pc = 0x185DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DC4u;
        // 0x185dc8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DCCu;
        goto label_185dcc;
    }
    ctx->pc = 0x185DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185DCCu);
        ctx->pc = 0x185DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DC4u;
        // 0x185dc8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185DC4u, 0x185DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185DCCu;
label_185dcc:
    // 0x185dcc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x185dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_185dd0:
    // 0x185dd0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_185dd4:
    // 0x185dd4: 0x40f809  jalr        $v0
label_185dd8:
    if (ctx->pc == 0x185DD8u) {
        ctx->pc = 0x185DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DD4u;
        // 0x185dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DDCu;
        goto label_185ddc;
    }
    ctx->pc = 0x185DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185DDCu);
        ctx->pc = 0x185DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DD4u;
        // 0x185dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185DD4u, 0x185DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185DDCu;
label_185ddc:
    // 0x185ddc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x185ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_185de0:
    // 0x185de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185de4:
    // 0x185de4: 0x40f809  jalr        $v0
label_185de8:
    if (ctx->pc == 0x185DE8u) {
        ctx->pc = 0x185DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DE4u;
        // 0x185de8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DECu;
        goto label_185dec;
    }
    ctx->pc = 0x185DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185DECu);
        ctx->pc = 0x185DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DE4u;
        // 0x185de8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185DE4u, 0x185DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185DECu;
label_185dec:
    // 0x185dec: 0xc11c754  jal         func_471D50
label_185df0:
    if (ctx->pc == 0x185DF0u) {
        ctx->pc = 0x185DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DECu;
        // 0x185df0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DF4u;
        goto label_185df4;
    }
    ctx->pc = 0x185DECu;
    SET_GPR_U32(ctx, 31, 0x185DF4u);
    ctx->pc = 0x185DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DECu;
    // 0x185df0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D50u, 0x185DECu, 0x185DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DF4u;
label_185df4:
    // 0x185df4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185df8:
    // 0x185df8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x185df8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185dfc:
    // 0x185dfc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x185dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_185e00:
    // 0x185e00: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x185e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_185e04:
    // 0x185e04: 0x40f809  jalr        $v0
label_185e08:
    if (ctx->pc == 0x185E08u) {
        ctx->pc = 0x185E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E04u;
        // 0x185e08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E0Cu;
        goto label_185e0c;
    }
    ctx->pc = 0x185E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185E0Cu);
        ctx->pc = 0x185E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E04u;
        // 0x185e08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185E04u, 0x185E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185E0Cu;
label_185e0c:
    // 0x185e0c: 0x3c070018  lui         $a3, 0x18
    ctx->pc = 0x185e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24 << 16));
label_185e10:
    // 0x185e10: 0x8ea51898  lw          $a1, 0x1898($s5)
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
label_185e14:
    // 0x185e14: 0x24e74890  addiu       $a3, $a3, 0x4890
    ctx->pc = 0x185e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18576));
label_185e18:
    // 0x185e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x185e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185e1c:
    // 0x185e1c: 0xc10cff6  jal         func_433FD8
label_185e20:
    if (ctx->pc == 0x185E20u) {
        ctx->pc = 0x185E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E1Cu;
        // 0x185e20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E24u;
        goto label_185e24;
    }
    ctx->pc = 0x185E1Cu;
    SET_GPR_U32(ctx, 31, 0x185E24u);
    ctx->pc = 0x185E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E1Cu;
    // 0x185e20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x185E1Cu, 0x185E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E24u;
label_185e24:
    // 0x185e24: 0x8ea21898  lw          $v0, 0x1898($s5)
    ctx->pc = 0x185e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
label_185e28:
    // 0x185e28: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
label_185e2c:
    if (ctx->pc == 0x185E2Cu) {
        ctx->pc = 0x185E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E28u;
        // 0x185e2c: 0xaea01898  sw          $zero, 0x1898($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E30u;
        goto label_185e30;
    }
    ctx->pc = 0x185E28u;
    {
        const bool branch_taken_0x185e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e28) {
            ctx->pc = 0x185E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185E28u;
            // 0x185e2c: 0xaea01898  sw          $zero, 0x1898($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 6296), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185F80u;
            goto label_185f80;
        }
    }
    ctx->pc = 0x185E30u;
label_185e30:
    // 0x185e30: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x185e30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185e34:
    // 0x185e34: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x185e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185e38:
    // 0x185e38: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x185e38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_185e3c:
    // 0x185e3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x185e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_185e40:
    // 0x185e40: 0xc047ab8  jal         func_11EAE0
label_185e44:
    if (ctx->pc == 0x185E44u) {
        ctx->pc = 0x185E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E40u;
        // 0x185e44: 0x90510042  lbu         $s1, 0x42($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E48u;
        goto label_185e48;
    }
    ctx->pc = 0x185E40u;
    SET_GPR_U32(ctx, 31, 0x185E48u);
    ctx->pc = 0x185E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E40u;
    // 0x185e44: 0x90510042  lbu         $s1, 0x42($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x185E40u, 0x185E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E48u;
label_185e48:
    // 0x185e48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_185e4c:
    if (ctx->pc == 0x185E4Cu) {
        ctx->pc = 0x185E50u;
        goto label_185e50;
    }
    ctx->pc = 0x185E48u;
    {
        const bool branch_taken_0x185e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e48) {
            ctx->pc = 0x185E6Cu;
            goto label_185e6c;
        }
    }
    ctx->pc = 0x185E50u;
label_185e50:
    // 0x185e50: 0xc047ab8  jal         func_11EAE0
label_185e54:
    if (ctx->pc == 0x185E54u) {
        ctx->pc = 0x185E58u;
        goto label_185e58;
    }
    ctx->pc = 0x185E50u;
    SET_GPR_U32(ctx, 31, 0x185E58u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x185E50u, 0x185E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E58u;
label_185e58:
    // 0x185e58: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x185e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_185e5c:
    // 0x185e5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_185e60:
    if (ctx->pc == 0x185E60u) {
        ctx->pc = 0x185E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E5Cu;
        // 0x185e60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E64u;
        goto label_185e64;
    }
    ctx->pc = 0x185E5Cu;
    {
        const bool branch_taken_0x185e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E5Cu;
        // 0x185e60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e5c) {
            ctx->pc = 0x185E74u;
            goto label_185e74;
        }
    }
    ctx->pc = 0x185E64u;
label_185e64:
    // 0x185e64: 0x10000021  b           . + 4 + (0x21 << 2)
label_185e68:
    if (ctx->pc == 0x185E68u) {
        ctx->pc = 0x185E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E64u;
        // 0x185e68: 0x8c45cdb4  lw          $a1, -0x324C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E6Cu;
        goto label_185e6c;
    }
    ctx->pc = 0x185E64u;
    {
        const bool branch_taken_0x185e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E64u;
        // 0x185e68: 0x8c45cdb4  lw          $a1, -0x324C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e64) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185E6Cu;
label_185e6c:
    // 0x185e6c: 0x1620001e  bnez        $s1, . + 4 + (0x1E << 2)
label_185e70:
    if (ctx->pc == 0x185E70u) {
        ctx->pc = 0x185E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E6Cu;
        // 0x185e70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E74u;
        goto label_185e74;
    }
    ctx->pc = 0x185E6Cu;
    {
        const bool branch_taken_0x185e6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x185E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E6Cu;
        // 0x185e70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e6c) {
            ctx->pc = 0x185EE8u;
            goto label_185ee8;
        }
    }
    ctx->pc = 0x185E74u;
label_185e74:
    // 0x185e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185e78:
    // 0x185e78: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x185e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_185e7c:
    // 0x185e7c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x185e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_185e80:
    // 0x185e80: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x185e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_185e84:
    // 0x185e84: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x185e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_185e88:
    // 0x185e88: 0x40f809  jalr        $v0
label_185e8c:
    if (ctx->pc == 0x185E8Cu) {
        ctx->pc = 0x185E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E88u;
        // 0x185e8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E90u;
        goto label_185e90;
    }
    ctx->pc = 0x185E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185E90u);
        ctx->pc = 0x185E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E88u;
        // 0x185e8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185E88u, 0x185E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185E90u;
label_185e90:
    // 0x185e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x185e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185e94:
    // 0x185e94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x185e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_185e98:
    // 0x185e98: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_185e9c:
    // 0x185e9c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x185e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_185ea0:
    // 0x185ea0: 0x40f809  jalr        $v0
label_185ea4:
    if (ctx->pc == 0x185EA4u) {
        ctx->pc = 0x185EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA0u;
        // 0x185ea4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EA8u;
        goto label_185ea8;
    }
    ctx->pc = 0x185EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185EA8u);
        ctx->pc = 0x185EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA0u;
        // 0x185ea4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185EA0u, 0x185EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185EA8u;
label_185ea8:
    // 0x185ea8: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_185eac:
    if (ctx->pc == 0x185EACu) {
        ctx->pc = 0x185EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA8u;
        // 0x185eac: 0x8ea21898  lw          $v0, 0x1898($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EB0u;
        goto label_185eb0;
    }
    ctx->pc = 0x185EA8u;
    {
        const bool branch_taken_0x185ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ea8) {
            ctx->pc = 0x185EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185EA8u;
            // 0x185eac: 0x8ea21898  lw          $v0, 0x1898($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185F6Cu;
            goto label_185f6c;
        }
    }
    ctx->pc = 0x185EB0u;
label_185eb0:
    // 0x185eb0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x185eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_185eb4:
    // 0x185eb4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x185eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_185eb8:
    // 0x185eb8: 0x40f809  jalr        $v0
label_185ebc:
    if (ctx->pc == 0x185EBCu) {
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EC0u;
        goto label_185ec0;
    }
    ctx->pc = 0x185EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185EC0u);
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185EB8u, 0x185EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185EC0u;
label_185ec0:
    // 0x185ec0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x185ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_185ec4:
    // 0x185ec4: 0xc065c5a  jal         func_197168
label_185ec8:
    if (ctx->pc == 0x185EC8u) {
        ctx->pc = 0x185EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EC4u;
        // 0x185ec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185ECCu;
        goto label_185ecc;
    }
    ctx->pc = 0x185EC4u;
    SET_GPR_U32(ctx, 31, 0x185ECCu);
    ctx->pc = 0x185EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EC4u;
    // 0x185ec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197168u, 0x185EC4u, 0x185ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185ECCu;
label_185ecc:
    // 0x185ecc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x185eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_185ed0:
    // 0x185ed0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x185ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_185ed4:
    // 0x185ed4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x185ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_185ed8:
    // 0x185ed8: 0x40f809  jalr        $v0
label_185edc:
    if (ctx->pc == 0x185EDCu) {
        ctx->pc = 0x185EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185ED8u;
        // 0x185edc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EE0u;
        goto label_185ee0;
    }
    ctx->pc = 0x185ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185EE0u);
        ctx->pc = 0x185EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185ED8u;
        // 0x185edc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185ED8u, 0x185EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185EE0u;
label_185ee0:
    // 0x185ee0: 0x10000022  b           . + 4 + (0x22 << 2)
label_185ee4:
    if (ctx->pc == 0x185EE4u) {
        ctx->pc = 0x185EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EE0u;
        // 0x185ee4: 0x8ea21898  lw          $v0, 0x1898($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EE8u;
        goto label_185ee8;
    }
    ctx->pc = 0x185EE0u;
    {
        const bool branch_taken_0x185ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EE0u;
        // 0x185ee4: 0x8ea21898  lw          $v0, 0x1898($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ee0) {
            ctx->pc = 0x185F6Cu;
            goto label_185f6c;
        }
    }
    ctx->pc = 0x185EE8u;
label_185ee8:
    // 0x185ee8: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x185ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_185eec:
    // 0x185eec: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x185eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_185ef0:
    // 0x185ef0: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x185ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_185ef4:
    // 0x185ef4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x185ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_185ef8:
    // 0x185ef8: 0x40f809  jalr        $v0
label_185efc:
    if (ctx->pc == 0x185EFCu) {
        ctx->pc = 0x185EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EF8u;
        // 0x185efc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F00u;
        goto label_185f00;
    }
    ctx->pc = 0x185EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185F00u);
        ctx->pc = 0x185EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EF8u;
        // 0x185efc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185EF8u, 0x185F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185F00u;
label_185f00:
    // 0x185f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x185f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185f04:
    // 0x185f04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_185f08:
    // 0x185f08: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x185f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_185f0c:
    // 0x185f0c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x185f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_185f10:
    // 0x185f10: 0x40f809  jalr        $v0
label_185f14:
    if (ctx->pc == 0x185F14u) {
        ctx->pc = 0x185F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F10u;
        // 0x185f14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F18u;
        goto label_185f18;
    }
    ctx->pc = 0x185F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185F18u);
        ctx->pc = 0x185F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F10u;
        // 0x185f14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185F10u, 0x185F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185F18u;
label_185f18:
    // 0x185f18: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_185f1c:
    if (ctx->pc == 0x185F1Cu) {
        ctx->pc = 0x185F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F18u;
        // 0x185f1c: 0x8ea21898  lw          $v0, 0x1898($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F20u;
        goto label_185f20;
    }
    ctx->pc = 0x185F18u;
    {
        const bool branch_taken_0x185f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f18) {
            ctx->pc = 0x185F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185F18u;
            // 0x185f1c: 0x8ea21898  lw          $v0, 0x1898($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185F6Cu;
            goto label_185f6c;
        }
    }
    ctx->pc = 0x185F20u;
label_185f20:
    // 0x185f20: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x185f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_185f24:
    // 0x185f24: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_185f28:
    // 0x185f28: 0x40f809  jalr        $v0
label_185f2c:
    if (ctx->pc == 0x185F2Cu) {
        ctx->pc = 0x185F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F28u;
        // 0x185f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F30u;
        goto label_185f30;
    }
    ctx->pc = 0x185F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185F30u);
        ctx->pc = 0x185F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F28u;
        // 0x185f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185F28u, 0x185F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185F30u;
label_185f30:
    // 0x185f30: 0xc047ab8  jal         func_11EAE0
label_185f34:
    if (ctx->pc == 0x185F34u) {
        ctx->pc = 0x185F38u;
        goto label_185f38;
    }
    ctx->pc = 0x185F30u;
    SET_GPR_U32(ctx, 31, 0x185F38u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x185F30u, 0x185F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F38u;
label_185f38:
    // 0x185f38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_185f3c:
    if (ctx->pc == 0x185F3Cu) {
        ctx->pc = 0x185F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F38u;
        // 0x185f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F40u;
        goto label_185f40;
    }
    ctx->pc = 0x185F38u;
    {
        const bool branch_taken_0x185f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F38u;
        // 0x185f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f38) {
            ctx->pc = 0x185F4Cu;
            goto label_185f4c;
        }
    }
    ctx->pc = 0x185F40u;
label_185f40:
    // 0x185f40: 0xc047ab8  jal         func_11EAE0
label_185f44:
    if (ctx->pc == 0x185F44u) {
        ctx->pc = 0x185F48u;
        goto label_185f48;
    }
    ctx->pc = 0x185F40u;
    SET_GPR_U32(ctx, 31, 0x185F48u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x185F40u, 0x185F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F48u;
label_185f48:
    // 0x185f48: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x185f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_185f4c:
    // 0x185f4c: 0xc065c5a  jal         func_197168
label_185f50:
    if (ctx->pc == 0x185F50u) {
        ctx->pc = 0x185F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F4Cu;
        // 0x185f50: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F54u;
        goto label_185f54;
    }
    ctx->pc = 0x185F4Cu;
    SET_GPR_U32(ctx, 31, 0x185F54u);
    ctx->pc = 0x185F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F4Cu;
    // 0x185f50: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197168u, 0x185F4Cu, 0x185F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F54u;
label_185f54:
    // 0x185f54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x185f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_185f58:
    // 0x185f58: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x185f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_185f5c:
    // 0x185f5c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x185f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_185f60:
    // 0x185f60: 0x40f809  jalr        $v0
label_185f64:
    if (ctx->pc == 0x185F64u) {
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F60u;
        // 0x185f64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F68u;
        goto label_185f68;
    }
    ctx->pc = 0x185F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185F68u);
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F60u;
        // 0x185f64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185F60u, 0x185F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185F68u;
label_185f68:
    // 0x185f68: 0x8ea21898  lw          $v0, 0x1898($s5)
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6296)));
label_185f6c:
    // 0x185f6c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x185f6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_185f70:
    // 0x185f70: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x185f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_185f74:
    // 0x185f74: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_185f78:
    if (ctx->pc == 0x185F78u) {
        ctx->pc = 0x185F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F74u;
        // 0x185f78: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F7Cu;
        goto label_185f7c;
    }
    ctx->pc = 0x185F74u;
    {
        const bool branch_taken_0x185f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F74u;
        // 0x185f78: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f74) {
            ctx->pc = 0x185E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185e38;
        }
    }
    ctx->pc = 0x185F7Cu;
label_185f7c:
    // 0x185f7c: 0xaea01898  sw          $zero, 0x1898($s5)
    ctx->pc = 0x185f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6296), GPR_U32(ctx, 0));
label_185f80:
    // 0x185f80: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x185f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185f84:
    // 0x185f84: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x185f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_185f88:
    // 0x185f88: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x185f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_185f8c:
    // 0x185f8c: 0x40f809  jalr        $v0
label_185f90:
    if (ctx->pc == 0x185F90u) {
        ctx->pc = 0x185F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F8Cu;
        // 0x185f90: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F94u;
        goto label_185f94;
    }
    ctx->pc = 0x185F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185F94u);
        ctx->pc = 0x185F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F8Cu;
        // 0x185f90: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185F8Cu, 0x185F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185F94u;
label_185f94:
    // 0x185f94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_185f98:
    if (ctx->pc == 0x185F98u) {
        ctx->pc = 0x185F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F94u;
        // 0x185f98: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F9Cu;
        goto label_185f9c;
    }
    ctx->pc = 0x185F94u;
    {
        const bool branch_taken_0x185f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F94u;
        // 0x185f98: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f94) {
            ctx->pc = 0x185FD4u;
            goto label_185fd4;
        }
    }
    ctx->pc = 0x185F9Cu;
label_185f9c:
    // 0x185f9c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_185fa0:
    // 0x185fa0: 0x2450ad28  addiu       $s0, $v0, -0x52D8
    ctx->pc = 0x185fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946088));
label_185fa4:
    // 0x185fa4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x185fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_185fa8:
    // 0x185fa8: 0x40f809  jalr        $v0
label_185fac:
    if (ctx->pc == 0x185FACu) {
        ctx->pc = 0x185FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FA8u;
        // 0x185fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FB0u;
        goto label_185fb0;
    }
    ctx->pc = 0x185FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185FB0u);
        ctx->pc = 0x185FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FA8u;
        // 0x185fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FA8u, 0x185FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185FB0u;
label_185fb0:
    // 0x185fb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x185fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_185fb4:
    // 0x185fb4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x185fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_185fb8:
    // 0x185fb8: 0x40f809  jalr        $v0
label_185fbc:
    if (ctx->pc == 0x185FBCu) {
        ctx->pc = 0x185FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB8u;
        // 0x185fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FC0u;
        goto label_185fc0;
    }
    ctx->pc = 0x185FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185FC0u);
        ctx->pc = 0x185FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB8u;
        // 0x185fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FB8u, 0x185FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185FC0u;
label_185fc0:
    // 0x185fc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185fc4:
    // 0x185fc4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x185fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_185fc8:
    // 0x185fc8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x185fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_185fcc:
    // 0x185fcc: 0x40f809  jalr        $v0
label_185fd0:
    if (ctx->pc == 0x185FD0u) {
        ctx->pc = 0x185FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FCCu;
        // 0x185fd0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FD4u;
        goto label_185fd4;
    }
    ctx->pc = 0x185FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185FD4u);
        ctx->pc = 0x185FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FCCu;
        // 0x185fd0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FCCu, 0x185FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185FD4u;
label_185fd4:
    // 0x185fd4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x185fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_185fd8:
    // 0x185fd8: 0xc11cb0a  jal         func_472C28
label_185fdc:
    if (ctx->pc == 0x185FDCu) {
        ctx->pc = 0x185FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FD8u;
        // 0x185fdc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FE0u;
        goto label_185fe0;
    }
    ctx->pc = 0x185FD8u;
    SET_GPR_U32(ctx, 31, 0x185FE0u);
    ctx->pc = 0x185FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FD8u;
    // 0x185fdc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C28u, 0x185FD8u, 0x185FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FE0u;
label_185fe0:
    // 0x185fe0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x185fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_185fe4:
    // 0x185fe4: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x185fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
label_185fe8:
    // 0x185fe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_185fec:
    // 0x185fec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x185fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_185ff0:
    // 0x185ff0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_185ff4:
    if (ctx->pc == 0x185FF4u) {
        ctx->pc = 0x185FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF0u;
        // 0x185ff4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FF8u;
        goto label_185ff8;
    }
    ctx->pc = 0x185FF0u;
    {
        const bool branch_taken_0x185ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF0u;
        // 0x185ff4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ff0) {
            ctx->pc = 0x186028u;
            goto label_186028;
        }
    }
    ctx->pc = 0x185FF8u;
label_185ff8:
    // 0x185ff8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x185ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_185ffc:
    // 0x185ffc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x185ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
label_186000:
    // 0x186000: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x186000u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_186004:
    // 0x186004: 0xf  sync
    ctx->pc = 0x186004u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_186008:
    // 0x186008: 0x40f  sync.p
    ctx->pc = 0x186008u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_18600c:
    // 0x18600c: 0x0  nop
    ctx->pc = 0x18600cu;
    // NOP
label_186010:
    // 0x186010: 0x0  nop
    ctx->pc = 0x186010u;
    // NOP
label_186014:
    // 0x186014: 0x0  nop
    ctx->pc = 0x186014u;
    // NOP
label_186018:
    // 0x186018: 0x0  nop
    ctx->pc = 0x186018u;
    // NOP
label_18601c:
    // 0x18601c: 0x0  nop
    ctx->pc = 0x18601cu;
    // NOP
label_186020:
    // 0x186020: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
label_186024:
    if (ctx->pc == 0x186024u) {
        ctx->pc = 0x186028u;
        goto label_186028;
    }
    ctx->pc = 0x186020u;
    {
        const bool branch_taken_0x186020 = (false);
        if (branch_taken_0x186020) {
            ctx->pc = 0x18600Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18600c;
        }
    }
    ctx->pc = 0x186028u;
label_186028:
    // 0x186028: 0xc061732  jal         func_185CC8
label_18602c:
    if (ctx->pc == 0x18602Cu) {
        ctx->pc = 0x18602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186028u;
        // 0x18602c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186030u;
        goto label_186030;
    }
    ctx->pc = 0x186028u;
    SET_GPR_U32(ctx, 31, 0x186030u);
    ctx->pc = 0x18602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186028u;
    // 0x18602c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CC8u, 0x186028u, 0x186030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186030u;
label_186030:
    // 0x186030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186034:
    // 0x186034: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x186034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_186038:
    // 0x186038: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x186038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18603c:
    // 0x18603c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18603cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_186040:
    // 0x186040: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x186040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_186044:
    // 0x186044: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x186044u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_186048:
    // 0x186048: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x186048u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18604c:
    // 0x18604c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x18604cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_186050:
    // 0x186050: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x186050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_186054:
    // 0x186054: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x186054u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_186058:
    // 0x186058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18605c:
    // 0x18605c: 0x3e00008  jr          $ra
label_186060:
    if (ctx->pc == 0x186060u) {
        ctx->pc = 0x186060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18605Cu;
        // 0x186060: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186064u;
        goto label_186064;
    }
    ctx->pc = 0x18605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18605Cu;
        // 0x186060: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186064u;
label_186064:
    // 0x186064: 0x0  nop
    ctx->pc = 0x186064u;
    // NOP
    ctx->pc = 0x186068u;
}
