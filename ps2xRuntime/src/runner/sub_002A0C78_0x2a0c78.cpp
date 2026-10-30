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

// Function: sub_002A0C78
// Address: 0x2a0c78 - 0x2a0fb8
void sub_002A0C78_0x2a0c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0C78_0x2a0c78");
#endif

    switch (ctx->pc) {
        case 0x2a0c78u: goto label_2a0c78;
        case 0x2a0c7cu: goto label_2a0c7c;
        case 0x2a0c80u: goto label_2a0c80;
        case 0x2a0c84u: goto label_2a0c84;
        case 0x2a0c88u: goto label_2a0c88;
        case 0x2a0c8cu: goto label_2a0c8c;
        case 0x2a0c90u: goto label_2a0c90;
        case 0x2a0c94u: goto label_2a0c94;
        case 0x2a0c98u: goto label_2a0c98;
        case 0x2a0c9cu: goto label_2a0c9c;
        case 0x2a0ca0u: goto label_2a0ca0;
        case 0x2a0ca4u: goto label_2a0ca4;
        case 0x2a0ca8u: goto label_2a0ca8;
        case 0x2a0cacu: goto label_2a0cac;
        case 0x2a0cb0u: goto label_2a0cb0;
        case 0x2a0cb4u: goto label_2a0cb4;
        case 0x2a0cb8u: goto label_2a0cb8;
        case 0x2a0cbcu: goto label_2a0cbc;
        case 0x2a0cc0u: goto label_2a0cc0;
        case 0x2a0cc4u: goto label_2a0cc4;
        case 0x2a0cc8u: goto label_2a0cc8;
        case 0x2a0cccu: goto label_2a0ccc;
        case 0x2a0cd0u: goto label_2a0cd0;
        case 0x2a0cd4u: goto label_2a0cd4;
        case 0x2a0cd8u: goto label_2a0cd8;
        case 0x2a0cdcu: goto label_2a0cdc;
        case 0x2a0ce0u: goto label_2a0ce0;
        case 0x2a0ce4u: goto label_2a0ce4;
        case 0x2a0ce8u: goto label_2a0ce8;
        case 0x2a0cecu: goto label_2a0cec;
        case 0x2a0cf0u: goto label_2a0cf0;
        case 0x2a0cf4u: goto label_2a0cf4;
        case 0x2a0cf8u: goto label_2a0cf8;
        case 0x2a0cfcu: goto label_2a0cfc;
        case 0x2a0d00u: goto label_2a0d00;
        case 0x2a0d04u: goto label_2a0d04;
        case 0x2a0d08u: goto label_2a0d08;
        case 0x2a0d0cu: goto label_2a0d0c;
        case 0x2a0d10u: goto label_2a0d10;
        case 0x2a0d14u: goto label_2a0d14;
        case 0x2a0d18u: goto label_2a0d18;
        case 0x2a0d1cu: goto label_2a0d1c;
        case 0x2a0d20u: goto label_2a0d20;
        case 0x2a0d24u: goto label_2a0d24;
        case 0x2a0d28u: goto label_2a0d28;
        case 0x2a0d2cu: goto label_2a0d2c;
        case 0x2a0d30u: goto label_2a0d30;
        case 0x2a0d34u: goto label_2a0d34;
        case 0x2a0d38u: goto label_2a0d38;
        case 0x2a0d3cu: goto label_2a0d3c;
        case 0x2a0d40u: goto label_2a0d40;
        case 0x2a0d44u: goto label_2a0d44;
        case 0x2a0d48u: goto label_2a0d48;
        case 0x2a0d4cu: goto label_2a0d4c;
        case 0x2a0d50u: goto label_2a0d50;
        case 0x2a0d54u: goto label_2a0d54;
        case 0x2a0d58u: goto label_2a0d58;
        case 0x2a0d5cu: goto label_2a0d5c;
        case 0x2a0d60u: goto label_2a0d60;
        case 0x2a0d64u: goto label_2a0d64;
        case 0x2a0d68u: goto label_2a0d68;
        case 0x2a0d6cu: goto label_2a0d6c;
        case 0x2a0d70u: goto label_2a0d70;
        case 0x2a0d74u: goto label_2a0d74;
        case 0x2a0d78u: goto label_2a0d78;
        case 0x2a0d7cu: goto label_2a0d7c;
        case 0x2a0d80u: goto label_2a0d80;
        case 0x2a0d84u: goto label_2a0d84;
        case 0x2a0d88u: goto label_2a0d88;
        case 0x2a0d8cu: goto label_2a0d8c;
        case 0x2a0d90u: goto label_2a0d90;
        case 0x2a0d94u: goto label_2a0d94;
        case 0x2a0d98u: goto label_2a0d98;
        case 0x2a0d9cu: goto label_2a0d9c;
        case 0x2a0da0u: goto label_2a0da0;
        case 0x2a0da4u: goto label_2a0da4;
        case 0x2a0da8u: goto label_2a0da8;
        case 0x2a0dacu: goto label_2a0dac;
        case 0x2a0db0u: goto label_2a0db0;
        case 0x2a0db4u: goto label_2a0db4;
        case 0x2a0db8u: goto label_2a0db8;
        case 0x2a0dbcu: goto label_2a0dbc;
        case 0x2a0dc0u: goto label_2a0dc0;
        case 0x2a0dc4u: goto label_2a0dc4;
        case 0x2a0dc8u: goto label_2a0dc8;
        case 0x2a0dccu: goto label_2a0dcc;
        case 0x2a0dd0u: goto label_2a0dd0;
        case 0x2a0dd4u: goto label_2a0dd4;
        case 0x2a0dd8u: goto label_2a0dd8;
        case 0x2a0ddcu: goto label_2a0ddc;
        case 0x2a0de0u: goto label_2a0de0;
        case 0x2a0de4u: goto label_2a0de4;
        case 0x2a0de8u: goto label_2a0de8;
        case 0x2a0decu: goto label_2a0dec;
        case 0x2a0df0u: goto label_2a0df0;
        case 0x2a0df4u: goto label_2a0df4;
        case 0x2a0df8u: goto label_2a0df8;
        case 0x2a0dfcu: goto label_2a0dfc;
        case 0x2a0e00u: goto label_2a0e00;
        case 0x2a0e04u: goto label_2a0e04;
        case 0x2a0e08u: goto label_2a0e08;
        case 0x2a0e0cu: goto label_2a0e0c;
        case 0x2a0e10u: goto label_2a0e10;
        case 0x2a0e14u: goto label_2a0e14;
        case 0x2a0e18u: goto label_2a0e18;
        case 0x2a0e1cu: goto label_2a0e1c;
        case 0x2a0e20u: goto label_2a0e20;
        case 0x2a0e24u: goto label_2a0e24;
        case 0x2a0e28u: goto label_2a0e28;
        case 0x2a0e2cu: goto label_2a0e2c;
        case 0x2a0e30u: goto label_2a0e30;
        case 0x2a0e34u: goto label_2a0e34;
        case 0x2a0e38u: goto label_2a0e38;
        case 0x2a0e3cu: goto label_2a0e3c;
        case 0x2a0e40u: goto label_2a0e40;
        case 0x2a0e44u: goto label_2a0e44;
        case 0x2a0e48u: goto label_2a0e48;
        case 0x2a0e4cu: goto label_2a0e4c;
        case 0x2a0e50u: goto label_2a0e50;
        case 0x2a0e54u: goto label_2a0e54;
        case 0x2a0e58u: goto label_2a0e58;
        case 0x2a0e5cu: goto label_2a0e5c;
        case 0x2a0e60u: goto label_2a0e60;
        case 0x2a0e64u: goto label_2a0e64;
        case 0x2a0e68u: goto label_2a0e68;
        case 0x2a0e6cu: goto label_2a0e6c;
        case 0x2a0e70u: goto label_2a0e70;
        case 0x2a0e74u: goto label_2a0e74;
        case 0x2a0e78u: goto label_2a0e78;
        case 0x2a0e7cu: goto label_2a0e7c;
        case 0x2a0e80u: goto label_2a0e80;
        case 0x2a0e84u: goto label_2a0e84;
        case 0x2a0e88u: goto label_2a0e88;
        case 0x2a0e8cu: goto label_2a0e8c;
        case 0x2a0e90u: goto label_2a0e90;
        case 0x2a0e94u: goto label_2a0e94;
        case 0x2a0e98u: goto label_2a0e98;
        case 0x2a0e9cu: goto label_2a0e9c;
        case 0x2a0ea0u: goto label_2a0ea0;
        case 0x2a0ea4u: goto label_2a0ea4;
        case 0x2a0ea8u: goto label_2a0ea8;
        case 0x2a0eacu: goto label_2a0eac;
        case 0x2a0eb0u: goto label_2a0eb0;
        case 0x2a0eb4u: goto label_2a0eb4;
        case 0x2a0eb8u: goto label_2a0eb8;
        case 0x2a0ebcu: goto label_2a0ebc;
        case 0x2a0ec0u: goto label_2a0ec0;
        case 0x2a0ec4u: goto label_2a0ec4;
        case 0x2a0ec8u: goto label_2a0ec8;
        case 0x2a0eccu: goto label_2a0ecc;
        case 0x2a0ed0u: goto label_2a0ed0;
        case 0x2a0ed4u: goto label_2a0ed4;
        case 0x2a0ed8u: goto label_2a0ed8;
        case 0x2a0edcu: goto label_2a0edc;
        case 0x2a0ee0u: goto label_2a0ee0;
        case 0x2a0ee4u: goto label_2a0ee4;
        case 0x2a0ee8u: goto label_2a0ee8;
        case 0x2a0eecu: goto label_2a0eec;
        case 0x2a0ef0u: goto label_2a0ef0;
        case 0x2a0ef4u: goto label_2a0ef4;
        case 0x2a0ef8u: goto label_2a0ef8;
        case 0x2a0efcu: goto label_2a0efc;
        case 0x2a0f00u: goto label_2a0f00;
        case 0x2a0f04u: goto label_2a0f04;
        case 0x2a0f08u: goto label_2a0f08;
        case 0x2a0f0cu: goto label_2a0f0c;
        case 0x2a0f10u: goto label_2a0f10;
        case 0x2a0f14u: goto label_2a0f14;
        case 0x2a0f18u: goto label_2a0f18;
        case 0x2a0f1cu: goto label_2a0f1c;
        case 0x2a0f20u: goto label_2a0f20;
        case 0x2a0f24u: goto label_2a0f24;
        case 0x2a0f28u: goto label_2a0f28;
        case 0x2a0f2cu: goto label_2a0f2c;
        case 0x2a0f30u: goto label_2a0f30;
        case 0x2a0f34u: goto label_2a0f34;
        case 0x2a0f38u: goto label_2a0f38;
        case 0x2a0f3cu: goto label_2a0f3c;
        case 0x2a0f40u: goto label_2a0f40;
        case 0x2a0f44u: goto label_2a0f44;
        case 0x2a0f48u: goto label_2a0f48;
        case 0x2a0f4cu: goto label_2a0f4c;
        case 0x2a0f50u: goto label_2a0f50;
        case 0x2a0f54u: goto label_2a0f54;
        case 0x2a0f58u: goto label_2a0f58;
        case 0x2a0f5cu: goto label_2a0f5c;
        case 0x2a0f60u: goto label_2a0f60;
        case 0x2a0f64u: goto label_2a0f64;
        case 0x2a0f68u: goto label_2a0f68;
        case 0x2a0f6cu: goto label_2a0f6c;
        case 0x2a0f70u: goto label_2a0f70;
        case 0x2a0f74u: goto label_2a0f74;
        case 0x2a0f78u: goto label_2a0f78;
        case 0x2a0f7cu: goto label_2a0f7c;
        case 0x2a0f80u: goto label_2a0f80;
        case 0x2a0f84u: goto label_2a0f84;
        case 0x2a0f88u: goto label_2a0f88;
        case 0x2a0f8cu: goto label_2a0f8c;
        case 0x2a0f90u: goto label_2a0f90;
        case 0x2a0f94u: goto label_2a0f94;
        case 0x2a0f98u: goto label_2a0f98;
        case 0x2a0f9cu: goto label_2a0f9c;
        case 0x2a0fa0u: goto label_2a0fa0;
        case 0x2a0fa4u: goto label_2a0fa4;
        case 0x2a0fa8u: goto label_2a0fa8;
        case 0x2a0facu: goto label_2a0fac;
        case 0x2a0fb0u: goto label_2a0fb0;
        case 0x2a0fb4u: goto label_2a0fb4;
        default: break;
    }

    ctx->pc = 0x2a0c78u;

