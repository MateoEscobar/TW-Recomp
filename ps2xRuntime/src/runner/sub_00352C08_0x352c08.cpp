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

// Function: sub_00352C08
// Address: 0x352c08 - 0x352fa0
void sub_00352C08_0x352c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352C08_0x352c08");
#endif

    switch (ctx->pc) {
        case 0x352c08u: goto label_352c08;
        case 0x352c0cu: goto label_352c0c;
        case 0x352c10u: goto label_352c10;
        case 0x352c14u: goto label_352c14;
        case 0x352c18u: goto label_352c18;
        case 0x352c1cu: goto label_352c1c;
        case 0x352c20u: goto label_352c20;
        case 0x352c24u: goto label_352c24;
        case 0x352c28u: goto label_352c28;
        case 0x352c2cu: goto label_352c2c;
        case 0x352c30u: goto label_352c30;
        case 0x352c34u: goto label_352c34;
        case 0x352c38u: goto label_352c38;
        case 0x352c3cu: goto label_352c3c;
        case 0x352c40u: goto label_352c40;
        case 0x352c44u: goto label_352c44;
        case 0x352c48u: goto label_352c48;
        case 0x352c4cu: goto label_352c4c;
        case 0x352c50u: goto label_352c50;
        case 0x352c54u: goto label_352c54;
        case 0x352c58u: goto label_352c58;
        case 0x352c5cu: goto label_352c5c;
        case 0x352c60u: goto label_352c60;
        case 0x352c64u: goto label_352c64;
        case 0x352c68u: goto label_352c68;
        case 0x352c6cu: goto label_352c6c;
        case 0x352c70u: goto label_352c70;
        case 0x352c74u: goto label_352c74;
        case 0x352c78u: goto label_352c78;
        case 0x352c7cu: goto label_352c7c;
        case 0x352c80u: goto label_352c80;
        case 0x352c84u: goto label_352c84;
        case 0x352c88u: goto label_352c88;
        case 0x352c8cu: goto label_352c8c;
        case 0x352c90u: goto label_352c90;
        case 0x352c94u: goto label_352c94;
        case 0x352c98u: goto label_352c98;
        case 0x352c9cu: goto label_352c9c;
        case 0x352ca0u: goto label_352ca0;
        case 0x352ca4u: goto label_352ca4;
        case 0x352ca8u: goto label_352ca8;
        case 0x352cacu: goto label_352cac;
        case 0x352cb0u: goto label_352cb0;
        case 0x352cb4u: goto label_352cb4;
        case 0x352cb8u: goto label_352cb8;
        case 0x352cbcu: goto label_352cbc;
        case 0x352cc0u: goto label_352cc0;
        case 0x352cc4u: goto label_352cc4;
        case 0x352cc8u: goto label_352cc8;
        case 0x352cccu: goto label_352ccc;
        case 0x352cd0u: goto label_352cd0;
        case 0x352cd4u: goto label_352cd4;
        case 0x352cd8u: goto label_352cd8;
        case 0x352cdcu: goto label_352cdc;
        case 0x352ce0u: goto label_352ce0;
        case 0x352ce4u: goto label_352ce4;
        case 0x352ce8u: goto label_352ce8;
        case 0x352cecu: goto label_352cec;
        case 0x352cf0u: goto label_352cf0;
        case 0x352cf4u: goto label_352cf4;
        case 0x352cf8u: goto label_352cf8;
        case 0x352cfcu: goto label_352cfc;
        case 0x352d00u: goto label_352d00;
        case 0x352d04u: goto label_352d04;
        case 0x352d08u: goto label_352d08;
        case 0x352d0cu: goto label_352d0c;
        case 0x352d10u: goto label_352d10;
        case 0x352d14u: goto label_352d14;
        case 0x352d18u: goto label_352d18;
        case 0x352d1cu: goto label_352d1c;
        case 0x352d20u: goto label_352d20;
        case 0x352d24u: goto label_352d24;
        case 0x352d28u: goto label_352d28;
        case 0x352d2cu: goto label_352d2c;
        case 0x352d30u: goto label_352d30;
        case 0x352d34u: goto label_352d34;
        case 0x352d38u: goto label_352d38;
        case 0x352d3cu: goto label_352d3c;
        case 0x352d40u: goto label_352d40;
        case 0x352d44u: goto label_352d44;
        case 0x352d48u: goto label_352d48;
        case 0x352d4cu: goto label_352d4c;
        case 0x352d50u: goto label_352d50;
        case 0x352d54u: goto label_352d54;
        case 0x352d58u: goto label_352d58;
        case 0x352d5cu: goto label_352d5c;
        case 0x352d60u: goto label_352d60;
        case 0x352d64u: goto label_352d64;
        case 0x352d68u: goto label_352d68;
        case 0x352d6cu: goto label_352d6c;
        case 0x352d70u: goto label_352d70;
        case 0x352d74u: goto label_352d74;
        case 0x352d78u: goto label_352d78;
        case 0x352d7cu: goto label_352d7c;
        case 0x352d80u: goto label_352d80;
        case 0x352d84u: goto label_352d84;
        case 0x352d88u: goto label_352d88;
        case 0x352d8cu: goto label_352d8c;
        case 0x352d90u: goto label_352d90;
        case 0x352d94u: goto label_352d94;
        case 0x352d98u: goto label_352d98;
        case 0x352d9cu: goto label_352d9c;
        case 0x352da0u: goto label_352da0;
        case 0x352da4u: goto label_352da4;
        case 0x352da8u: goto label_352da8;
        case 0x352dacu: goto label_352dac;
        case 0x352db0u: goto label_352db0;
        case 0x352db4u: goto label_352db4;
        case 0x352db8u: goto label_352db8;
        case 0x352dbcu: goto label_352dbc;
        case 0x352dc0u: goto label_352dc0;
        case 0x352dc4u: goto label_352dc4;
        case 0x352dc8u: goto label_352dc8;
        case 0x352dccu: goto label_352dcc;
        case 0x352dd0u: goto label_352dd0;
        case 0x352dd4u: goto label_352dd4;
        case 0x352dd8u: goto label_352dd8;
        case 0x352ddcu: goto label_352ddc;
        case 0x352de0u: goto label_352de0;
        case 0x352de4u: goto label_352de4;
        case 0x352de8u: goto label_352de8;
        case 0x352decu: goto label_352dec;
        case 0x352df0u: goto label_352df0;
        case 0x352df4u: goto label_352df4;
        case 0x352df8u: goto label_352df8;
        case 0x352dfcu: goto label_352dfc;
        case 0x352e00u: goto label_352e00;
        case 0x352e04u: goto label_352e04;
        case 0x352e08u: goto label_352e08;
        case 0x352e0cu: goto label_352e0c;
        case 0x352e10u: goto label_352e10;
        case 0x352e14u: goto label_352e14;
        case 0x352e18u: goto label_352e18;
        case 0x352e1cu: goto label_352e1c;
        case 0x352e20u: goto label_352e20;
        case 0x352e24u: goto label_352e24;
        case 0x352e28u: goto label_352e28;
        case 0x352e2cu: goto label_352e2c;
        case 0x352e30u: goto label_352e30;
        case 0x352e34u: goto label_352e34;
        case 0x352e38u: goto label_352e38;
        case 0x352e3cu: goto label_352e3c;
        case 0x352e40u: goto label_352e40;
        case 0x352e44u: goto label_352e44;
        case 0x352e48u: goto label_352e48;
        case 0x352e4cu: goto label_352e4c;
        case 0x352e50u: goto label_352e50;
        case 0x352e54u: goto label_352e54;
        case 0x352e58u: goto label_352e58;
        case 0x352e5cu: goto label_352e5c;
        case 0x352e60u: goto label_352e60;
        case 0x352e64u: goto label_352e64;
        case 0x352e68u: goto label_352e68;
        case 0x352e6cu: goto label_352e6c;
        case 0x352e70u: goto label_352e70;
        case 0x352e74u: goto label_352e74;
        case 0x352e78u: goto label_352e78;
        case 0x352e7cu: goto label_352e7c;
        case 0x352e80u: goto label_352e80;
        case 0x352e84u: goto label_352e84;
        case 0x352e88u: goto label_352e88;
        case 0x352e8cu: goto label_352e8c;
        case 0x352e90u: goto label_352e90;
        case 0x352e94u: goto label_352e94;
        case 0x352e98u: goto label_352e98;
        case 0x352e9cu: goto label_352e9c;
        case 0x352ea0u: goto label_352ea0;
        case 0x352ea4u: goto label_352ea4;
        case 0x352ea8u: goto label_352ea8;
        case 0x352eacu: goto label_352eac;
        case 0x352eb0u: goto label_352eb0;
        case 0x352eb4u: goto label_352eb4;
        case 0x352eb8u: goto label_352eb8;
        case 0x352ebcu: goto label_352ebc;
        case 0x352ec0u: goto label_352ec0;
        case 0x352ec4u: goto label_352ec4;
        case 0x352ec8u: goto label_352ec8;
        case 0x352eccu: goto label_352ecc;
        case 0x352ed0u: goto label_352ed0;
        case 0x352ed4u: goto label_352ed4;
        case 0x352ed8u: goto label_352ed8;
        case 0x352edcu: goto label_352edc;
        case 0x352ee0u: goto label_352ee0;
        case 0x352ee4u: goto label_352ee4;
        case 0x352ee8u: goto label_352ee8;
        case 0x352eecu: goto label_352eec;
        case 0x352ef0u: goto label_352ef0;
        case 0x352ef4u: goto label_352ef4;
        case 0x352ef8u: goto label_352ef8;
        case 0x352efcu: goto label_352efc;
        case 0x352f00u: goto label_352f00;
        case 0x352f04u: goto label_352f04;
        case 0x352f08u: goto label_352f08;
        case 0x352f0cu: goto label_352f0c;
        case 0x352f10u: goto label_352f10;
        case 0x352f14u: goto label_352f14;
        case 0x352f18u: goto label_352f18;
        case 0x352f1cu: goto label_352f1c;
        case 0x352f20u: goto label_352f20;
        case 0x352f24u: goto label_352f24;
        case 0x352f28u: goto label_352f28;
        case 0x352f2cu: goto label_352f2c;
        case 0x352f30u: goto label_352f30;
        case 0x352f34u: goto label_352f34;
        case 0x352f38u: goto label_352f38;
        case 0x352f3cu: goto label_352f3c;
        case 0x352f40u: goto label_352f40;
        case 0x352f44u: goto label_352f44;
        case 0x352f48u: goto label_352f48;
        case 0x352f4cu: goto label_352f4c;
        case 0x352f50u: goto label_352f50;
        case 0x352f54u: goto label_352f54;
        case 0x352f58u: goto label_352f58;
        case 0x352f5cu: goto label_352f5c;
        case 0x352f60u: goto label_352f60;
        case 0x352f64u: goto label_352f64;
        case 0x352f68u: goto label_352f68;
        case 0x352f6cu: goto label_352f6c;
        case 0x352f70u: goto label_352f70;
        case 0x352f74u: goto label_352f74;
        case 0x352f78u: goto label_352f78;
        case 0x352f7cu: goto label_352f7c;
        case 0x352f80u: goto label_352f80;
        case 0x352f84u: goto label_352f84;
        case 0x352f88u: goto label_352f88;
        case 0x352f8cu: goto label_352f8c;
        case 0x352f90u: goto label_352f90;
        case 0x352f94u: goto label_352f94;
        case 0x352f98u: goto label_352f98;
        case 0x352f9cu: goto label_352f9c;
        default: break;
    }

    ctx->pc = 0x352c08u;

