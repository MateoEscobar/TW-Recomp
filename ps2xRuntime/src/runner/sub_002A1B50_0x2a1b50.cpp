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

// Function: sub_002A1B50
// Address: 0x2a1b50 - 0x2a1df8
void sub_002A1B50_0x2a1b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1B50_0x2a1b50");
#endif

    switch (ctx->pc) {
        case 0x2a1b50u: goto label_2a1b50;
        case 0x2a1b54u: goto label_2a1b54;
        case 0x2a1b58u: goto label_2a1b58;
        case 0x2a1b5cu: goto label_2a1b5c;
        case 0x2a1b60u: goto label_2a1b60;
        case 0x2a1b64u: goto label_2a1b64;
        case 0x2a1b68u: goto label_2a1b68;
        case 0x2a1b6cu: goto label_2a1b6c;
        case 0x2a1b70u: goto label_2a1b70;
        case 0x2a1b74u: goto label_2a1b74;
        case 0x2a1b78u: goto label_2a1b78;
        case 0x2a1b7cu: goto label_2a1b7c;
        case 0x2a1b80u: goto label_2a1b80;
        case 0x2a1b84u: goto label_2a1b84;
        case 0x2a1b88u: goto label_2a1b88;
        case 0x2a1b8cu: goto label_2a1b8c;
        case 0x2a1b90u: goto label_2a1b90;
        case 0x2a1b94u: goto label_2a1b94;
        case 0x2a1b98u: goto label_2a1b98;
        case 0x2a1b9cu: goto label_2a1b9c;
        case 0x2a1ba0u: goto label_2a1ba0;
        case 0x2a1ba4u: goto label_2a1ba4;
        case 0x2a1ba8u: goto label_2a1ba8;
        case 0x2a1bacu: goto label_2a1bac;
        case 0x2a1bb0u: goto label_2a1bb0;
        case 0x2a1bb4u: goto label_2a1bb4;
        case 0x2a1bb8u: goto label_2a1bb8;
        case 0x2a1bbcu: goto label_2a1bbc;
        case 0x2a1bc0u: goto label_2a1bc0;
        case 0x2a1bc4u: goto label_2a1bc4;
        case 0x2a1bc8u: goto label_2a1bc8;
        case 0x2a1bccu: goto label_2a1bcc;
        case 0x2a1bd0u: goto label_2a1bd0;
        case 0x2a1bd4u: goto label_2a1bd4;
        case 0x2a1bd8u: goto label_2a1bd8;
        case 0x2a1bdcu: goto label_2a1bdc;
        case 0x2a1be0u: goto label_2a1be0;
        case 0x2a1be4u: goto label_2a1be4;
        case 0x2a1be8u: goto label_2a1be8;
        case 0x2a1becu: goto label_2a1bec;
        case 0x2a1bf0u: goto label_2a1bf0;
        case 0x2a1bf4u: goto label_2a1bf4;
        case 0x2a1bf8u: goto label_2a1bf8;
        case 0x2a1bfcu: goto label_2a1bfc;
        case 0x2a1c00u: goto label_2a1c00;
        case 0x2a1c04u: goto label_2a1c04;
        case 0x2a1c08u: goto label_2a1c08;
        case 0x2a1c0cu: goto label_2a1c0c;
        case 0x2a1c10u: goto label_2a1c10;
        case 0x2a1c14u: goto label_2a1c14;
        case 0x2a1c18u: goto label_2a1c18;
        case 0x2a1c1cu: goto label_2a1c1c;
        case 0x2a1c20u: goto label_2a1c20;
        case 0x2a1c24u: goto label_2a1c24;
        case 0x2a1c28u: goto label_2a1c28;
        case 0x2a1c2cu: goto label_2a1c2c;
        case 0x2a1c30u: goto label_2a1c30;
        case 0x2a1c34u: goto label_2a1c34;
        case 0x2a1c38u: goto label_2a1c38;
        case 0x2a1c3cu: goto label_2a1c3c;
        case 0x2a1c40u: goto label_2a1c40;
        case 0x2a1c44u: goto label_2a1c44;
        case 0x2a1c48u: goto label_2a1c48;
        case 0x2a1c4cu: goto label_2a1c4c;
        case 0x2a1c50u: goto label_2a1c50;
        case 0x2a1c54u: goto label_2a1c54;
        case 0x2a1c58u: goto label_2a1c58;
        case 0x2a1c5cu: goto label_2a1c5c;
        case 0x2a1c60u: goto label_2a1c60;
        case 0x2a1c64u: goto label_2a1c64;
        case 0x2a1c68u: goto label_2a1c68;
        case 0x2a1c6cu: goto label_2a1c6c;
        case 0x2a1c70u: goto label_2a1c70;
        case 0x2a1c74u: goto label_2a1c74;
        case 0x2a1c78u: goto label_2a1c78;
        case 0x2a1c7cu: goto label_2a1c7c;
        case 0x2a1c80u: goto label_2a1c80;
        case 0x2a1c84u: goto label_2a1c84;
        case 0x2a1c88u: goto label_2a1c88;
        case 0x2a1c8cu: goto label_2a1c8c;
        case 0x2a1c90u: goto label_2a1c90;
        case 0x2a1c94u: goto label_2a1c94;
        case 0x2a1c98u: goto label_2a1c98;
        case 0x2a1c9cu: goto label_2a1c9c;
        case 0x2a1ca0u: goto label_2a1ca0;
        case 0x2a1ca4u: goto label_2a1ca4;
        case 0x2a1ca8u: goto label_2a1ca8;
        case 0x2a1cacu: goto label_2a1cac;
        case 0x2a1cb0u: goto label_2a1cb0;
        case 0x2a1cb4u: goto label_2a1cb4;
        case 0x2a1cb8u: goto label_2a1cb8;
        case 0x2a1cbcu: goto label_2a1cbc;
        case 0x2a1cc0u: goto label_2a1cc0;
        case 0x2a1cc4u: goto label_2a1cc4;
        case 0x2a1cc8u: goto label_2a1cc8;
        case 0x2a1cccu: goto label_2a1ccc;
        case 0x2a1cd0u: goto label_2a1cd0;
        case 0x2a1cd4u: goto label_2a1cd4;
        case 0x2a1cd8u: goto label_2a1cd8;
        case 0x2a1cdcu: goto label_2a1cdc;
        case 0x2a1ce0u: goto label_2a1ce0;
        case 0x2a1ce4u: goto label_2a1ce4;
        case 0x2a1ce8u: goto label_2a1ce8;
        case 0x2a1cecu: goto label_2a1cec;
        case 0x2a1cf0u: goto label_2a1cf0;
        case 0x2a1cf4u: goto label_2a1cf4;
        case 0x2a1cf8u: goto label_2a1cf8;
        case 0x2a1cfcu: goto label_2a1cfc;
        case 0x2a1d00u: goto label_2a1d00;
        case 0x2a1d04u: goto label_2a1d04;
        case 0x2a1d08u: goto label_2a1d08;
        case 0x2a1d0cu: goto label_2a1d0c;
        case 0x2a1d10u: goto label_2a1d10;
        case 0x2a1d14u: goto label_2a1d14;
        case 0x2a1d18u: goto label_2a1d18;
        case 0x2a1d1cu: goto label_2a1d1c;
        case 0x2a1d20u: goto label_2a1d20;
        case 0x2a1d24u: goto label_2a1d24;
        case 0x2a1d28u: goto label_2a1d28;
        case 0x2a1d2cu: goto label_2a1d2c;
        case 0x2a1d30u: goto label_2a1d30;
        case 0x2a1d34u: goto label_2a1d34;
        case 0x2a1d38u: goto label_2a1d38;
        case 0x2a1d3cu: goto label_2a1d3c;
        case 0x2a1d40u: goto label_2a1d40;
        case 0x2a1d44u: goto label_2a1d44;
        case 0x2a1d48u: goto label_2a1d48;
        case 0x2a1d4cu: goto label_2a1d4c;
        case 0x2a1d50u: goto label_2a1d50;
        case 0x2a1d54u: goto label_2a1d54;
        case 0x2a1d58u: goto label_2a1d58;
        case 0x2a1d5cu: goto label_2a1d5c;
        case 0x2a1d60u: goto label_2a1d60;
        case 0x2a1d64u: goto label_2a1d64;
        case 0x2a1d68u: goto label_2a1d68;
        case 0x2a1d6cu: goto label_2a1d6c;
        case 0x2a1d70u: goto label_2a1d70;
        case 0x2a1d74u: goto label_2a1d74;
        case 0x2a1d78u: goto label_2a1d78;
        case 0x2a1d7cu: goto label_2a1d7c;
        case 0x2a1d80u: goto label_2a1d80;
        case 0x2a1d84u: goto label_2a1d84;
        case 0x2a1d88u: goto label_2a1d88;
        case 0x2a1d8cu: goto label_2a1d8c;
        case 0x2a1d90u: goto label_2a1d90;
        case 0x2a1d94u: goto label_2a1d94;
        case 0x2a1d98u: goto label_2a1d98;
        case 0x2a1d9cu: goto label_2a1d9c;
        case 0x2a1da0u: goto label_2a1da0;
        case 0x2a1da4u: goto label_2a1da4;
        case 0x2a1da8u: goto label_2a1da8;
        case 0x2a1dacu: goto label_2a1dac;
        case 0x2a1db0u: goto label_2a1db0;
        case 0x2a1db4u: goto label_2a1db4;
        case 0x2a1db8u: goto label_2a1db8;
        case 0x2a1dbcu: goto label_2a1dbc;
        case 0x2a1dc0u: goto label_2a1dc0;
        case 0x2a1dc4u: goto label_2a1dc4;
        case 0x2a1dc8u: goto label_2a1dc8;
        case 0x2a1dccu: goto label_2a1dcc;
        case 0x2a1dd0u: goto label_2a1dd0;
        case 0x2a1dd4u: goto label_2a1dd4;
        case 0x2a1dd8u: goto label_2a1dd8;
        case 0x2a1ddcu: goto label_2a1ddc;
        case 0x2a1de0u: goto label_2a1de0;
        case 0x2a1de4u: goto label_2a1de4;
        case 0x2a1de8u: goto label_2a1de8;
        case 0x2a1decu: goto label_2a1dec;
        case 0x2a1df0u: goto label_2a1df0;
        case 0x2a1df4u: goto label_2a1df4;
        default: break;
    }

    ctx->pc = 0x2a1b50u;

