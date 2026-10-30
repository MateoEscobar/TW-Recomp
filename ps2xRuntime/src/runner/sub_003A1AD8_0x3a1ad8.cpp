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

// Function: sub_003A1AD8
// Address: 0x3a1ad8 - 0x3a1e30
void sub_003A1AD8_0x3a1ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1AD8_0x3a1ad8");
#endif

    switch (ctx->pc) {
        case 0x3a1ad8u: goto label_3a1ad8;
        case 0x3a1adcu: goto label_3a1adc;
        case 0x3a1ae0u: goto label_3a1ae0;
        case 0x3a1ae4u: goto label_3a1ae4;
        case 0x3a1ae8u: goto label_3a1ae8;
        case 0x3a1aecu: goto label_3a1aec;
        case 0x3a1af0u: goto label_3a1af0;
        case 0x3a1af4u: goto label_3a1af4;
        case 0x3a1af8u: goto label_3a1af8;
        case 0x3a1afcu: goto label_3a1afc;
        case 0x3a1b00u: goto label_3a1b00;
        case 0x3a1b04u: goto label_3a1b04;
        case 0x3a1b08u: goto label_3a1b08;
        case 0x3a1b0cu: goto label_3a1b0c;
        case 0x3a1b10u: goto label_3a1b10;
        case 0x3a1b14u: goto label_3a1b14;
        case 0x3a1b18u: goto label_3a1b18;
        case 0x3a1b1cu: goto label_3a1b1c;
        case 0x3a1b20u: goto label_3a1b20;
        case 0x3a1b24u: goto label_3a1b24;
        case 0x3a1b28u: goto label_3a1b28;
        case 0x3a1b2cu: goto label_3a1b2c;
        case 0x3a1b30u: goto label_3a1b30;
        case 0x3a1b34u: goto label_3a1b34;
        case 0x3a1b38u: goto label_3a1b38;
        case 0x3a1b3cu: goto label_3a1b3c;
        case 0x3a1b40u: goto label_3a1b40;
        case 0x3a1b44u: goto label_3a1b44;
        case 0x3a1b48u: goto label_3a1b48;
        case 0x3a1b4cu: goto label_3a1b4c;
        case 0x3a1b50u: goto label_3a1b50;
        case 0x3a1b54u: goto label_3a1b54;
        case 0x3a1b58u: goto label_3a1b58;
        case 0x3a1b5cu: goto label_3a1b5c;
        case 0x3a1b60u: goto label_3a1b60;
        case 0x3a1b64u: goto label_3a1b64;
        case 0x3a1b68u: goto label_3a1b68;
        case 0x3a1b6cu: goto label_3a1b6c;
        case 0x3a1b70u: goto label_3a1b70;
        case 0x3a1b74u: goto label_3a1b74;
        case 0x3a1b78u: goto label_3a1b78;
        case 0x3a1b7cu: goto label_3a1b7c;
        case 0x3a1b80u: goto label_3a1b80;
        case 0x3a1b84u: goto label_3a1b84;
        case 0x3a1b88u: goto label_3a1b88;
        case 0x3a1b8cu: goto label_3a1b8c;
        case 0x3a1b90u: goto label_3a1b90;
        case 0x3a1b94u: goto label_3a1b94;
        case 0x3a1b98u: goto label_3a1b98;
        case 0x3a1b9cu: goto label_3a1b9c;
        case 0x3a1ba0u: goto label_3a1ba0;
        case 0x3a1ba4u: goto label_3a1ba4;
        case 0x3a1ba8u: goto label_3a1ba8;
        case 0x3a1bacu: goto label_3a1bac;
        case 0x3a1bb0u: goto label_3a1bb0;
        case 0x3a1bb4u: goto label_3a1bb4;
        case 0x3a1bb8u: goto label_3a1bb8;
        case 0x3a1bbcu: goto label_3a1bbc;
        case 0x3a1bc0u: goto label_3a1bc0;
        case 0x3a1bc4u: goto label_3a1bc4;
        case 0x3a1bc8u: goto label_3a1bc8;
        case 0x3a1bccu: goto label_3a1bcc;
        case 0x3a1bd0u: goto label_3a1bd0;
        case 0x3a1bd4u: goto label_3a1bd4;
        case 0x3a1bd8u: goto label_3a1bd8;
        case 0x3a1bdcu: goto label_3a1bdc;
        case 0x3a1be0u: goto label_3a1be0;
        case 0x3a1be4u: goto label_3a1be4;
        case 0x3a1be8u: goto label_3a1be8;
        case 0x3a1becu: goto label_3a1bec;
        case 0x3a1bf0u: goto label_3a1bf0;
        case 0x3a1bf4u: goto label_3a1bf4;
        case 0x3a1bf8u: goto label_3a1bf8;
        case 0x3a1bfcu: goto label_3a1bfc;
        case 0x3a1c00u: goto label_3a1c00;
        case 0x3a1c04u: goto label_3a1c04;
        case 0x3a1c08u: goto label_3a1c08;
        case 0x3a1c0cu: goto label_3a1c0c;
        case 0x3a1c10u: goto label_3a1c10;
        case 0x3a1c14u: goto label_3a1c14;
        case 0x3a1c18u: goto label_3a1c18;
        case 0x3a1c1cu: goto label_3a1c1c;
        case 0x3a1c20u: goto label_3a1c20;
        case 0x3a1c24u: goto label_3a1c24;
        case 0x3a1c28u: goto label_3a1c28;
        case 0x3a1c2cu: goto label_3a1c2c;
        case 0x3a1c30u: goto label_3a1c30;
        case 0x3a1c34u: goto label_3a1c34;
        case 0x3a1c38u: goto label_3a1c38;
        case 0x3a1c3cu: goto label_3a1c3c;
        case 0x3a1c40u: goto label_3a1c40;
        case 0x3a1c44u: goto label_3a1c44;
        case 0x3a1c48u: goto label_3a1c48;
        case 0x3a1c4cu: goto label_3a1c4c;
        case 0x3a1c50u: goto label_3a1c50;
        case 0x3a1c54u: goto label_3a1c54;
        case 0x3a1c58u: goto label_3a1c58;
        case 0x3a1c5cu: goto label_3a1c5c;
        case 0x3a1c60u: goto label_3a1c60;
        case 0x3a1c64u: goto label_3a1c64;
        case 0x3a1c68u: goto label_3a1c68;
        case 0x3a1c6cu: goto label_3a1c6c;
        case 0x3a1c70u: goto label_3a1c70;
        case 0x3a1c74u: goto label_3a1c74;
        case 0x3a1c78u: goto label_3a1c78;
        case 0x3a1c7cu: goto label_3a1c7c;
        case 0x3a1c80u: goto label_3a1c80;
        case 0x3a1c84u: goto label_3a1c84;
        case 0x3a1c88u: goto label_3a1c88;
        case 0x3a1c8cu: goto label_3a1c8c;
        case 0x3a1c90u: goto label_3a1c90;
        case 0x3a1c94u: goto label_3a1c94;
        case 0x3a1c98u: goto label_3a1c98;
        case 0x3a1c9cu: goto label_3a1c9c;
        case 0x3a1ca0u: goto label_3a1ca0;
        case 0x3a1ca4u: goto label_3a1ca4;
        case 0x3a1ca8u: goto label_3a1ca8;
        case 0x3a1cacu: goto label_3a1cac;
        case 0x3a1cb0u: goto label_3a1cb0;
        case 0x3a1cb4u: goto label_3a1cb4;
        case 0x3a1cb8u: goto label_3a1cb8;
        case 0x3a1cbcu: goto label_3a1cbc;
        case 0x3a1cc0u: goto label_3a1cc0;
        case 0x3a1cc4u: goto label_3a1cc4;
        case 0x3a1cc8u: goto label_3a1cc8;
        case 0x3a1cccu: goto label_3a1ccc;
        case 0x3a1cd0u: goto label_3a1cd0;
        case 0x3a1cd4u: goto label_3a1cd4;
        case 0x3a1cd8u: goto label_3a1cd8;
        case 0x3a1cdcu: goto label_3a1cdc;
        case 0x3a1ce0u: goto label_3a1ce0;
        case 0x3a1ce4u: goto label_3a1ce4;
        case 0x3a1ce8u: goto label_3a1ce8;
        case 0x3a1cecu: goto label_3a1cec;
        case 0x3a1cf0u: goto label_3a1cf0;
        case 0x3a1cf4u: goto label_3a1cf4;
        case 0x3a1cf8u: goto label_3a1cf8;
        case 0x3a1cfcu: goto label_3a1cfc;
        case 0x3a1d00u: goto label_3a1d00;
        case 0x3a1d04u: goto label_3a1d04;
        case 0x3a1d08u: goto label_3a1d08;
        case 0x3a1d0cu: goto label_3a1d0c;
        case 0x3a1d10u: goto label_3a1d10;
        case 0x3a1d14u: goto label_3a1d14;
        case 0x3a1d18u: goto label_3a1d18;
        case 0x3a1d1cu: goto label_3a1d1c;
        case 0x3a1d20u: goto label_3a1d20;
        case 0x3a1d24u: goto label_3a1d24;
        case 0x3a1d28u: goto label_3a1d28;
        case 0x3a1d2cu: goto label_3a1d2c;
        case 0x3a1d30u: goto label_3a1d30;
        case 0x3a1d34u: goto label_3a1d34;
        case 0x3a1d38u: goto label_3a1d38;
        case 0x3a1d3cu: goto label_3a1d3c;
        case 0x3a1d40u: goto label_3a1d40;
        case 0x3a1d44u: goto label_3a1d44;
        case 0x3a1d48u: goto label_3a1d48;
        case 0x3a1d4cu: goto label_3a1d4c;
        case 0x3a1d50u: goto label_3a1d50;
        case 0x3a1d54u: goto label_3a1d54;
        case 0x3a1d58u: goto label_3a1d58;
        case 0x3a1d5cu: goto label_3a1d5c;
        case 0x3a1d60u: goto label_3a1d60;
        case 0x3a1d64u: goto label_3a1d64;
        case 0x3a1d68u: goto label_3a1d68;
        case 0x3a1d6cu: goto label_3a1d6c;
        case 0x3a1d70u: goto label_3a1d70;
        case 0x3a1d74u: goto label_3a1d74;
        case 0x3a1d78u: goto label_3a1d78;
        case 0x3a1d7cu: goto label_3a1d7c;
        case 0x3a1d80u: goto label_3a1d80;
        case 0x3a1d84u: goto label_3a1d84;
        case 0x3a1d88u: goto label_3a1d88;
        case 0x3a1d8cu: goto label_3a1d8c;
        case 0x3a1d90u: goto label_3a1d90;
        case 0x3a1d94u: goto label_3a1d94;
        case 0x3a1d98u: goto label_3a1d98;
        case 0x3a1d9cu: goto label_3a1d9c;
        case 0x3a1da0u: goto label_3a1da0;
        case 0x3a1da4u: goto label_3a1da4;
        case 0x3a1da8u: goto label_3a1da8;
        case 0x3a1dacu: goto label_3a1dac;
        case 0x3a1db0u: goto label_3a1db0;
        case 0x3a1db4u: goto label_3a1db4;
        case 0x3a1db8u: goto label_3a1db8;
        case 0x3a1dbcu: goto label_3a1dbc;
        case 0x3a1dc0u: goto label_3a1dc0;
        case 0x3a1dc4u: goto label_3a1dc4;
        case 0x3a1dc8u: goto label_3a1dc8;
        case 0x3a1dccu: goto label_3a1dcc;
        case 0x3a1dd0u: goto label_3a1dd0;
        case 0x3a1dd4u: goto label_3a1dd4;
        case 0x3a1dd8u: goto label_3a1dd8;
        case 0x3a1ddcu: goto label_3a1ddc;
        case 0x3a1de0u: goto label_3a1de0;
        case 0x3a1de4u: goto label_3a1de4;
        case 0x3a1de8u: goto label_3a1de8;
        case 0x3a1decu: goto label_3a1dec;
        case 0x3a1df0u: goto label_3a1df0;
        case 0x3a1df4u: goto label_3a1df4;
        case 0x3a1df8u: goto label_3a1df8;
        case 0x3a1dfcu: goto label_3a1dfc;
        case 0x3a1e00u: goto label_3a1e00;
        case 0x3a1e04u: goto label_3a1e04;
        case 0x3a1e08u: goto label_3a1e08;
        case 0x3a1e0cu: goto label_3a1e0c;
        case 0x3a1e10u: goto label_3a1e10;
        case 0x3a1e14u: goto label_3a1e14;
        case 0x3a1e18u: goto label_3a1e18;
        case 0x3a1e1cu: goto label_3a1e1c;
        case 0x3a1e20u: goto label_3a1e20;
        case 0x3a1e24u: goto label_3a1e24;
        case 0x3a1e28u: goto label_3a1e28;
        case 0x3a1e2cu: goto label_3a1e2c;
        default: break;
    }

    ctx->pc = 0x3a1ad8u;