label_352c08:
    // 0x352c08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x352c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_352c0c:
    // 0x352c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352c10:
    // 0x352c10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x352c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_352c14:
    // 0x352c14: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x352c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_352c18:
    // 0x352c18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x352c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_352c1c:
    // 0x352c1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x352c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_352c20:
    // 0x352c20: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x352c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_352c24:
    // 0x352c24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x352c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_352c28:
    // 0x352c28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x352c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_352c2c:
    // 0x352c2c: 0xc10c1fa  jal         func_4307E8
label_352c30:
    if (ctx->pc == 0x352C30u) {
        ctx->pc = 0x352C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C2Cu;
        // 0x352c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352C34u;
        goto label_352c34;
    }
    ctx->pc = 0x352C2Cu;
    SET_GPR_U32(ctx, 31, 0x352C34u);
    ctx->pc = 0x352C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352C2Cu;
    // 0x352c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x352C2Cu, 0x352C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C34u;
label_352c34:
    // 0x352c34: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x352c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_352c38:
    // 0x352c38: 0x41343  sra         $v0, $a0, 13
    ctx->pc = 0x352c38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 13));
label_352c3c:
    // 0x352c3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x352c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_352c40:
    // 0x352c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_352c44:
    if (ctx->pc == 0x352C44u) {
        ctx->pc = 0x352C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C40u;
        // 0x352c44: 0x2402dfff  addiu       $v0, $zero, -0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352C48u;
        goto label_352c48;
    }
    ctx->pc = 0x352C40u;
    {
        const bool branch_taken_0x352c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C40u;
        // 0x352c44: 0x2402dfff  addiu       $v0, $zero, -0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c40) {
            ctx->pc = 0x352C58u;
            goto label_352c58;
        }
    }
    ctx->pc = 0x352C48u;