label_2a0c78:
    // 0x2a0c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a0c7c:
    // 0x2a0c7c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a0c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_2a0c80:
    // 0x2a0c80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a0c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2a0c84:
    // 0x2a0c84: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2a0c88:
    // 0x2a0c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0c8c:
    // 0x2a0c8c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2a0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2a0c90:
    // 0x2a0c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0c94:
    // 0x2a0c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a0c98:
    // 0x2a0c98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a0c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a0c9c:
    // 0x2a0c9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a0c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ca0:
    // 0x2a0ca0: 0x2442f430  addiu       $v0, $v0, -0xBD0
    ctx->pc = 0x2a0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964272));
label_2a0ca4:
    // 0x2a0ca4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2a0ca4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_2a0ca8:
    // 0x2a0ca8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2a0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2a0cac:
    // 0x2a0cac: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a0cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2a0cb0:
    // 0x2a0cb0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2a0cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_2a0cb4:
    // 0x2a0cb4: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2a0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2a0cb8:
    // 0x2a0cb8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2a0cbc:
    // 0x2a0cbc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a0cc0:
    // 0x2a0cc0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2a0cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_2a0cc4:
    // 0x2a0cc4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a0cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2a0cc8:
    // 0x2a0cc8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2a0cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a0ccc:
    // 0x2a0ccc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a0cd0:
    // 0x2a0cd0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2a0cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2a0cd4:
    // 0x2a0cd4: 0xa6060012  sh          $a2, 0x12($s0)
    ctx->pc = 0x2a0cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 6));