label_3a1ad8:
    // 0x3a1ad8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3a1ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3a1adc:
    // 0x3a1adc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3a1adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3a1ae0:
    // 0x3a1ae0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3a1ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3a1ae4:
    // 0x3a1ae4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a1ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ae8:
    // 0x3a1ae8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a1ae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1aec:
    // 0x3a1aec: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3a1aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3a1af0:
    // 0x3a1af0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3a1af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3a1af4:
    // 0x3a1af4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3a1af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3a1af8:
    // 0x3a1af8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3a1af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3a1afc:
    // 0x3a1afc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a1afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3a1b00:
    // 0x3a1b00: 0xc0e85a2  jal         func_3A1688
label_3a1b04:
    if (ctx->pc == 0x3A1B04u) {
        ctx->pc = 0x3A1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B00u;
        // 0x3a1b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B08u;
        goto label_3a1b08;
    }
    ctx->pc = 0x3A1B00u;
    SET_GPR_U32(ctx, 31, 0x3A1B08u);
    ctx->pc = 0x3A1B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B00u;
    // 0x3a1b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x3A1B00u, 0x3A1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B08u;
label_3a1b08:
    // 0x3a1b08: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3a1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3a1b0c:
    // 0x3a1b0c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a1b0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3a1b10:
    // 0x3a1b10: 0x7a250010  lq          $a1, 0x10($s1)
    ctx->pc = 0x3a1b10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3a1b14:
    // 0x3a1b14: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3a1b14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3a1b18:
    // 0x3a1b18: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x3a1b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_3a1b1c:
    // 0x3a1b1c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3a1b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_3a1b20:
    // 0x3a1b20: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