label_2a1b50:
    // 0x2a1b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a1b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a1b54:
    // 0x2a1b54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2a1b58:
    // 0x2a1b58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a1b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2a1b5c:
    // 0x2a1b5c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2a1b60:
    // 0x2a1b60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a1b64:
    // 0x2a1b64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a1b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a1b68:
    // 0x2a1b68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2a1b6c:
    // 0x2a1b6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a1b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a1b70:
    // 0x2a1b70: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2a1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2a1b74:
    // 0x2a1b74: 0x2463f3d0  addiu       $v1, $v1, -0xC30
    ctx->pc = 0x2a1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964176));
label_2a1b78:
    // 0x2a1b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a1b7c:
    // 0x2a1b7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a1b80:
    // 0x2a1b80: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2a1b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2a1b84:
    // 0x2a1b84: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2a1b88:
    // 0x2a1b88: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2a1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_2a1b8c:
    // 0x2a1b8c: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x2a1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2a1b90:
    // 0x2a1b90: 0xa2260010  sb          $a2, 0x10($s1)
    ctx->pc = 0x2a1b90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 6));
label_2a1b94:
    // 0x2a1b94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a1b98:
    // 0x2a1b98: 0xa22a0011  sb          $t2, 0x11($s1)
    ctx->pc = 0x2a1b98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 10));