label_2a0cd8:
    // 0x2a0cd8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2a0cdc:
    // 0x2a0cdc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a0cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2a0ce0:
    // 0x2a0ce0: 0x0  nop
    ctx->pc = 0x2a0ce0u;
    // NOP
label_2a0ce4:
    // 0x2a0ce4: 0x0  nop
    ctx->pc = 0x2a0ce4u;
    // NOP
label_2a0ce8:
    // 0x2a0ce8: 0x14a3fffb  bne         $a1, $v1, . + 4 + (-0x5 << 2)
label_2a0cec:
    if (ctx->pc == 0x2A0CECu) {
        ctx->pc = 0x2A0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0CE8u;
        // 0x2a0cec: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0CF0u;
        goto label_2a0cf0;
    }
    ctx->pc = 0x2A0CE8u;
    {
        const bool branch_taken_0x2a0ce8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0CE8u;
        // 0x2a0cec: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ce8) {
            ctx->pc = 0x2A0CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0cd8;
        }
    }
    ctx->pc = 0x2A0CF0u;
label_2a0cf0:
    // 0x2a0cf0: 0xa6060012  sh          $a2, 0x12($s0)
    ctx->pc = 0x2a0cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 6));
label_2a0cf4:
    // 0x2a0cf4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a0cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a0cf8:
    // 0x2a0cf8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0cfc:
    // 0x2a0cfc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0d00:
    // 0x2a0d00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0d04:
    // 0x2a0d04: 0x40f809  jalr        $v0
label_2a0d08:
    if (ctx->pc == 0x2A0D08u) {
        ctx->pc = 0x2A0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D04u;
        // 0x2a0d08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D0Cu;
        goto label_2a0d0c;
    }
    ctx->pc = 0x2A0D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0D0Cu);
        ctx->pc = 0x2A0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D04u;
        // 0x2a0d08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0D04u, 0x2A0D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0D0Cu;
label_2a0d0c:
    // 0x2a0d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d10:
    // 0x2a0d10: 0xc0a49c2  jal         func_292708