label_3a1b24:
    if (ctx->pc == 0x3A1B24u) {
        ctx->pc = 0x3A1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B20u;
        // 0x3a1b24: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B28u;
        goto label_3a1b28;
    }
    ctx->pc = 0x3A1B20u;
    {
        const bool branch_taken_0x3a1b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B20u;
        // 0x3a1b24: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b20) {
            ctx->pc = 0x3A1CACu;
            goto label_3a1cac;
        }
    }
    ctx->pc = 0x3A1B28u;
label_3a1b28:
    // 0x3a1b28: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x3a1b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_3a1b2c:
    // 0x3a1b2c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_3a1b30:
    if (ctx->pc == 0x3A1B30u) {
        ctx->pc = 0x3A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B2Cu;
        // 0x3a1b30: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B34u;
        goto label_3a1b34;
    }
    ctx->pc = 0x3A1B2Cu;
    {
        const bool branch_taken_0x3a1b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B2Cu;
        // 0x3a1b30: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b2c) {
            ctx->pc = 0x3A1C30u;
            goto label_3a1c30;
        }
    }
    ctx->pc = 0x3A1B34u;
label_3a1b34:
    // 0x3a1b34: 0xc0e8630  jal         func_3A18C0
label_3a1b38:
    if (ctx->pc == 0x3A1B38u) {
        ctx->pc = 0x3A1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B34u;
        // 0x3a1b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B3Cu;
        goto label_3a1b3c;
    }
    ctx->pc = 0x3A1B34u;
    SET_GPR_U32(ctx, 31, 0x3A1B3Cu);
    ctx->pc = 0x3A1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B34u;
    // 0x3a1b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3A1B34u, 0x3A1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B3Cu;