label_2a1b9c:
    // 0x2a1b9c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a1b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a1ba0:
    // 0x2a1ba0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2a1ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_2a1ba4:
    // 0x2a1ba4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2a1ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_2a1ba8:
    // 0x2a1ba8: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2a1ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a1bac:
    // 0x2a1bac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a1bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2a1bb0:
    // 0x2a1bb0: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2a1bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
label_2a1bb4:
    // 0x2a1bb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a1bb8:
    // 0x2a1bb8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2a1bbc:
    // 0x2a1bbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a1bc0:
    // 0x2a1bc0: 0x0  nop
    ctx->pc = 0x2a1bc0u;
    // NOP
label_2a1bc4:
    // 0x2a1bc4: 0x0  nop
    ctx->pc = 0x2a1bc4u;
    // NOP
label_2a1bc8:
    // 0x2a1bc8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_2a1bcc:
    if (ctx->pc == 0x2A1BCCu) {
        ctx->pc = 0x2A1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BC8u;
        // 0x2a1bcc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1BD0u;
        goto label_2a1bd0;
    }
    ctx->pc = 0x2A1BC8u;
    {
        const bool branch_taken_0x2a1bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BC8u;
        // 0x2a1bcc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bc8) {
            ctx->pc = 0x2A1BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1bb8;
        }
    }
    ctx->pc = 0x2A1BD0u;