label_2a0d14:
    if (ctx->pc == 0x2A0D14u) {
        ctx->pc = 0x2A0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D10u;
        // 0x2a0d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D18u;
        goto label_2a0d18;
    }
    ctx->pc = 0x2A0D10u;
    SET_GPR_U32(ctx, 31, 0x2A0D18u);
    ctx->pc = 0x2A0D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D10u;
    // 0x2a0d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A0D10u, 0x2A0D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D18u;
label_2a0d18:
    // 0x2a0d18: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a0d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a0d1c:
    // 0x2a0d1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0d20:
    // 0x2a0d20: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0d24:
    // 0x2a0d24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0d28:
    // 0x2a0d28: 0x40f809  jalr        $v0
label_2a0d2c:
    if (ctx->pc == 0x2A0D2Cu) {
        ctx->pc = 0x2A0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D28u;
        // 0x2a0d2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D30u;
        goto label_2a0d30;
    }
    ctx->pc = 0x2A0D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0D30u);
        ctx->pc = 0x2A0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D28u;
        // 0x2a0d2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0D28u, 0x2A0D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0D30u;
label_2a0d30:
    // 0x2a0d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d34:
    // 0x2a0d34: 0xc0a49d6  jal         func_292758
label_2a0d38:
    if (ctx->pc == 0x2A0D38u) {
        ctx->pc = 0x2A0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D34u;
        // 0x2a0d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D3Cu;
        goto label_2a0d3c;
    }
    ctx->pc = 0x2A0D34u;
    SET_GPR_U32(ctx, 31, 0x2A0D3Cu);
    ctx->pc = 0x2A0D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D34u;
    // 0x2a0d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A0D34u, 0x2A0D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D3Cu;
label_2a0d3c:
    // 0x2a0d3c: 0xa2200265  sb          $zero, 0x265($s1)
    ctx->pc = 0x2a0d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 613), (uint8_t)GPR_U32(ctx, 0));
label_2a0d40:
    // 0x2a0d40: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a0d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a0d44:
    // 0x2a0d44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0d48:
    // 0x2a0d48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0d4c:
    // 0x2a0d4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0d50:
    // 0x2a0d50: 0x40f809  jalr        $v0
label_2a0d54:
    if (ctx->pc == 0x2A0D54u) {
        ctx->pc = 0x2A0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D50u;
        // 0x2a0d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D58u;
        goto label_2a0d58;
    }
    ctx->pc = 0x2A0D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0D58u);
        ctx->pc = 0x2A0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D50u;
        // 0x2a0d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0D50u, 0x2A0D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0D58u;
label_2a0d58:
    // 0x2a0d58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d5c:
    // 0x2a0d5c: 0xc08def8  jal         func_237BE0
label_2a0d60:
    if (ctx->pc == 0x2A0D60u) {
        ctx->pc = 0x2A0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D5Cu;
        // 0x2a0d60: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D64u;
        goto label_2a0d64;
    }
    ctx->pc = 0x2A0D5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0D64u);
    ctx->pc = 0x2A0D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D5Cu;
    // 0x2a0d60: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237BE0u, 0x2A0D5Cu, 0x2A0D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D64u;
label_2a0d64:
    // 0x2a0d64: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a0d68:
    // 0x2a0d68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0d6c:
    // 0x2a0d6c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0d70:
    // 0x2a0d70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0d74:
    // 0x2a0d74: 0x40f809  jalr        $v0
label_2a0d78:
    if (ctx->pc == 0x2A0D78u) {
        ctx->pc = 0x2A0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D74u;
        // 0x2a0d78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D7Cu;
        goto label_2a0d7c;
    }
    ctx->pc = 0x2A0D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0D7Cu);
        ctx->pc = 0x2A0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D74u;
        // 0x2a0d78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0D74u, 0x2A0D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0D7Cu;
label_2a0d7c:
    // 0x2a0d7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d80:
    // 0x2a0d80: 0xc08de12  jal         func_237848
label_2a0d84:
    if (ctx->pc == 0x2A0D84u) {
        ctx->pc = 0x2A0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D80u;
        // 0x2a0d84: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D88u;
        goto label_2a0d88;
    }
    ctx->pc = 0x2A0D80u;
    SET_GPR_U32(ctx, 31, 0x2A0D88u);
    ctx->pc = 0x2A0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D80u;
    // 0x2a0d84: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x2A0D80u, 0x2A0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D88u;
label_2a0d88:
    // 0x2a0d88: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2a0d88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_2a0d8c:
    // 0x2a0d8c: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
label_2a0d90:
    if (ctx->pc == 0x2A0D90u) {
        ctx->pc = 0x2A0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D8Cu;
        // 0x2a0d90: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D94u;
        goto label_2a0d94;
    }
    ctx->pc = 0x2A0D8Cu;
    {
        const bool branch_taken_0x2a0d8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D8Cu;
        // 0x2a0d90: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d8c) {
            ctx->pc = 0x2A0E58u;
            goto label_2a0e58;
        }
    }
    ctx->pc = 0x2A0D94u;
label_2a0d94:
    // 0x2a0d94: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2a0d98:
    if (ctx->pc == 0x2A0D98u) {
        ctx->pc = 0x2A0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D94u;
        // 0x2a0d98: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0D9Cu;
        goto label_2a0d9c;
    }
    ctx->pc = 0x2A0D94u;
    {
        const bool branch_taken_0x2a0d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D94u;
        // 0x2a0d98: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d94) {
            ctx->pc = 0x2A0E58u;
            goto label_2a0e58;
        }
    }
    ctx->pc = 0x2A0D9Cu;
label_2a0d9c:
    // 0x2a0d9c: 0xc105712  jal         func_415C48