label_352c48:
    // 0x352c48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x352c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352c4c:
    // 0x352c4c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x352c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_352c50:
    // 0x352c50: 0xa6430030  sh          $v1, 0x30($s2)
    ctx->pc = 0x352c50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 3));
label_352c54:
    // 0x352c54: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x352c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_352c58:
    // 0x352c58: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x352c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352c5c:
    // 0x352c5c: 0x441004c  bgez        $v0, . + 4 + (0x4C << 2)
label_352c60:
    if (ctx->pc == 0x352C60u) {
        ctx->pc = 0x352C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C5Cu;
        // 0x352c60: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352C64u;
        goto label_352c64;
    }
    ctx->pc = 0x352C5Cu;
    {
        const bool branch_taken_0x352c5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x352C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C5Cu;
        // 0x352c60: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c5c) {
            ctx->pc = 0x352D90u;
            goto label_352d90;
        }
    }
    ctx->pc = 0x352C64u;
label_352c64:
    // 0x352c64: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x352c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_352c68:
    // 0x352c68: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x352c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_352c6c:
    // 0x352c6c: 0xa6400030  sh          $zero, 0x30($s2)
    ctx->pc = 0x352c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 0));
label_352c70:
    // 0x352c70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352c74:
    // 0x352c74: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x352c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_352c78:
    // 0x352c78: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x352c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_352c7c:
    // 0x352c7c: 0xa2420032  sb          $v0, 0x32($s2)
    ctx->pc = 0x352c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 2));