label_2a1bd0:
    // 0x2a1bd0: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a1bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a1bd4:
    // 0x2a1bd4: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x2a1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_2a1bd8:
    // 0x2a1bd8: 0xae280018  sw          $t0, 0x18($s1)
    ctx->pc = 0x2a1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 8));
label_2a1bdc:
    // 0x2a1bdc: 0x24842b78  addiu       $a0, $a0, 0x2B78
    ctx->pc = 0x2a1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11128));
label_2a1be0:
    // 0x2a1be0: 0xc105712  jal         func_415C48
label_2a1be4:
    if (ctx->pc == 0x2A1BE4u) {
        ctx->pc = 0x2A1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BE0u;
        // 0x2a1be4: 0xae29001c  sw          $t1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1BE8u;
        goto label_2a1be8;
    }
    ctx->pc = 0x2A1BE0u;
    SET_GPR_U32(ctx, 31, 0x2A1BE8u);
    ctx->pc = 0x2A1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BE0u;
    // 0x2a1be4: 0xae29001c  sw          $t1, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A1BE0u, 0x2A1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BE8u;
label_2a1be8:
    // 0x2a1be8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2a1be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2a1bec:
    // 0x2a1bec: 0x8e02b734  lw          $v0, -0x48CC($s0)
    ctx->pc = 0x2a1becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_2a1bf0:
    // 0x2a1bf0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2a1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a1bf4:
    // 0x2a1bf4: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2a1bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_2a1bf8:
    // 0x2a1bf8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a1bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1bfc:
    // 0x2a1bfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a1c00:
    // 0x2a1c00: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1c04:
    // 0x2a1c04: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1c08:
    // 0x2a1c08: 0x40f809  jalr        $v0
label_2a1c0c:
    if (ctx->pc == 0x2A1C0Cu) {
        ctx->pc = 0x2A1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C08u;
        // 0x2a1c0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C10u;
        goto label_2a1c10;
    }
    ctx->pc = 0x2A1C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1C10u);
        ctx->pc = 0x2A1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C08u;
        // 0x2a1c0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1C08u, 0x2A1C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1C10u;
label_2a1c10:
    // 0x2a1c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1c14:
    // 0x2a1c14: 0xc0a49c2  jal         func_292708
label_2a1c18:
    if (ctx->pc == 0x2A1C18u) {
        ctx->pc = 0x2A1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C14u;
        // 0x2a1c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C1Cu;
        goto label_2a1c1c;
    }
    ctx->pc = 0x2A1C14u;
    SET_GPR_U32(ctx, 31, 0x2A1C1Cu);
    ctx->pc = 0x2A1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C14u;
    // 0x2a1c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A1C14u, 0x2A1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C1Cu;
label_2a1c1c:
    // 0x2a1c1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1c20:
    // 0x2a1c20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a1c24:
    // 0x2a1c24: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1c28:
    // 0x2a1c28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1c2c:
    // 0x2a1c2c: 0x40f809  jalr        $v0
label_2a1c30:
    if (ctx->pc == 0x2A1C30u) {
        ctx->pc = 0x2A1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C2Cu;
        // 0x2a1c30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C34u;
        goto label_2a1c34;
    }
    ctx->pc = 0x2A1C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1C34u);
        ctx->pc = 0x2A1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C2Cu;
        // 0x2a1c30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1C2Cu, 0x2A1C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1C34u;