label_3a1b3c:
    // 0x3a1b3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a1b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b40:
    // 0x3a1b40: 0x1240005a  beqz        $s2, . + 4 + (0x5A << 2)
label_3a1b44:
    if (ctx->pc == 0x3A1B44u) {
        ctx->pc = 0x3A1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B40u;
        // 0x3a1b44: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B48u;
        goto label_3a1b48;
    }
    ctx->pc = 0x3A1B40u;
    {
        const bool branch_taken_0x3a1b40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B40u;
        // 0x3a1b44: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b40) {
            ctx->pc = 0x3A1CACu;
            goto label_3a1cac;
        }
    }
    ctx->pc = 0x3A1B48u;
label_3a1b48:
    // 0x3a1b48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a1b4c:
    // 0x3a1b4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a1b4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b50:
    // 0x3a1b50: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3a1b50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3a1b54:
    // 0x3a1b54: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x3a1b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3a1b58:
    // 0x3a1b58: 0x60f809  jalr        $v1
label_3a1b5c:
    if (ctx->pc == 0x3A1B5Cu) {
        ctx->pc = 0x3A1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B58u;
        // 0x3a1b5c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B60u;
        goto label_3a1b60;
    }
    ctx->pc = 0x3A1B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1B60u);
        ctx->pc = 0x3A1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B58u;
        // 0x3a1b5c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1B58u, 0x3A1B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1B60u;
label_3a1b60:
    // 0x3a1b60: 0x9222006d  lbu         $v0, 0x6D($s1)
    ctx->pc = 0x3a1b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
label_3a1b64:
    // 0x3a1b64: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_3a1b68:
    if (ctx->pc == 0x3A1B68u) {
        ctx->pc = 0x3A1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B64u;
        // 0x3a1b68: 0x7a220040  lq          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B6Cu;
        goto label_3a1b6c;
    }
    ctx->pc = 0x3A1B64u;
    {
        const bool branch_taken_0x3a1b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1b64) {
            ctx->pc = 0x3A1B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1B64u;
            // 0x3a1b68: 0x7a220040  lq          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1BB8u;
            goto label_3a1bb8;
        }
    }
    ctx->pc = 0x3A1B6Cu;
label_3a1b6c:
    // 0x3a1b6c: 0xc08a61a  jal         func_229868
label_3a1b70:
    if (ctx->pc == 0x3A1B70u) {
        ctx->pc = 0x3A1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B6Cu;
        // 0x3a1b70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B74u;
        goto label_3a1b74;
    }
    ctx->pc = 0x3A1B6Cu;
    SET_GPR_U32(ctx, 31, 0x3A1B74u);
    ctx->pc = 0x3A1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B6Cu;
    // 0x3a1b70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3A1B6Cu, 0x3A1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B74u;
label_3a1b74:
    // 0x3a1b74: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3a1b78:
    if (ctx->pc == 0x3A1B78u) {
        ctx->pc = 0x3A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B74u;
        // 0x3a1b78: 0x7a220040  lq          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B7Cu;
        goto label_3a1b7c;
    }
    ctx->pc = 0x3A1B74u;
    {
        const bool branch_taken_0x3a1b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1b74) {
            ctx->pc = 0x3A1B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1B74u;
            // 0x3a1b78: 0x7a220040  lq          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1BB8u;
            goto label_3a1bb8;
        }
    }
    ctx->pc = 0x3A1B7Cu;
label_3a1b7c:
    // 0x3a1b7c: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x3a1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_3a1b80:
    // 0x3a1b80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3a1b84:
    if (ctx->pc == 0x3A1B84u) {
        ctx->pc = 0x3A1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B80u;
        // 0x3a1b84: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1B88u;
        goto label_3a1b88;
    }
    ctx->pc = 0x3A1B80u;
    {
        const bool branch_taken_0x3a1b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B80u;
        // 0x3a1b84: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b80) {
            ctx->pc = 0x3A1BB4u;
            goto label_3a1bb4;
        }
    }
    ctx->pc = 0x3A1B88u;
label_3a1b88:
    // 0x3a1b88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a1b8c:
    // 0x3a1b8c: 0x9226006d  lbu         $a2, 0x6D($s1)
    ctx->pc = 0x3a1b8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
label_3a1b90:
    // 0x3a1b90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a1b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1b94:
    // 0x3a1b94: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x3a1b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_3a1b98:
    // 0x3a1b98: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3a1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_3a1b9c:
    // 0x3a1b9c: 0x40f809  jalr        $v0
label_3a1ba0:
    if (ctx->pc == 0x3A1BA0u) {
        ctx->pc = 0x3A1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B9Cu;
        // 0x3a1ba0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1BA4u;
        goto label_3a1ba4;
    }
    ctx->pc = 0x3A1B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1BA4u);
        ctx->pc = 0x3A1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B9Cu;
        // 0x3a1ba0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1B9Cu, 0x3A1BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1BA4u;
label_3a1ba4:
    // 0x3a1ba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a1ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ba8:
    // 0x3a1ba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a1ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a1bac:
    // 0x3a1bac: 0xc0cd66c  jal         func_3359B0