label_352c80:
    // 0x352c80: 0xc10c4de  jal         func_431378
label_352c84:
    if (ctx->pc == 0x352C84u) {
        ctx->pc = 0x352C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C80u;
        // 0x352c84: 0x2653000c  addiu       $s3, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352C88u;
        goto label_352c88;
    }
    ctx->pc = 0x352C80u;
    SET_GPR_U32(ctx, 31, 0x352C88u);
    ctx->pc = 0x352C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352C80u;
    // 0x352c84: 0x2653000c  addiu       $s3, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x352C80u, 0x352C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C88u;
label_352c88:
    // 0x352c88: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x352c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_352c8c:
    // 0x352c8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352c90:
    // 0x352c90: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x352c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352c94:
    // 0x352c94: 0xc10c3fe  jal         func_430FF8
label_352c98:
    if (ctx->pc == 0x352C98u) {
        ctx->pc = 0x352C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C94u;
        // 0x352c98: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352C9Cu;
        goto label_352c9c;
    }
    ctx->pc = 0x352C94u;
    SET_GPR_U32(ctx, 31, 0x352C9Cu);
    ctx->pc = 0x352C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352C94u;
    // 0x352c98: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430FF8u, 0x352C94u, 0x352C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C9Cu;
label_352c9c:
    // 0x352c9c: 0x86430030  lh          $v1, 0x30($s2)
    ctx->pc = 0x352c9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352ca0:
    // 0x352ca0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x352ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352ca4:
    // 0x352ca4: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x352ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_352ca8:
    // 0x352ca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x352ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352cac:
    // 0x352cac: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_352cb0:
    if (ctx->pc == 0x352CB0u) {
        ctx->pc = 0x352CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352CACu;
        // 0x352cb0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352CB4u;
        goto label_352cb4;
    }
    ctx->pc = 0x352CACu;
    {
        const bool branch_taken_0x352cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352CACu;
        // 0x352cb0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352cac) {
            ctx->pc = 0x352D54u;
            goto label_352d54;
        }
    }
    ctx->pc = 0x352CB4u;
label_352cb4:
    // 0x352cb4: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x352cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_352cb8:
    // 0x352cb8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x352cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_352cbc:
    // 0x352cbc: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x352cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_352cc0:
    // 0x352cc0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x352cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352cc4:
    // 0x352cc4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x352cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_352cc8:
    // 0x352cc8: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x352cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_352ccc:
    // 0x352ccc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x352cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_352cd0:
    // 0x352cd0: 0x40f809  jalr        $v0
label_352cd4:
    if (ctx->pc == 0x352CD4u) {
        ctx->pc = 0x352CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352CD0u;
        // 0x352cd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352CD8u;
        goto label_352cd8;
    }
    ctx->pc = 0x352CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352CD8u);
        ctx->pc = 0x352CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352CD0u;
        // 0x352cd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352CD0u, 0x352CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352CD8u;
label_352cd8:
    // 0x352cd8: 0x8e0927e4  lw          $t1, 0x27E4($s0)
    ctx->pc = 0x352cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_352cdc:
    // 0x352cdc: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x352cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_352ce0:
    // 0x352ce0: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x352ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352ce4:
    // 0x352ce4: 0x24c689d0  addiu       $a2, $a2, -0x7630
    ctx->pc = 0x352ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937040));
label_352ce8:
    // 0x352ce8: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x352ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_352cec:
    // 0x352cec: 0x2407027d  addiu       $a3, $zero, 0x27D
    ctx->pc = 0x352cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
label_352cf0:
    // 0x352cf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352cf4:
    // 0x352cf4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x352cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_352cf8:
    // 0x352cf8: 0x85040058  lh          $a0, 0x58($t0)
    ctx->pc = 0x352cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 88)));
label_352cfc:
    // 0x352cfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x352cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352d00:
    // 0x352d00: 0x8d03005c  lw          $v1, 0x5C($t0)
    ctx->pc = 0x352d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
label_352d04:
    // 0x352d04: 0x60f809  jalr        $v1
label_352d08:
    if (ctx->pc == 0x352D08u) {
        ctx->pc = 0x352D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D04u;
        // 0x352d08: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352D0Cu;
        goto label_352d0c;
    }
    ctx->pc = 0x352D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x352D0Cu);
        ctx->pc = 0x352D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D04u;
        // 0x352d08: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352D04u, 0x352D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352D0Cu;