label_2a1c34:
    // 0x2a1c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1c38:
    // 0x2a1c38: 0xc0a49d6  jal         func_292758
label_2a1c3c:
    if (ctx->pc == 0x2A1C3Cu) {
        ctx->pc = 0x2A1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C38u;
        // 0x2a1c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C40u;
        goto label_2a1c40;
    }
    ctx->pc = 0x2A1C38u;
    SET_GPR_U32(ctx, 31, 0x2A1C40u);
    ctx->pc = 0x2A1C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C38u;
    // 0x2a1c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A1C38u, 0x2A1C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C40u;
label_2a1c40:
    // 0x2a1c40: 0xa2400265  sb          $zero, 0x265($s2)
    ctx->pc = 0x2a1c40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 613), (uint8_t)GPR_U32(ctx, 0));
label_2a1c44:
    // 0x2a1c44: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x2a1c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_2a1c48:
    // 0x2a1c48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2a1c4c:
    if (ctx->pc == 0x2A1C4Cu) {
        ctx->pc = 0x2A1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C48u;
        // 0x2a1c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C50u;
        goto label_2a1c50;
    }
    ctx->pc = 0x2A1C48u;
    {
        const bool branch_taken_0x2a1c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C48u;
        // 0x2a1c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c48) {
            ctx->pc = 0x2A1C60u;
            goto label_2a1c60;
        }
    }
    ctx->pc = 0x2A1C50u;
label_2a1c50:
    // 0x2a1c50: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_2a1c54:
    if (ctx->pc == 0x2A1C54u) {
        ctx->pc = 0x2A1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C50u;
        // 0x2a1c54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C58u;
        goto label_2a1c58;
    }
    ctx->pc = 0x2A1C50u;
    {
        const bool branch_taken_0x2a1c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C50u;
        // 0x2a1c54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c50) {
            ctx->pc = 0x2A1CE8u;
            goto label_2a1ce8;
        }
    }
    ctx->pc = 0x2A1C58u;
label_2a1c58:
    // 0x2a1c58: 0x10000040  b           . + 4 + (0x40 << 2)
label_2a1c5c:
    if (ctx->pc == 0x2A1C5Cu) {
        ctx->pc = 0x2A1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C58u;
        // 0x2a1c5c: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C60u;
        goto label_2a1c60;
    }
    ctx->pc = 0x2A1C58u;
    {
        const bool branch_taken_0x2a1c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C58u;
        // 0x2a1c5c: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c58) {
            ctx->pc = 0x2A1D5Cu;
            goto label_2a1d5c;
        }
    }
    ctx->pc = 0x2A1C60u;
label_2a1c60:
    // 0x2a1c60: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a1c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1c64:
    // 0x2a1c64: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2a1c64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2a1c68:
    // 0x2a1c68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a1c6c:
    // 0x2a1c6c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1c70:
    // 0x2a1c70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1c74:
    // 0x2a1c74: 0x40f809  jalr        $v0
label_2a1c78:
    if (ctx->pc == 0x2A1C78u) {
        ctx->pc = 0x2A1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C74u;
        // 0x2a1c78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C7Cu;
        goto label_2a1c7c;
    }
    ctx->pc = 0x2A1C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1C7Cu);
        ctx->pc = 0x2A1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C74u;
        // 0x2a1c78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1C74u, 0x2A1C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1C7Cu;
label_2a1c7c:
    // 0x2a1c7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1c80:
    // 0x2a1c80: 0xc08dcca  jal         func_237328
label_2a1c84:
    if (ctx->pc == 0x2A1C84u) {
        ctx->pc = 0x2A1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C80u;
        // 0x2a1c84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C88u;
        goto label_2a1c88;
    }
    ctx->pc = 0x2A1C80u;
    SET_GPR_U32(ctx, 31, 0x2A1C88u);
    ctx->pc = 0x2A1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C80u;
    // 0x2a1c84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237328u, 0x2A1C80u, 0x2A1C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C88u;