label_3a1bb0:
    if (ctx->pc == 0x3A1BB0u) {
        ctx->pc = 0x3A1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BACu;
        // 0x3a1bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1BB4u;
        goto label_3a1bb4;
    }
    ctx->pc = 0x3A1BACu;
    SET_GPR_U32(ctx, 31, 0x3A1BB4u);
    ctx->pc = 0x3A1BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1BACu;
    // 0x3a1bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x3A1BACu, 0x3A1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1BB4u;
label_3a1bb4:
    // 0x3a1bb4: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x3a1bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_3a1bb8:
    // 0x3a1bb8: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x3a1bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3a1bbc:
    // 0x3a1bbc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a1bbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a1bc0:
    // 0x3a1bc0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3a1bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1bc4:
    // 0x3a1bc4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a1bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1bc8:
    // 0x3a1bc8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a1bc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1bcc:
    // 0x3a1bcc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3a1bccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3a1bd0:
    // 0x3a1bd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a1bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a1bd4:
    // 0x3a1bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a1bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a1bd8:
    // 0x3a1bd8: 0x0  nop
    ctx->pc = 0x3a1bd8u;
    // NOP
label_3a1bdc:
    // 0x3a1bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a1bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a1be0:
    // 0x3a1be0: 0x0  nop
    ctx->pc = 0x3a1be0u;
    // NOP
label_3a1be4:
    // 0x3a1be4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_3a1be8:
    if (ctx->pc == 0x3A1BE8u) {
        ctx->pc = 0x3A1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BE4u;
        // 0x3a1be8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1BECu;
        goto label_3a1bec;
    }
    ctx->pc = 0x3A1BE4u;
    {
        const bool branch_taken_0x3a1be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BE4u;
        // 0x3a1be8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1be4) {
            ctx->pc = 0x3A1C10u;
            goto label_3a1c10;
        }
    }
    ctx->pc = 0x3A1BECu;
label_3a1bec:
    // 0x3a1bec: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3a1becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3a1bf0:
    // 0x3a1bf0: 0xc0cd702  jal         func_335C08
label_3a1bf4:
    if (ctx->pc == 0x3A1BF4u) {
        ctx->pc = 0x3A1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BF0u;
        // 0x3a1bf4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1BF8u;
        goto label_3a1bf8;
    }
    ctx->pc = 0x3A1BF0u;
    SET_GPR_U32(ctx, 31, 0x3A1BF8u);
    ctx->pc = 0x3A1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1BF0u;
    // 0x3a1bf4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335C08u, 0x3A1BF0u, 0x3A1BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1BF8u;
label_3a1bf8:
    // 0x3a1bf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a1bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a1bfc:
    // 0x3a1bfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a1bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1c00:
    // 0x3a1c00: 0xc0cd66c  jal         func_3359B0
label_3a1c04:
    if (ctx->pc == 0x3A1C04u) {
        ctx->pc = 0x3A1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C00u;
        // 0x3a1c04: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1C08u;
        goto label_3a1c08;
    }
    ctx->pc = 0x3A1C00u;
    SET_GPR_U32(ctx, 31, 0x3A1C08u);
    ctx->pc = 0x3A1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1C00u;
    // 0x3a1c04: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x3A1C00u, 0x3A1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C08u;
label_3a1c08:
    // 0x3a1c08: 0x10000029  b           . + 4 + (0x29 << 2)
label_3a1c0c:
    if (ctx->pc == 0x3A1C0Cu) {
        ctx->pc = 0x3A1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C08u;
        // 0x3a1c0c: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1C10u;
        goto label_3a1c10;
    }
    ctx->pc = 0x3A1C08u;
    {
        const bool branch_taken_0x3a1c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C08u;
        // 0x3a1c0c: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c08) {
            ctx->pc = 0x3A1CB0u;
            goto label_3a1cb0;
        }
    }
    ctx->pc = 0x3A1C10u;
label_3a1c10:
    // 0x3a1c10: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3a1c10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3a1c14:
    // 0x3a1c14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a1c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a1c18:
    // 0x3a1c18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a1c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1c1c:
    // 0x3a1c1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a1c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1c20:
    // 0x3a1c20: 0xc0cd66c  jal         func_3359B0
label_3a1c24:
    if (ctx->pc == 0x3A1C24u) {
        ctx->pc = 0x3A1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C20u;
        // 0x3a1c24: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1C28u;
        goto label_3a1c28;
    }
    ctx->pc = 0x3A1C20u;
    SET_GPR_U32(ctx, 31, 0x3A1C28u);
    ctx->pc = 0x3A1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1C20u;
    // 0x3a1c24: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x3A1C20u, 0x3A1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C28u;
label_3a1c28:
    // 0x3a1c28: 0x10000021  b           . + 4 + (0x21 << 2)
label_3a1c2c:
    if (ctx->pc == 0x3A1C2Cu) {
        ctx->pc = 0x3A1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C28u;
        // 0x3a1c2c: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1C30u;
        goto label_3a1c30;
    }
    ctx->pc = 0x3A1C28u;
    {
        const bool branch_taken_0x3a1c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C28u;
        // 0x3a1c2c: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c28) {
            ctx->pc = 0x3A1CB0u;
            goto label_3a1cb0;
        }
    }
    ctx->pc = 0x3A1C30u;