label_352d0c:
    // 0x352d0c: 0x8e0727e4  lw          $a3, 0x27E4($s0)
    ctx->pc = 0x352d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_352d10:
    // 0x352d10: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x352d10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352d14:
    // 0x352d14: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x352d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_352d18:
    // 0x352d18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352d1c:
    // 0x352d1c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x352d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_352d20:
    // 0x352d20: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x352d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_352d24:
    // 0x352d24: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x352d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_352d28:
    // 0x352d28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x352d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352d2c:
    // 0x352d2c: 0xc0f809  jalr        $a2
label_352d30:
    if (ctx->pc == 0x352D30u) {
        ctx->pc = 0x352D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D2Cu;
        // 0x352d30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352D34u;
        goto label_352d34;
    }
    ctx->pc = 0x352D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x352D34u);
        ctx->pc = 0x352D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D2Cu;
        // 0x352d30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352D2Cu, 0x352D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352D34u;
label_352d34:
    // 0x352d34: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x352d34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352d38:
    // 0x352d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352d3c:
    // 0x352d3c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x352d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_352d40:
    // 0x352d40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x352d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_352d44:
    // 0x352d44: 0x86430030  lh          $v1, 0x30($s2)
    ctx->pc = 0x352d44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352d48:
    // 0x352d48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352d4c:
    // 0x352d4c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x352d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_352d50:
    // 0x352d50: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x352d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_352d54:
    // 0x352d54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352d58:
    // 0x352d58: 0xc0d4dde  jal         func_353778
label_352d5c:
    if (ctx->pc == 0x352D5Cu) {
        ctx->pc = 0x352D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D58u;
        // 0x352d5c: 0x26500014  addiu       $s0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352D60u;
        goto label_352d60;
    }
    ctx->pc = 0x352D58u;
    SET_GPR_U32(ctx, 31, 0x352D60u);
    ctx->pc = 0x352D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352D58u;
    // 0x352d5c: 0x26500014  addiu       $s0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353778u, 0x352D58u, 0x352D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352D60u;
label_352d60:
    // 0x352d60: 0x86430030  lh          $v1, 0x30($s2)
    ctx->pc = 0x352d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352d64:
    // 0x352d64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352d68:
    // 0x352d68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x352d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_352d6c:
    // 0x352d6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x352d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_352d70:
    // 0x352d70: 0x86440030  lh          $a0, 0x30($s2)
    ctx->pc = 0x352d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352d74:
    // 0x352d74: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x352d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_352d78:
    // 0x352d78: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x352d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_352d7c:
    // 0x352d7c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x352d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_352d80:
    // 0x352d80: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_352d84:
    if (ctx->pc == 0x352D84u) {
        ctx->pc = 0x352D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D80u;
        // 0x352d84: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352D88u;
        goto label_352d88;
    }
    ctx->pc = 0x352D80u;
    {
        const bool branch_taken_0x352d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D80u;
        // 0x352d84: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352d80) {
            ctx->pc = 0x352EF8u;
            goto label_352ef8;
        }
    }
    ctx->pc = 0x352D88u;
label_352d88:
    // 0x352d88: 0x1000005f  b           . + 4 + (0x5F << 2)
label_352d8c:
    if (ctx->pc == 0x352D8Cu) {
        ctx->pc = 0x352D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D88u;
        // 0x352d8c: 0x8e45002c  lw          $a1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352D90u;
        goto label_352d90;
    }
    ctx->pc = 0x352D88u;
    {
        const bool branch_taken_0x352d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352D88u;
        // 0x352d8c: 0x8e45002c  lw          $a1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352d88) {
            ctx->pc = 0x352F08u;
            goto label_352f08;
        }
    }
    ctx->pc = 0x352D90u;
label_352d90:
    // 0x352d90: 0x2653000c  addiu       $s3, $s2, 0xC
    ctx->pc = 0x352d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_352d94:
    // 0x352d94: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x352d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_352d98:
    // 0x352d98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x352d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352d9c:
    // 0x352d9c: 0x80430014  lb          $v1, 0x14($v0)
    ctx->pc = 0x352d9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_352da0:
    // 0x352da0: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
label_352da4:
    if (ctx->pc == 0x352DA4u) {
        ctx->pc = 0x352DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352DA0u;
        // 0x352da4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352DA8u;
        goto label_352da8;
    }
    ctx->pc = 0x352DA0u;
    {
        const bool branch_taken_0x352da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352DA0u;
        // 0x352da4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352da0) {
            ctx->pc = 0x352F64u;
            goto label_352f64;
        }
    }
    ctx->pc = 0x352DA8u;
label_352da8:
    // 0x352da8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x352da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_352dac:
    // 0x352dac: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x352dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_352db0:
    // 0x352db0: 0xc10c4de  jal         func_431378