label_2a1c88:
    // 0x2a1c88: 0xc088b90  jal         func_222E40
label_2a1c8c:
    if (ctx->pc == 0x2A1C8Cu) {
        ctx->pc = 0x2A1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C88u;
        // 0x2a1c8c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1C90u;
        goto label_2a1c90;
    }
    ctx->pc = 0x2A1C88u;
    SET_GPR_U32(ctx, 31, 0x2A1C90u);
    ctx->pc = 0x2A1C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C88u;
    // 0x2a1c8c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x2A1C88u, 0x2A1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C90u;
label_2a1c90:
    // 0x2a1c90: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a1c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a1c94:
    // 0x2a1c94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a1c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1c98:
    // 0x2a1c98: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2a1c98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_2a1c9c:
    // 0x2a1c9c: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2a1c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2a1ca0:
    // 0x2a1ca0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x2a1ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_2a1ca4:
    // 0x2a1ca4: 0xa6029416  sh          $v0, -0x6BEA($s0)
    ctx->pc = 0x2a1ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294939670), (uint16_t)GPR_U32(ctx, 2));
label_2a1ca8:
    // 0x2a1ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1cac:
    // 0x2a1cac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a1cb0:
    // 0x2a1cb0: 0xa4e59414  sh          $a1, -0x6BEC($a3)
    ctx->pc = 0x2a1cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294939668), (uint16_t)GPR_U32(ctx, 5));
label_2a1cb4:
    // 0x2a1cb4: 0xe4c09418  swc1        $f0, -0x6BE8($a2)
    ctx->pc = 0x2a1cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294939672), bits); }
label_2a1cb8:
    // 0x2a1cb8: 0x24630e28  addiu       $v1, $v1, 0xE28
    ctx->pc = 0x2a1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3624));
label_2a1cbc:
    // 0x2a1cbc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2a1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a1cc0:
    // 0x2a1cc0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2a1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_2a1cc4:
    // 0x2a1cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1cc8:
    // 0x2a1cc8: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x2a1cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
label_2a1ccc:
    // 0x2a1ccc: 0xc107810  jal         func_41E040
label_2a1cd0:
    if (ctx->pc == 0x2A1CD0u) {
        ctx->pc = 0x2A1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CCCu;
        // 0x2a1cd0: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1CD4u;
        goto label_2a1cd4;
    }
    ctx->pc = 0x2A1CCCu;
    SET_GPR_U32(ctx, 31, 0x2A1CD4u);
    ctx->pc = 0x2A1CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CCCu;
    // 0x2a1cd0: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E040u, 0x2A1CCCu, 0x2A1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CD4u;
label_2a1cd4:
    // 0x2a1cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1cd8:
    // 0x2a1cd8: 0xc107b6e  jal         func_41EDB8
label_2a1cdc:
    if (ctx->pc == 0x2A1CDCu) {
        ctx->pc = 0x2A1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CD8u;
        // 0x2a1cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1CE0u;
        goto label_2a1ce0;
    }
    ctx->pc = 0x2A1CD8u;
    SET_GPR_U32(ctx, 31, 0x2A1CE0u);
    ctx->pc = 0x2A1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CD8u;
    // 0x2a1cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EDB8u, 0x2A1CD8u, 0x2A1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CE0u;
label_2a1ce0:
    // 0x2a1ce0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2a1ce4:
    if (ctx->pc == 0x2A1CE4u) {
        ctx->pc = 0x2A1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CE0u;
        // 0x2a1ce4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1CE8u;
        goto label_2a1ce8;
    }
    ctx->pc = 0x2A1CE0u;
    {
        const bool branch_taken_0x2a1ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CE0u;
        // 0x2a1ce4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ce0) {
            ctx->pc = 0x2A1D58u;
            goto label_2a1d58;
        }
    }
    ctx->pc = 0x2A1CE8u;
label_2a1ce8:
    // 0x2a1ce8: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x2a1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_2a1cec:
    // 0x2a1cec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a1cf0:
    // 0x2a1cf0: 0x24630d28  addiu       $v1, $v1, 0xD28
    ctx->pc = 0x2a1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3368));