label_3a1c30:
    // 0x3a1c30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3a1c34:
    if (ctx->pc == 0x3A1C34u) {
        ctx->pc = 0x3A1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C30u;
        // 0x3a1c34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1C38u;
        goto label_3a1c38;
    }
    ctx->pc = 0x3A1C30u;
    {
        const bool branch_taken_0x3a1c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C30u;
        // 0x3a1c34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c30) {
            ctx->pc = 0x3A1C6Cu;
            goto label_3a1c6c;
        }
    }
    ctx->pc = 0x3A1C38u;
label_3a1c38:
    // 0x3a1c38: 0xc62c0064  lwc1        $f12, 0x64($s1)
    ctx->pc = 0x3a1c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a1c3c:
    // 0x3a1c3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a1c40:
    // 0x3a1c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a1c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a1c44:
    // 0x3a1c44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a1c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1c48:
    // 0x3a1c48: 0x0  nop
    ctx->pc = 0x3a1c48u;
    // NOP
label_3a1c4c:
    // 0x3a1c4c: 0x0  nop
    ctx->pc = 0x3a1c4cu;
    // NOP
label_3a1c50:
    // 0x3a1c50: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x3a1c50u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_3a1c54:
    // 0x3a1c54: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x3a1c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3a1c58:
    // 0x3a1c58: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x3a1c58u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
label_3a1c5c:
    // 0x3a1c5c: 0xc0cdaee  jal         func_336BB8
label_3a1c60:
    if (ctx->pc == 0x3A1C60u) {
        ctx->pc = 0x3A1C64u;
        goto label_3a1c64;
    }
    ctx->pc = 0x3A1C5Cu;
    SET_GPR_U32(ctx, 31, 0x3A1C64u);
    ctx->pc = 0x336BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB8u, 0x3A1C5Cu, 0x3A1C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C64u;
label_3a1c64:
    // 0x3a1c64: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a1c68:
    if (ctx->pc == 0x3A1C68u) {
        ctx->pc = 0x3A1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C64u;
        // 0x3a1c68: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1C6Cu;
        goto label_3a1c6c;
    }
    ctx->pc = 0x3A1C64u;
    {
        const bool branch_taken_0x3a1c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C64u;
        // 0x3a1c68: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c64) {
            ctx->pc = 0x3A1CB0u;
            goto label_3a1cb0;
        }
    }
    ctx->pc = 0x3A1C6Cu;
label_3a1c6c:
    // 0x3a1c6c: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x3a1c6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_3a1c70:
    // 0x3a1c70: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x3a1c70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a1c74:
    // 0x3a1c74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a1c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a1c78:
    // 0x3a1c78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a1c78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a1c7c:
    // 0x3a1c7c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a1c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3a1c80:
    // 0x3a1c80: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a1c80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3a1c84:
    // 0x3a1c84: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3a1c84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3a1c88:
    // 0x3a1c88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3a1c88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a1c8c:
    // 0x3a1c8c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a1c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a1c90:
    // 0x3a1c90: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a1c90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a1c94:
    // 0x3a1c94: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3a1c94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3a1c98:
    // 0x3a1c98: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a1c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3a1c9c:
    // 0x3a1c9c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3a1ca0:
    // 0x3a1ca0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a1ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3a1ca4:
    // 0x3a1ca4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a1ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3a1ca8:
    // 0x3a1ca8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3a1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3a1cac:
    // 0x3a1cac: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3a1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3a1cb0:
    // 0x3a1cb0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3a1cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a1cb4:
    // 0x3a1cb4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_3a1cb8:
    if (ctx->pc == 0x3A1CB8u) {
        ctx->pc = 0x3A1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CB4u;
        // 0x3a1cb8: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1CBCu;
        goto label_3a1cbc;
    }
    ctx->pc = 0x3A1CB4u;
    {
        const bool branch_taken_0x3a1cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CB4u;
        // 0x3a1cb8: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cb4) {
            ctx->pc = 0x3A1D3Cu;
            goto label_3a1d3c;
        }
    }
    ctx->pc = 0x3A1CBCu;
label_3a1cbc:
    // 0x3a1cbc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3a1cc0:
    if (ctx->pc == 0x3A1CC0u) {
        ctx->pc = 0x3A1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CBCu;
        // 0x3a1cc0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1CC4u;
        goto label_3a1cc4;
    }
    ctx->pc = 0x3A1CBCu;
    {
        const bool branch_taken_0x3a1cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CBCu;
        // 0x3a1cc0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cbc) {
            ctx->pc = 0x3A1CF8u;
            goto label_3a1cf8;
        }
    }
    ctx->pc = 0x3A1CC4u;
label_3a1cc4:
    // 0x3a1cc4: 0xc62c0064  lwc1        $f12, 0x64($s1)
    ctx->pc = 0x3a1cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a1cc8:
    // 0x3a1cc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a1ccc:
    // 0x3a1ccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a1cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a1cd0:
    // 0x3a1cd0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3a1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3a1cd4:
    // 0x3a1cd4: 0x0  nop
    ctx->pc = 0x3a1cd4u;
    // NOP
label_3a1cd8:
    // 0x3a1cd8: 0x0  nop
    ctx->pc = 0x3a1cd8u;
    // NOP
label_3a1cdc:
    // 0x3a1cdc: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x3a1cdcu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_3a1ce0:
    // 0x3a1ce0: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x3a1ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3a1ce4:
    // 0x3a1ce4: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x3a1ce4u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
label_3a1ce8:
    // 0x3a1ce8: 0xc0cda80  jal         func_336A00