label_352db4:
    if (ctx->pc == 0x352DB4u) {
        ctx->pc = 0x352DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352DB0u;
        // 0x352db4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352DB8u;
        goto label_352db8;
    }
    ctx->pc = 0x352DB0u;
    SET_GPR_U32(ctx, 31, 0x352DB8u);
    ctx->pc = 0x352DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352DB0u;
    // 0x352db4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x352DB0u, 0x352DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352DB8u;
label_352db8:
    // 0x352db8: 0x86430030  lh          $v1, 0x30($s2)
    ctx->pc = 0x352db8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352dbc:
    // 0x352dbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352dc0:
    // 0x352dc0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x352dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352dc4:
    // 0x352dc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352dc8:
    // 0x352dc8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x352dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_352dcc:
    // 0x352dcc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x352dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352dd0:
    // 0x352dd0: 0xc10c3fe  jal         func_430FF8
label_352dd4:
    if (ctx->pc == 0x352DD4u) {
        ctx->pc = 0x352DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352DD0u;
        // 0x352dd4: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352DD8u;
        goto label_352dd8;
    }
    ctx->pc = 0x352DD0u;
    SET_GPR_U32(ctx, 31, 0x352DD8u);
    ctx->pc = 0x352DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352DD0u;
    // 0x352dd4: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430FF8u, 0x352DD0u, 0x352DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352DD8u;
label_352dd8:
    // 0x352dd8: 0x86430030  lh          $v1, 0x30($s2)
    ctx->pc = 0x352dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352ddc:
    // 0x352ddc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352de0:
    // 0x352de0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x352de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_352de4:
    // 0x352de4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x352de4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352de8:
    // 0x352de8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x352de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_352dec:
    // 0x352dec: 0xc10c3ac  jal         func_430EB0
label_352df0:
    if (ctx->pc == 0x352DF0u) {
        ctx->pc = 0x352DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352DECu;
        // 0x352df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352DF4u;
        goto label_352df4;
    }
    ctx->pc = 0x352DECu;
    SET_GPR_U32(ctx, 31, 0x352DF4u);
    ctx->pc = 0x352DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352DECu;
    // 0x352df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x352DECu, 0x352DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352DF4u;
label_352df4:
    // 0x352df4: 0x96430030  lhu         $v1, 0x30($s2)
    ctx->pc = 0x352df4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352df8:
    // 0x352df8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x352df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_352dfc:
    // 0x352dfc: 0x9044ffff  lbu         $a0, -0x1($v0)
    ctx->pc = 0x352dfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_352e00:
    // 0x352e00: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x352e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_352e04:
    // 0x352e04: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x352e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_352e08:
    // 0x352e08: 0xa2440032  sb          $a0, 0x32($s2)
    ctx->pc = 0x352e08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 4));
label_352e0c:
    // 0x352e0c: 0x22383  sra         $a0, $v0, 14
    ctx->pc = 0x352e0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 14));
label_352e10:
    // 0x352e10: 0xa6430030  sh          $v1, 0x30($s2)
    ctx->pc = 0x352e10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 3));
label_352e14:
    // 0x352e14: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x352e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_352e18:
    // 0x352e18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x352e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352e1c:
    // 0x352e1c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_352e20:
    if (ctx->pc == 0x352E20u) {
        ctx->pc = 0x352E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E1Cu;
        // 0x352e20: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352E24u;
        goto label_352e24;
    }
    ctx->pc = 0x352E1Cu;
    {
        const bool branch_taken_0x352e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E1Cu;
        // 0x352e20: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e1c) {
            ctx->pc = 0x352EC4u;
            goto label_352ec4;
        }
    }
    ctx->pc = 0x352E24u;
label_352e24:
    // 0x352e24: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x352e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_352e28:
    // 0x352e28: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x352e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_352e2c:
    // 0x352e2c: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x352e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_352e30:
    // 0x352e30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x352e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352e34:
    // 0x352e34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x352e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_352e38:
    // 0x352e38: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x352e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_352e3c:
    // 0x352e3c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x352e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_352e40:
    // 0x352e40: 0x40f809  jalr        $v0
label_352e44:
    if (ctx->pc == 0x352E44u) {
        ctx->pc = 0x352E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E40u;
        // 0x352e44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352E48u;
        goto label_352e48;
    }
    ctx->pc = 0x352E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352E48u);
        ctx->pc = 0x352E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E40u;
        // 0x352e44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352E40u, 0x352E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352E48u;
label_352e48:
    // 0x352e48: 0x8e0927e4  lw          $t1, 0x27E4($s0)
    ctx->pc = 0x352e48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_352e4c:
    // 0x352e4c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x352e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_352e50:
    // 0x352e50: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x352e50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352e54:
    // 0x352e54: 0x24c689d0  addiu       $a2, $a2, -0x7630
    ctx->pc = 0x352e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937040));