label_2a1cf4:
    // 0x2a1cf4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2a1cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a1cf8:
    // 0x2a1cf8: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a1cfc:
    // 0x2a1cfc: 0xa6240024  sh          $a0, 0x24($s1)
    ctx->pc = 0x2a1cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 4));
label_2a1d00:
    // 0x2a1d00: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2a1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2a1d04:
    // 0x2a1d04: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x2a1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
label_2a1d08:
    // 0x2a1d08: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2a1d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2a1d0c:
    // 0x2a1d0c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1d10:
    // 0x2a1d10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a1d14:
    // 0x2a1d14: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1d18:
    // 0x2a1d18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1d1c:
    // 0x2a1d1c: 0x40f809  jalr        $v0
label_2a1d20:
    if (ctx->pc == 0x2A1D20u) {
        ctx->pc = 0x2A1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D1Cu;
        // 0x2a1d20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1D24u;
        goto label_2a1d24;
    }
    ctx->pc = 0x2A1D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1D24u);
        ctx->pc = 0x2A1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D1Cu;
        // 0x2a1d20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1D1Cu, 0x2A1D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1D24u;
label_2a1d24:
    // 0x2a1d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1d28:
    // 0x2a1d28: 0xc08def8  jal         func_237BE0
label_2a1d2c:
    if (ctx->pc == 0x2A1D2Cu) {
        ctx->pc = 0x2A1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D28u;
        // 0x2a1d2c: 0x24050dac  addiu       $a1, $zero, 0xDAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1D30u;
        goto label_2a1d30;
    }
    ctx->pc = 0x2A1D28u;
    SET_GPR_U32(ctx, 31, 0x2A1D30u);
    ctx->pc = 0x2A1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D28u;
    // 0x2a1d2c: 0x24050dac  addiu       $a1, $zero, 0xDAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237BE0u, 0x2A1D28u, 0x2A1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D30u;
label_2a1d30:
    // 0x2a1d30: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a1d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1d34:
    // 0x2a1d34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a1d38:
    // 0x2a1d38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1d3c:
    // 0x2a1d3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1d40:
    // 0x2a1d40: 0x40f809  jalr        $v0
label_2a1d44:
    if (ctx->pc == 0x2A1D44u) {
        ctx->pc = 0x2A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D40u;
        // 0x2a1d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1D48u;
        goto label_2a1d48;
    }
    ctx->pc = 0x2A1D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1D48u);
        ctx->pc = 0x2A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D40u;
        // 0x2a1d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1D40u, 0x2A1D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1D48u;
label_2a1d48:
    // 0x2a1d48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1d4c:
    // 0x2a1d4c: 0xc08de12  jal         func_237848
label_2a1d50:
    if (ctx->pc == 0x2A1D50u) {
        ctx->pc = 0x2A1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D4Cu;
        // 0x2a1d50: 0x24050dac  addiu       $a1, $zero, 0xDAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1D54u;
        goto label_2a1d54;
    }
    ctx->pc = 0x2A1D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D54u);
    ctx->pc = 0x2A1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D4Cu;
    // 0x2a1d50: 0x24050dac  addiu       $a1, $zero, 0xDAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x2A1D4Cu, 0x2A1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D54u;
label_2a1d54:
    // 0x2a1d54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a1d58:
    // 0x2a1d58: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2a1d58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2a1d5c:
    // 0x2a1d5c: 0xa440940c  sh          $zero, -0x6BF4($v0)
    ctx->pc = 0x2a1d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294939660), (uint16_t)GPR_U32(ctx, 0));
label_2a1d60:
    // 0x2a1d60: 0x24c60fa8  addiu       $a2, $a2, 0xFA8
    ctx->pc = 0x2a1d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4008));
label_2a1d64:
    // 0x2a1d64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a1d68:
    // 0x2a1d68: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a1d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a1d6c:
    // 0x2a1d6c: 0xa440940e  sh          $zero, -0x6BF2($v0)
    ctx->pc = 0x2a1d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294939662), (uint16_t)GPR_U32(ctx, 0));