label_3a1cec:
    if (ctx->pc == 0x3A1CECu) {
        ctx->pc = 0x3A1CF0u;
        goto label_3a1cf0;
    }
    ctx->pc = 0x3A1CE8u;
    SET_GPR_U32(ctx, 31, 0x3A1CF0u);
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x3A1CE8u, 0x3A1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1CF0u;
label_3a1cf0:
    // 0x3a1cf0: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a1cf4:
    if (ctx->pc == 0x3A1CF4u) {
        ctx->pc = 0x3A1CF8u;
        goto label_3a1cf8;
    }
    ctx->pc = 0x3A1CF0u;
    {
        const bool branch_taken_0x3a1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1cf0) {
            ctx->pc = 0x3A1D3Cu;
            goto label_3a1d3c;
        }
    }
    ctx->pc = 0x3A1CF8u;
label_3a1cf8:
    // 0x3a1cf8: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x3a1cf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_3a1cfc:
    // 0x3a1cfc: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x3a1cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3a1d00:
    // 0x3a1d00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a1d00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a1d04:
    // 0x3a1d04: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3a1d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1d08:
    // 0x3a1d08: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a1d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1d0c:
    // 0x3a1d0c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a1d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1d10:
    // 0x3a1d10: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3a1d10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3a1d14:
    // 0x3a1d14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a1d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a1d18:
    // 0x3a1d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a1d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a1d1c:
    // 0x3a1d1c: 0x0  nop
    ctx->pc = 0x3a1d1cu;
    // NOP
label_3a1d20:
    // 0x3a1d20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a1d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a1d24:
    // 0x3a1d24: 0x0  nop
    ctx->pc = 0x3a1d24u;
    // NOP
label_3a1d28:
    // 0x3a1d28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3a1d2c:
    if (ctx->pc == 0x3A1D2Cu) {
        ctx->pc = 0x3A1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D28u;
        // 0x3a1d2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1D30u;
        goto label_3a1d30;
    }
    ctx->pc = 0x3A1D28u;
    {
        const bool branch_taken_0x3a1d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D28u;
        // 0x3a1d2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d28) {
            ctx->pc = 0x3A1D3Cu;
            goto label_3a1d3c;
        }
    }
    ctx->pc = 0x3A1D30u;
label_3a1d30:
    // 0x3a1d30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3a1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a1d34:
    // 0x3a1d34: 0xc0cd702  jal         func_335C08
label_3a1d38:
    if (ctx->pc == 0x3A1D38u) {
        ctx->pc = 0x3A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D34u;
        // 0x3a1d38: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1D3Cu;
        goto label_3a1d3c;
    }
    ctx->pc = 0x3A1D34u;
    SET_GPR_U32(ctx, 31, 0x3A1D3Cu);
    ctx->pc = 0x3A1D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D34u;
    // 0x3a1d38: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335C08u, 0x3A1D34u, 0x3A1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D3Cu;
label_3a1d3c:
    // 0x3a1d3c: 0xc047e6c  jal         func_11F9B0
label_3a1d40:
    if (ctx->pc == 0x3A1D40u) {
        ctx->pc = 0x3A1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D3Cu;
        // 0x3a1d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1D44u;
        goto label_3a1d44;
    }
    ctx->pc = 0x3A1D3Cu;
    SET_GPR_U32(ctx, 31, 0x3A1D44u);
    ctx->pc = 0x3A1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D3Cu;
    // 0x3a1d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A1D3Cu, 0x3A1D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D44u;
label_3a1d44:
    // 0x3a1d44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a1d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1d48:
    // 0x3a1d48: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3a1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3a1d4c:
    // 0x3a1d4c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3a1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_3a1d50:
    // 0x3a1d50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a1d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a1d54:
    // 0x3a1d54: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3a1d58:
    if (ctx->pc == 0x3A1D58u) {
        ctx->pc = 0x3A1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D54u;
        // 0x3a1d58: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1D5Cu;
        goto label_3a1d5c;
    }
    ctx->pc = 0x3A1D54u;
    {
        const bool branch_taken_0x3a1d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D54u;
        // 0x3a1d58: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d54) {
            ctx->pc = 0x3A1DBCu;
            goto label_3a1dbc;
        }
    }
    ctx->pc = 0x3A1D5Cu;
label_3a1d5c:
    // 0x3a1d5c: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
label_3a1d60:
    if (ctx->pc == 0x3A1D60u) {
        ctx->pc = 0x3A1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D5Cu;
        // 0x3a1d60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1D64u;
        goto label_3a1d64;
    }
    ctx->pc = 0x3A1D5Cu;
    {
        const bool branch_taken_0x3a1d5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D5Cu;
        // 0x3a1d60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d5c) {
            ctx->pc = 0x3A1DECu;
            goto label_3a1dec;
        }
    }
    ctx->pc = 0x3A1D64u;
label_3a1d64:
    // 0x3a1d64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a1d68:
    // 0x3a1d68: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3a1d68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3a1d6c:
    // 0x3a1d6c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x3a1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3a1d70:
    // 0x3a1d70: 0x60f809  jalr        $v1
label_3a1d74:
    if (ctx->pc == 0x3A1D74u) {
        ctx->pc = 0x3A1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D70u;
        // 0x3a1d74: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1D78u;
        goto label_3a1d78;
    }
    ctx->pc = 0x3A1D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1D78u);
        ctx->pc = 0x3A1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D70u;
        // 0x3a1d74: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1D70u, 0x3A1D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1D78u;