label_352e58:
    // 0x352e58: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x352e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_352e5c:
    // 0x352e5c: 0x240702a8  addiu       $a3, $zero, 0x2A8
    ctx->pc = 0x352e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
label_352e60:
    // 0x352e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352e64:
    // 0x352e64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x352e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_352e68:
    // 0x352e68: 0x85040058  lh          $a0, 0x58($t0)
    ctx->pc = 0x352e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 88)));
label_352e6c:
    // 0x352e6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x352e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352e70:
    // 0x352e70: 0x8d03005c  lw          $v1, 0x5C($t0)
    ctx->pc = 0x352e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
label_352e74:
    // 0x352e74: 0x60f809  jalr        $v1
label_352e78:
    if (ctx->pc == 0x352E78u) {
        ctx->pc = 0x352E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E74u;
        // 0x352e78: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352E7Cu;
        goto label_352e7c;
    }
    ctx->pc = 0x352E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x352E7Cu);
        ctx->pc = 0x352E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E74u;
        // 0x352e78: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352E74u, 0x352E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352E7Cu;
label_352e7c:
    // 0x352e7c: 0x8e0727e4  lw          $a3, 0x27E4($s0)
    ctx->pc = 0x352e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_352e80:
    // 0x352e80: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x352e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352e84:
    // 0x352e84: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x352e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_352e88:
    // 0x352e88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352e8c:
    // 0x352e8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x352e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_352e90:
    // 0x352e90: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x352e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_352e94:
    // 0x352e94: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x352e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_352e98:
    // 0x352e98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x352e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352e9c:
    // 0x352e9c: 0xc0f809  jalr        $a2
label_352ea0:
    if (ctx->pc == 0x352EA0u) {
        ctx->pc = 0x352EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E9Cu;
        // 0x352ea0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352EA4u;
        goto label_352ea4;
    }
    ctx->pc = 0x352E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x352EA4u);
        ctx->pc = 0x352EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E9Cu;
        // 0x352ea0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352E9Cu, 0x352EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352EA4u;
label_352ea4:
    // 0x352ea4: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x352ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352ea8:
    // 0x352ea8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352eac:
    // 0x352eac: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x352eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_352eb0:
    // 0x352eb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x352eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_352eb4:
    // 0x352eb4: 0x86430030  lh          $v1, 0x30($s2)
    ctx->pc = 0x352eb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352eb8:
    // 0x352eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352ebc:
    // 0x352ebc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x352ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_352ec0:
    // 0x352ec0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x352ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_352ec4:
    // 0x352ec4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352ec8:
    // 0x352ec8: 0xc0d4dde  jal         func_353778
label_352ecc:
    if (ctx->pc == 0x352ECCu) {
        ctx->pc = 0x352ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EC8u;
        // 0x352ecc: 0x26500014  addiu       $s0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352ED0u;
        goto label_352ed0;
    }
    ctx->pc = 0x352EC8u;
    SET_GPR_U32(ctx, 31, 0x352ED0u);
    ctx->pc = 0x352ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352EC8u;
    // 0x352ecc: 0x26500014  addiu       $s0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353778u, 0x352EC8u, 0x352ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352ED0u;
label_352ed0:
    // 0x352ed0: 0x86430030  lh          $v1, 0x30($s2)
    ctx->pc = 0x352ed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352ed4:
    // 0x352ed4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352ed8:
    // 0x352ed8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x352ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_352edc:
    // 0x352edc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x352edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_352ee0:
    // 0x352ee0: 0x86440030  lh          $a0, 0x30($s2)
    ctx->pc = 0x352ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352ee4:
    // 0x352ee4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x352ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_352ee8:
    // 0x352ee8: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x352ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_352eec:
    // 0x352eec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x352eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_352ef0:
    // 0x352ef0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_352ef4:
    if (ctx->pc == 0x352EF4u) {
        ctx->pc = 0x352EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EF0u;
        // 0x352ef4: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352EF8u;
        goto label_352ef8;
    }
    ctx->pc = 0x352EF0u;
    {
        const bool branch_taken_0x352ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EF0u;
        // 0x352ef4: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ef0) {
            ctx->pc = 0x352F04u;
            goto label_352f04;
        }
    }
    ctx->pc = 0x352EF8u;
label_352ef8:
    // 0x352ef8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352efc:
    // 0x352efc: 0x10000021  b           . + 4 + (0x21 << 2)
label_352f00:
    if (ctx->pc == 0x352F00u) {
        ctx->pc = 0x352F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EFCu;
        // 0x352f00: 0xa6420030  sh          $v0, 0x30($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352F04u;
        goto label_352f04;
    }
    ctx->pc = 0x352EFCu;
    {
        const bool branch_taken_0x352efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352EFCu;
        // 0x352f00: 0xa6420030  sh          $v0, 0x30($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352efc) {
            ctx->pc = 0x352F84u;
            goto label_352f84;
        }
    }
    ctx->pc = 0x352F04u;