label_2a0da0:
    if (ctx->pc == 0x2A0DA0u) {
        ctx->pc = 0x2A0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D9Cu;
        // 0x2a0da0: 0x24842a20  addiu       $a0, $a0, 0x2A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0DA4u;
        goto label_2a0da4;
    }
    ctx->pc = 0x2A0D9Cu;
    SET_GPR_U32(ctx, 31, 0x2A0DA4u);
    ctx->pc = 0x2A0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D9Cu;
    // 0x2a0da0: 0x24842a20  addiu       $a0, $a0, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0D9Cu, 0x2A0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DA4u;
label_2a0da4:
    // 0x2a0da4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0da8:
    // 0x2a0da8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2a0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2a0dac:
    // 0x2a0dac: 0xc105712  jal         func_415C48
label_2a0db0:
    if (ctx->pc == 0x2A0DB0u) {
        ctx->pc = 0x2A0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DACu;
        // 0x2a0db0: 0x24842a30  addiu       $a0, $a0, 0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0DB4u;
        goto label_2a0db4;
    }
    ctx->pc = 0x2A0DACu;
    SET_GPR_U32(ctx, 31, 0x2A0DB4u);
    ctx->pc = 0x2A0DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DACu;
    // 0x2a0db0: 0x24842a30  addiu       $a0, $a0, 0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0DACu, 0x2A0DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DB4u;
label_2a0db4:
    // 0x2a0db4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0db8:
    // 0x2a0db8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2a0db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2a0dbc:
    // 0x2a0dbc: 0xc105712  jal         func_415C48
label_2a0dc0:
    if (ctx->pc == 0x2A0DC0u) {
        ctx->pc = 0x2A0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DBCu;
        // 0x2a0dc0: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0DC4u;
        goto label_2a0dc4;
    }
    ctx->pc = 0x2A0DBCu;
    SET_GPR_U32(ctx, 31, 0x2A0DC4u);
    ctx->pc = 0x2A0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DBCu;
    // 0x2a0dc0: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0DBCu, 0x2A0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DC4u;
label_2a0dc4:
    // 0x2a0dc4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0dc8:
    // 0x2a0dc8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2a0dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2a0dcc:
    // 0x2a0dcc: 0xc105712  jal         func_415C48
label_2a0dd0:
    if (ctx->pc == 0x2A0DD0u) {
        ctx->pc = 0x2A0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DCCu;
        // 0x2a0dd0: 0x24842a50  addiu       $a0, $a0, 0x2A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0DD4u;
        goto label_2a0dd4;
    }
    ctx->pc = 0x2A0DCCu;
    SET_GPR_U32(ctx, 31, 0x2A0DD4u);
    ctx->pc = 0x2A0DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DCCu;
    // 0x2a0dd0: 0x24842a50  addiu       $a0, $a0, 0x2A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0DCCu, 0x2A0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DD4u;
label_2a0dd4:
    // 0x2a0dd4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0dd8:
    // 0x2a0dd8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2a0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2a0ddc:
    // 0x2a0ddc: 0xc105712  jal         func_415C48
label_2a0de0:
    if (ctx->pc == 0x2A0DE0u) {
        ctx->pc = 0x2A0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DDCu;
        // 0x2a0de0: 0x24842a60  addiu       $a0, $a0, 0x2A60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0DE4u;
        goto label_2a0de4;
    }
    ctx->pc = 0x2A0DDCu;
    SET_GPR_U32(ctx, 31, 0x2A0DE4u);
    ctx->pc = 0x2A0DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DDCu;
    // 0x2a0de0: 0x24842a60  addiu       $a0, $a0, 0x2A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0DDCu, 0x2A0DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DE4u;
label_2a0de4:
    // 0x2a0de4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0de8:
    // 0x2a0de8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2a0de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2a0dec:
    // 0x2a0dec: 0xc105712  jal         func_415C48
label_2a0df0:
    if (ctx->pc == 0x2A0DF0u) {
        ctx->pc = 0x2A0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DECu;
        // 0x2a0df0: 0x24842a70  addiu       $a0, $a0, 0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0DF4u;
        goto label_2a0df4;
    }
    ctx->pc = 0x2A0DECu;
    SET_GPR_U32(ctx, 31, 0x2A0DF4u);
    ctx->pc = 0x2A0DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DECu;
    // 0x2a0df0: 0x24842a70  addiu       $a0, $a0, 0x2A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0DECu, 0x2A0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DF4u;
label_2a0df4:
    // 0x2a0df4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0df8:
    // 0x2a0df8: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2a0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2a0dfc:
    // 0x2a0dfc: 0xc105712  jal         func_415C48
label_2a0e00:
    if (ctx->pc == 0x2A0E00u) {
        ctx->pc = 0x2A0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DFCu;
        // 0x2a0e00: 0x24842a80  addiu       $a0, $a0, 0x2A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E04u;
        goto label_2a0e04;
    }
    ctx->pc = 0x2A0DFCu;
    SET_GPR_U32(ctx, 31, 0x2A0E04u);
    ctx->pc = 0x2A0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DFCu;
    // 0x2a0e00: 0x24842a80  addiu       $a0, $a0, 0x2A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0DFCu, 0x2A0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E04u;
label_2a0e04:
    // 0x2a0e04: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0e08:
    // 0x2a0e08: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2a0e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2a0e0c:
    // 0x2a0e0c: 0xc105712  jal         func_415C48