label_3a1d78:
    // 0x3a1d78: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3a1d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1d7c:
    // 0x3a1d7c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3a1d7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1d80:
    // 0x3a1d80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a1d80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a1d84:
    // 0x3a1d84: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a1d84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a1d88:
    // 0x3a1d88: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3a1d88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1d8c:
    // 0x3a1d8c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a1d8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a1d90:
    // 0x3a1d90: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3a1d90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a1d94:
    // 0x3a1d94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a1d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1d98:
    // 0x3a1d98: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3a1d98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a1d9c:
    // 0x3a1d9c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3a1d9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a1da0:
    // 0x3a1da0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a1da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a1da4:
    // 0x3a1da4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3a1da4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a1da8:
    // 0x3a1da8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3a1da8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a1dac:
    // 0x3a1dac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3a1dacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3a1db0:
    // 0x3a1db0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a1db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3a1db4:
    // 0x3a1db4: 0x1000000f  b           . + 4 + (0xF << 2)
label_3a1db8:
    if (ctx->pc == 0x3A1DB8u) {
        ctx->pc = 0x3A1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DB4u;
        // 0x3a1db8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1DBCu;
        goto label_3a1dbc;
    }
    ctx->pc = 0x3A1DB4u;
    {
        const bool branch_taken_0x3a1db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DB4u;
        // 0x3a1db8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1db4) {
            ctx->pc = 0x3A1DF4u;
            goto label_3a1df4;
        }
    }
    ctx->pc = 0x3A1DBCu;
label_3a1dbc:
    // 0x3a1dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a1dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a1dc0:
    // 0x3a1dc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3a1dc4:
    if (ctx->pc == 0x3A1DC4u) {
        ctx->pc = 0x3A1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DC0u;
        // 0x3a1dc4: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1DC8u;
        goto label_3a1dc8;
    }
    ctx->pc = 0x3A1DC0u;
    {
        const bool branch_taken_0x3a1dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DC0u;
        // 0x3a1dc4: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1dc0) {
            ctx->pc = 0x3A1DF8u;
            goto label_3a1df8;
        }
    }
    ctx->pc = 0x3A1DC8u;
label_3a1dc8:
    // 0x3a1dc8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_3a1dcc:
    if (ctx->pc == 0x3A1DCCu) {
        ctx->pc = 0x3A1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DC8u;
        // 0x3a1dcc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1DD0u;
        goto label_3a1dd0;
    }
    ctx->pc = 0x3A1DC8u;
    {
        const bool branch_taken_0x3a1dc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DC8u;
        // 0x3a1dcc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1dc8) {
            ctx->pc = 0x3A1DECu;
            goto label_3a1dec;
        }
    }
    ctx->pc = 0x3A1DD0u;
label_3a1dd0:
    // 0x3a1dd0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3a1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a1dd4:
    // 0x3a1dd4: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3a1dd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3a1dd8:
    // 0x3a1dd8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x3a1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3a1ddc:
    // 0x3a1ddc: 0x60f809  jalr        $v1
label_3a1de0:
    if (ctx->pc == 0x3A1DE0u) {
        ctx->pc = 0x3A1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DDCu;
        // 0x3a1de0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1DE4u;
        goto label_3a1de4;
    }
    ctx->pc = 0x3A1DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1DE4u);
        ctx->pc = 0x3A1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DDCu;
        // 0x3a1de0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1DDCu, 0x3A1DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1DE4u;
label_3a1de4:
    // 0x3a1de4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a1de8:
    if (ctx->pc == 0x3A1DE8u) {
        ctx->pc = 0x3A1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DE4u;
        // 0x3a1de8: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1DECu;
        goto label_3a1dec;
    }
    ctx->pc = 0x3A1DE4u;
    {
        const bool branch_taken_0x3a1de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DE4u;
        // 0x3a1de8: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1de4) {
            ctx->pc = 0x3A1DF0u;
            goto label_3a1df0;
        }
    }
    ctx->pc = 0x3A1DECu;
label_3a1dec:
    // 0x3a1dec: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3a1decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3a1df0:
    // 0x3a1df0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a1df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3a1df4:
    // 0x3a1df4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3a1df4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1df8:
    // 0x3a1df8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a1df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1dfc:
    // 0x3a1dfc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3a1dfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1e00:
    // 0x3a1e00: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x3a1e00u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
label_3a1e04:
    // 0x3a1e04: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x3a1e04u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
label_3a1e08:
    // 0x3a1e08: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3a1e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a1e0c:
    // 0x3a1e0c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3a1e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a1e10:
    // 0x3a1e10: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3a1e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a1e14:
    // 0x3a1e14: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3a1e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a1e18:
    // 0x3a1e18: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3a1e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a1e1c:
    // 0x3a1e1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a1e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a1e20:
    // 0x3a1e20: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3a1e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a1e24:
    // 0x3a1e24: 0x3e00008  jr          $ra
label_3a1e28:
    if (ctx->pc == 0x3A1E28u) {
        ctx->pc = 0x3A1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E24u;
        // 0x3a1e28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1E2Cu;
        goto label_3a1e2c;
    }
    ctx->pc = 0x3A1E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E24u;
        // 0x3a1e28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1E2Cu;
label_3a1e2c:
    // 0x3a1e2c: 0x0  nop
    ctx->pc = 0x3a1e2cu;
    // NOP
    ctx->pc = 0x3a1e30u;
}