label_352f04:
    // 0x352f04: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x352f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_352f08:
    // 0x352f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352f0c:
    // 0x352f0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x352f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352f10:
    // 0x352f10: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x352f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_352f14:
    // 0x352f14: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x352f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_352f18:
    // 0x352f18: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x352f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_352f1c:
    // 0x352f1c: 0x8cc4cd4c  lw          $a0, -0x32B4($a2)
    ctx->pc = 0x352f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954316)));
label_352f20:
    // 0x352f20: 0xae45002c  sw          $a1, 0x2C($s2)
    ctx->pc = 0x352f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 5));
label_352f24:
    // 0x352f24: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x352f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_352f28:
    // 0x352f28: 0x24c62a48  addiu       $a2, $a2, 0x2A48
    ctx->pc = 0x352f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10824));
label_352f2c:
    // 0x352f2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x352f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352f30:
    // 0x352f30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x352f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_352f34:
    // 0x352f34: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x352f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_352f38:
    // 0x352f38: 0xc0621b6  jal         func_1886D8
label_352f3c:
    if (ctx->pc == 0x352F3Cu) {
        ctx->pc = 0x352F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F38u;
        // 0x352f3c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352F40u;
        goto label_352f40;
    }
    ctx->pc = 0x352F38u;
    SET_GPR_U32(ctx, 31, 0x352F40u);
    ctx->pc = 0x352F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F38u;
    // 0x352f3c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1886D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1886D8u, 0x352F38u, 0x352F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F40u;
label_352f40:
    // 0x352f40: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_352f44:
    if (ctx->pc == 0x352F44u) {
        ctx->pc = 0x352F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F40u;
        // 0x352f44: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352F48u;
        goto label_352f48;
    }
    ctx->pc = 0x352F40u;
    {
        const bool branch_taken_0x352f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352f40) {
            ctx->pc = 0x352F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352F40u;
            // 0x352f44: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352F88u;
            goto label_352f88;
        }
    }
    ctx->pc = 0x352F48u;
label_352f48:
    // 0x352f48: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x352f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_352f4c:
    // 0x352f4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x352f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352f50:
    // 0x352f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_352f54:
    // 0x352f54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x352f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_352f58:
    // 0x352f58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x352f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_352f5c:
    // 0x352f5c: 0x10000009  b           . + 4 + (0x9 << 2)
label_352f60:
    if (ctx->pc == 0x352F60u) {
        ctx->pc = 0x352F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F5Cu;
        // 0x352f60: 0xa6430030  sh          $v1, 0x30($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352F64u;
        goto label_352f64;
    }
    ctx->pc = 0x352F5Cu;
    {
        const bool branch_taken_0x352f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F5Cu;
        // 0x352f60: 0xa6430030  sh          $v1, 0x30($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352f5c) {
            ctx->pc = 0x352F84u;
            goto label_352f84;
        }
    }
    ctx->pc = 0x352F64u;
label_352f64:
    // 0x352f64: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x352f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_352f68:
    // 0x352f68: 0xc10c3ac  jal         func_430EB0
label_352f6c:
    if (ctx->pc == 0x352F6Cu) {
        ctx->pc = 0x352F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F68u;
        // 0x352f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352F70u;
        goto label_352f70;
    }
    ctx->pc = 0x352F68u;
    SET_GPR_U32(ctx, 31, 0x352F70u);
    ctx->pc = 0x352F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F68u;
    // 0x352f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x352F68u, 0x352F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F70u;
label_352f70:
    // 0x352f70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x352f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_352f74:
    // 0x352f74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x352f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352f78:
    // 0x352f78: 0x9044ffff  lbu         $a0, -0x1($v0)
    ctx->pc = 0x352f78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_352f7c:
    // 0x352f7c: 0xa6430030  sh          $v1, 0x30($s2)
    ctx->pc = 0x352f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 3));
label_352f80:
    // 0x352f80: 0xa2440032  sb          $a0, 0x32($s2)
    ctx->pc = 0x352f80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 4));
label_352f84:
    // 0x352f84: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x352f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_352f88:
    // 0x352f88: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x352f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_352f8c:
    // 0x352f8c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x352f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_352f90:
    // 0x352f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x352f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_352f94:
    // 0x352f94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x352f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_352f98:
    // 0x352f98: 0x3e00008  jr          $ra
label_352f9c:
    if (ctx->pc == 0x352F9Cu) {
        ctx->pc = 0x352F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F98u;
        // 0x352f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352FA0u;
        goto label_fallthrough_0x352f98;
    }
    ctx->pc = 0x352F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F98u;
        // 0x352f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352f98:
    ctx->pc = 0x352FA0u;
}