label_2a0e10:
    if (ctx->pc == 0x2A0E10u) {
        ctx->pc = 0x2A0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E0Cu;
        // 0x2a0e10: 0x24842a90  addiu       $a0, $a0, 0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E14u;
        goto label_2a0e14;
    }
    ctx->pc = 0x2A0E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E14u);
    ctx->pc = 0x2A0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E0Cu;
    // 0x2a0e10: 0x24842a90  addiu       $a0, $a0, 0x2A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0E0Cu, 0x2A0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E14u;
label_2a0e14:
    // 0x2a0e14: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0e18:
    // 0x2a0e18: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2a0e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_2a0e1c:
    // 0x2a0e1c: 0xc105712  jal         func_415C48
label_2a0e20:
    if (ctx->pc == 0x2A0E20u) {
        ctx->pc = 0x2A0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E1Cu;
        // 0x2a0e20: 0x24842aa0  addiu       $a0, $a0, 0x2AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E24u;
        goto label_2a0e24;
    }
    ctx->pc = 0x2A0E1Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E24u);
    ctx->pc = 0x2A0E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E1Cu;
    // 0x2a0e20: 0x24842aa0  addiu       $a0, $a0, 0x2AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0E1Cu, 0x2A0E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E24u;
label_2a0e24:
    // 0x2a0e24: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0e28:
    // 0x2a0e28: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2a0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2a0e2c:
    // 0x2a0e2c: 0xc105712  jal         func_415C48
label_2a0e30:
    if (ctx->pc == 0x2A0E30u) {
        ctx->pc = 0x2A0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E2Cu;
        // 0x2a0e30: 0x24842ab0  addiu       $a0, $a0, 0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E34u;
        goto label_2a0e34;
    }
    ctx->pc = 0x2A0E2Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E34u);
    ctx->pc = 0x2A0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E2Cu;
    // 0x2a0e30: 0x24842ab0  addiu       $a0, $a0, 0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0E2Cu, 0x2A0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E34u;
label_2a0e34:
    // 0x2a0e34: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0e38:
    // 0x2a0e38: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2a0e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_2a0e3c:
    // 0x2a0e3c: 0xc105712  jal         func_415C48
label_2a0e40:
    if (ctx->pc == 0x2A0E40u) {
        ctx->pc = 0x2A0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E3Cu;
        // 0x2a0e40: 0x24842ac0  addiu       $a0, $a0, 0x2AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E44u;
        goto label_2a0e44;
    }
    ctx->pc = 0x2A0E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E44u);
    ctx->pc = 0x2A0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E3Cu;
    // 0x2a0e40: 0x24842ac0  addiu       $a0, $a0, 0x2AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0E3Cu, 0x2A0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E44u;
label_2a0e44:
    // 0x2a0e44: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a0e48:
    // 0x2a0e48: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2a0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2a0e4c:
    // 0x2a0e4c: 0xc105712  jal         func_415C48
label_2a0e50:
    if (ctx->pc == 0x2A0E50u) {
        ctx->pc = 0x2A0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E4Cu;
        // 0x2a0e50: 0x24842ad0  addiu       $a0, $a0, 0x2AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E54u;
        goto label_2a0e54;
    }
    ctx->pc = 0x2A0E4Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E54u);
    ctx->pc = 0x2A0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E4Cu;
    // 0x2a0e50: 0x24842ad0  addiu       $a0, $a0, 0x2AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A0E4Cu, 0x2A0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E54u;
label_2a0e54:
    // 0x2a0e54: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2a0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_2a0e58:
    // 0x2a0e58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0e5c:
    // 0x2a0e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a0e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a0e60:
    // 0x2a0e60: 0xa440940c  sh          $zero, -0x6BF4($v0)
    ctx->pc = 0x2a0e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294939660), (uint16_t)GPR_U32(ctx, 0));
label_2a0e64:
    // 0x2a0e64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0e68:
    // 0x2a0e68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0e6c:
    // 0x2a0e6c: 0xa4609410  sh          $zero, -0x6BF0($v1)
    ctx->pc = 0x2a0e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294939664), (uint16_t)GPR_U32(ctx, 0));
label_2a0e70:
    // 0x2a0e70: 0xa440940e  sh          $zero, -0x6BF2($v0)
    ctx->pc = 0x2a0e70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294939662), (uint16_t)GPR_U32(ctx, 0));
label_2a0e74:
    // 0x2a0e74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0e78:
    // 0x2a0e78: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x2a0e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_2a0e7c:
    // 0x2a0e7c: 0xa4409412  sh          $zero, -0x6BEE($v0)
    ctx->pc = 0x2a0e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294939666), (uint16_t)GPR_U32(ctx, 0));
label_2a0e80:
    // 0x2a0e80: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
label_2a0e84:
    if (ctx->pc == 0x2A0E84u) {
        ctx->pc = 0x2A0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E80u;
        // 0x2a0e84: 0xa6000064  sh          $zero, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E88u;
        goto label_2a0e88;
    }
    ctx->pc = 0x2A0E80u;
    {
        const bool branch_taken_0x2a0e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E80u;
        // 0x2a0e84: 0xa6000064  sh          $zero, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e80) {
            ctx->pc = 0x2A0EC8u;
            goto label_2a0ec8;
        }
    }
    ctx->pc = 0x2A0E88u;
label_2a0e88:
    // 0x2a0e88: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2a0e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2a0e8c:
    // 0x2a0e8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a0e90:
    if (ctx->pc == 0x2A0E90u) {
        ctx->pc = 0x2A0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E8Cu;
        // 0x2a0e90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E94u;
        goto label_2a0e94;
    }
    ctx->pc = 0x2A0E8Cu;
    {
        const bool branch_taken_0x2a0e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E8Cu;
        // 0x2a0e90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e8c) {
            ctx->pc = 0x2A0EA4u;
            goto label_2a0ea4;
        }
    }
    ctx->pc = 0x2A0E94u;