label_2a1d70:
    // 0x2a1d70: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a1d74:
    // 0x2a1d74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a1d78:
    // 0x2a1d78: 0xa4409410  sh          $zero, -0x6BF0($v0)
    ctx->pc = 0x2a1d78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294939664), (uint16_t)GPR_U32(ctx, 0));
label_2a1d7c:
    // 0x2a1d7c: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x2a1d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
label_2a1d80:
    // 0x2a1d80: 0xa620003c  sh          $zero, 0x3C($s1)
    ctx->pc = 0x2a1d80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
label_2a1d84:
    // 0x2a1d84: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x2a1d84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
label_2a1d88:
    // 0x2a1d88: 0x8e44020c  lw          $a0, 0x20C($s2)
    ctx->pc = 0x2a1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_2a1d8c:
    // 0x2a1d8c: 0xc05905e  jal         func_164178
label_2a1d90:
    if (ctx->pc == 0x2A1D90u) {
        ctx->pc = 0x2A1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D8Cu;
        // 0x2a1d90: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1D94u;
        goto label_2a1d94;
    }
    ctx->pc = 0x2A1D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D94u);
    ctx->pc = 0x2A1D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D8Cu;
    // 0x2a1d90: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x2A1D8Cu, 0x2A1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D94u;
label_2a1d94:
    // 0x2a1d94: 0xc097d14  jal         func_25F450
label_2a1d98:
    if (ctx->pc == 0x2A1D98u) {
        ctx->pc = 0x2A1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D94u;
        // 0x2a1d98: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1D9Cu;
        goto label_2a1d9c;
    }
    ctx->pc = 0x2A1D94u;
    SET_GPR_U32(ctx, 31, 0x2A1D9Cu);
    ctx->pc = 0x2A1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D94u;
    // 0x2a1d98: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x2A1D94u, 0x2A1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D9Cu;
label_2a1d9c:
    // 0x2a1d9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a1d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1da0:
    // 0x2a1da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1da4:
    // 0x2a1da4: 0xc0a22c6  jal         func_288B18
label_2a1da8:
    if (ctx->pc == 0x2A1DA8u) {
        ctx->pc = 0x2A1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DA4u;
        // 0x2a1da8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1DACu;
        goto label_2a1dac;
    }
    ctx->pc = 0x2A1DA4u;
    SET_GPR_U32(ctx, 31, 0x2A1DACu);
    ctx->pc = 0x2A1DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1DA4u;
    // 0x2a1da8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2A1DA4u, 0x2A1DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1DACu;
label_2a1dac:
    // 0x2a1dac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1db0:
    // 0x2a1db0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a1db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a1db4:
    // 0x2a1db4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1db8:
    // 0x2a1db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a1db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1dbc:
    // 0x2a1dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1dc0:
    // 0x2a1dc0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a1dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a1dc4:
    // 0x2a1dc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a1dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a1dc8:
    // 0x2a1dc8: 0xe460013c  swc1        $f0, 0x13C($v1)
    ctx->pc = 0x2a1dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 316), bits); }
label_2a1dcc:
    // 0x2a1dcc: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2a1dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2a1dd0:
    // 0x2a1dd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1dd4:
    // 0x2a1dd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a1dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a1dd8:
    // 0x2a1dd8: 0xe4610140  swc1        $f1, 0x140($v1)
    ctx->pc = 0x2a1dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
label_2a1ddc:
    // 0x2a1ddc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a1ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a1de0:
    // 0x2a1de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a1de4:
    // 0x2a1de4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2a1de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a1de8:
    // 0x2a1de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1dec:
    // 0x2a1dec: 0xa0850430  sb          $a1, 0x430($a0)
    ctx->pc = 0x2a1decu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1072), (uint8_t)GPR_U32(ctx, 5));
label_2a1df0:
    // 0x2a1df0: 0x3e00008  jr          $ra
label_2a1df4:
    if (ctx->pc == 0x2A1DF4u) {
        ctx->pc = 0x2A1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DF0u;
        // 0x2a1df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1DF8u;
        goto label_fallthrough_0x2a1df0;
    }
    ctx->pc = 0x2A1DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DF0u;
        // 0x2a1df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a1df0:
    ctx->pc = 0x2A1DF8u;
}