label_2a0e94:
    // 0x2a0e94: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2a0e98:
    if (ctx->pc == 0x2A0E98u) {
        ctx->pc = 0x2A0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E94u;
        // 0x2a0e98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0E9Cu;
        goto label_2a0e9c;
    }
    ctx->pc = 0x2A0E94u;
    {
        const bool branch_taken_0x2a0e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E94u;
        // 0x2a0e98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e94) {
            ctx->pc = 0x2A0EBCu;
            goto label_2a0ebc;
        }
    }
    ctx->pc = 0x2A0E9Cu;
label_2a0e9c:
    // 0x2a0e9c: 0x10000042  b           . + 4 + (0x42 << 2)
label_2a0ea0:
    if (ctx->pc == 0x2A0EA0u) {
        ctx->pc = 0x2A0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E9Cu;
        // 0x2a0ea0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0EA4u;
        goto label_2a0ea4;
    }
    ctx->pc = 0x2A0E9Cu;
    {
        const bool branch_taken_0x2a0e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E9Cu;
        // 0x2a0ea0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e9c) {
            ctx->pc = 0x2A0FA8u;
            goto label_2a0fa8;
        }
    }
    ctx->pc = 0x2A0EA4u;
label_2a0ea4:
    // 0x2a0ea4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_2a0ea8:
    if (ctx->pc == 0x2A0EA8u) {
        ctx->pc = 0x2A0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EA4u;
        // 0x2a0ea8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0EACu;
        goto label_2a0eac;
    }
    ctx->pc = 0x2A0EA4u;
    {
        const bool branch_taken_0x2a0ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EA4u;
        // 0x2a0ea8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ea4) {
            ctx->pc = 0x2A0EE8u;
            goto label_2a0ee8;
        }
    }
    ctx->pc = 0x2A0EACu;
label_2a0eac:
    // 0x2a0eac: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_2a0eb0:
    if (ctx->pc == 0x2A0EB0u) {
        ctx->pc = 0x2A0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EACu;
        // 0x2a0eb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0EB4u;
        goto label_2a0eb4;
    }
    ctx->pc = 0x2A0EACu;
    {
        const bool branch_taken_0x2a0eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EACu;
        // 0x2a0eb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0eac) {
            ctx->pc = 0x2A0F48u;
            goto label_2a0f48;
        }
    }
    ctx->pc = 0x2A0EB4u;
label_2a0eb4:
    // 0x2a0eb4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2a0eb8:
    if (ctx->pc == 0x2A0EB8u) {
        ctx->pc = 0x2A0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EB4u;
        // 0x2a0eb8: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0EBCu;
        goto label_2a0ebc;
    }
    ctx->pc = 0x2A0EB4u;
    {
        const bool branch_taken_0x2a0eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EB4u;
        // 0x2a0eb8: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0eb4) {
            ctx->pc = 0x2A0FA8u;
            goto label_2a0fa8;
        }
    }
    ctx->pc = 0x2A0EBCu;
label_2a0ebc:
    // 0x2a0ebc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2a0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a0ec0:
    // 0x2a0ec0: 0x10000037  b           . + 4 + (0x37 << 2)
label_2a0ec4:
    if (ctx->pc == 0x2A0EC4u) {
        ctx->pc = 0x2A0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EC0u;
        // 0x2a0ec4: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0EC8u;
        goto label_2a0ec8;
    }
    ctx->pc = 0x2A0EC0u;
    {
        const bool branch_taken_0x2a0ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EC0u;
        // 0x2a0ec4: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ec0) {
            ctx->pc = 0x2A0FA0u;
            goto label_2a0fa0;
        }
    }
    ctx->pc = 0x2A0EC8u;
label_2a0ec8:
    // 0x2a0ec8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a0ecc:
    // 0x2a0ecc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a0ed0:
    // 0x2a0ed0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a0ed4:
    // 0x2a0ed4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x2a0ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_2a0ed8:
    // 0x2a0ed8: 0xa603001a  sh          $v1, 0x1A($s0)
    ctx->pc = 0x2a0ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
label_2a0edc:
    // 0x2a0edc: 0xa6040018  sh          $a0, 0x18($s0)
    ctx->pc = 0x2a0edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 4));
label_2a0ee0:
    // 0x2a0ee0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2a0ee4:
    if (ctx->pc == 0x2A0EE4u) {
        ctx->pc = 0x2A0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EE0u;
        // 0x2a0ee4: 0xa6000010  sh          $zero, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0EE8u;
        goto label_2a0ee8;
    }
    ctx->pc = 0x2A0EE0u;
    {
        const bool branch_taken_0x2a0ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EE0u;
        // 0x2a0ee4: 0xa6000010  sh          $zero, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ee0) {
            ctx->pc = 0x2A0FA0u;
            goto label_2a0fa0;
        }
    }
    ctx->pc = 0x2A0EE8u;
label_2a0ee8:
    // 0x2a0ee8: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2a0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2a0eec:
    // 0x2a0eec: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2a0eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a0ef0:
    // 0x2a0ef0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a0ef4:
    // 0x2a0ef4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0ef8:
    // 0x2a0ef8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0efc:
    // 0x2a0efc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0f00:
    // 0x2a0f00: 0x40f809  jalr        $v0
label_2a0f04:
    if (ctx->pc == 0x2A0F04u) {
        ctx->pc = 0x2A0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F00u;
        // 0x2a0f04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0F08u;
        goto label_2a0f08;
    }
    ctx->pc = 0x2A0F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0F08u);
        ctx->pc = 0x2A0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F00u;
        // 0x2a0f04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0F00u, 0x2A0F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0F08u;
label_2a0f08:
    // 0x2a0f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f0c:
    // 0x2a0f0c: 0xc08d6ba  jal         func_235AE8
label_2a0f10:
    if (ctx->pc == 0x2A0F10u) {
        ctx->pc = 0x2A0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F0Cu;
        // 0x2a0f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0F14u;
        goto label_2a0f14;
    }
    ctx->pc = 0x2A0F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F14u);
    ctx->pc = 0x2A0F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F0Cu;
    // 0x2a0f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AE8u, 0x2A0F0Cu, 0x2A0F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F14u;
label_2a0f14:
    // 0x2a0f14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a0f18:
    // 0x2a0f18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a0f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a0f1c:
    // 0x2a0f1c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2a0f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2a0f20:
    // 0x2a0f20: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2a0f20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2a0f24:
    // 0x2a0f24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0f28:
    // 0x2a0f28: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a0f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a0f2c:
    // 0x2a0f2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a0f30:
    // 0x2a0f30: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x2a0f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_2a0f34:
    // 0x2a0f34: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x2a0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_2a0f38:
    // 0x2a0f38: 0x60f809  jalr        $v1
label_2a0f3c:
    if (ctx->pc == 0x2A0F3Cu) {
        ctx->pc = 0x2A0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F38u;
        // 0x2a0f3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0F40u;
        goto label_2a0f40;
    }
    ctx->pc = 0x2A0F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A0F40u);
        ctx->pc = 0x2A0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F38u;
        // 0x2a0f3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0F38u, 0x2A0F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0F40u;
label_2a0f40:
    // 0x2a0f40: 0x10000018  b           . + 4 + (0x18 << 2)
label_2a0f44:
    if (ctx->pc == 0x2A0F44u) {
        ctx->pc = 0x2A0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F40u;
        // 0x2a0f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0F48u;
        goto label_2a0f48;
    }
    ctx->pc = 0x2A0F40u;
    {
        const bool branch_taken_0x2a0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F40u;
        // 0x2a0f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f40) {
            ctx->pc = 0x2A0FA4u;
            goto label_2a0fa4;
        }
    }
    ctx->pc = 0x2A0F48u;
label_2a0f48:
    // 0x2a0f48: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2a0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2a0f4c:
    // 0x2a0f4c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2a0f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a0f50:
    // 0x2a0f50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a0f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a0f54:
    // 0x2a0f54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0f58:
    // 0x2a0f58: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0f5c:
    // 0x2a0f5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a0f60:
    // 0x2a0f60: 0x40f809  jalr        $v0
label_2a0f64:
    if (ctx->pc == 0x2A0F64u) {
        ctx->pc = 0x2A0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F60u;
        // 0x2a0f64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0F68u;
        goto label_2a0f68;
    }
    ctx->pc = 0x2A0F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0F68u);
        ctx->pc = 0x2A0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F60u;
        // 0x2a0f64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0F60u, 0x2A0F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0F68u;
label_2a0f68:
    // 0x2a0f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f6c:
    // 0x2a0f6c: 0xc08d6ba  jal         func_235AE8
label_2a0f70:
    if (ctx->pc == 0x2A0F70u) {
        ctx->pc = 0x2A0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F6Cu;
        // 0x2a0f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0F74u;
        goto label_2a0f74;
    }
    ctx->pc = 0x2A0F6Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F74u);
    ctx->pc = 0x2A0F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F6Cu;
    // 0x2a0f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AE8u, 0x2A0F6Cu, 0x2A0F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F74u;
label_2a0f74:
    // 0x2a0f74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a0f78:
    // 0x2a0f78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a0f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a0f7c:
    // 0x2a0f7c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2a0f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2a0f80:
    // 0x2a0f80: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2a0f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2a0f84:
    // 0x2a0f84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a0f88:
    // 0x2a0f88: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a0f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a0f8c:
    // 0x2a0f8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a0f90:
    // 0x2a0f90: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x2a0f90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_2a0f94:
    // 0x2a0f94: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x2a0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_2a0f98:
    // 0x2a0f98: 0x60f809  jalr        $v1
label_2a0f9c:
    if (ctx->pc == 0x2A0F9Cu) {
        ctx->pc = 0x2A0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F98u;
        // 0x2a0f9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0FA0u;
        goto label_2a0fa0;
    }
    ctx->pc = 0x2A0F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A0FA0u);
        ctx->pc = 0x2A0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F98u;
        // 0x2a0f9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0F98u, 0x2A0FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0FA0u;
label_2a0fa0:
    // 0x2a0fa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a0fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0fa4:
    // 0x2a0fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0fa8:
    // 0x2a0fa8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a0fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0fac:
    // 0x2a0fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0fb0:
    // 0x2a0fb0: 0x3e00008  jr          $ra
label_2a0fb4:
    if (ctx->pc == 0x2A0FB4u) {
        ctx->pc = 0x2A0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FB0u;
        // 0x2a0fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0FB8u;
        goto label_fallthrough_0x2a0fb0;
    }
    ctx->pc = 0x2A0FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FB0u;
        // 0x2a0fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a0fb0:
    ctx->pc = 0x2A0FB8u;
}
