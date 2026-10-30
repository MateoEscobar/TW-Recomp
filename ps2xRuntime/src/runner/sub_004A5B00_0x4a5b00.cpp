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

// Function: sub_004A5B00
// Address: 0x4a5b00 - 0x4a5e08
void sub_004A5B00_0x4a5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5B00_0x4a5b00");
#endif

    switch (ctx->pc) {
        case 0x4a5b00u: goto label_4a5b00;
        case 0x4a5b04u: goto label_4a5b04;
        case 0x4a5b08u: goto label_4a5b08;
        case 0x4a5b0cu: goto label_4a5b0c;
        case 0x4a5b10u: goto label_4a5b10;
        case 0x4a5b14u: goto label_4a5b14;
        case 0x4a5b18u: goto label_4a5b18;
        case 0x4a5b1cu: goto label_4a5b1c;
        case 0x4a5b20u: goto label_4a5b20;
        case 0x4a5b24u: goto label_4a5b24;
        case 0x4a5b28u: goto label_4a5b28;
        case 0x4a5b2cu: goto label_4a5b2c;
        case 0x4a5b30u: goto label_4a5b30;
        case 0x4a5b34u: goto label_4a5b34;
        case 0x4a5b38u: goto label_4a5b38;
        case 0x4a5b3cu: goto label_4a5b3c;
        case 0x4a5b40u: goto label_4a5b40;
        case 0x4a5b44u: goto label_4a5b44;
        case 0x4a5b48u: goto label_4a5b48;
        case 0x4a5b4cu: goto label_4a5b4c;
        case 0x4a5b50u: goto label_4a5b50;
        case 0x4a5b54u: goto label_4a5b54;
        case 0x4a5b58u: goto label_4a5b58;
        case 0x4a5b5cu: goto label_4a5b5c;
        case 0x4a5b60u: goto label_4a5b60;
        case 0x4a5b64u: goto label_4a5b64;
        case 0x4a5b68u: goto label_4a5b68;
        case 0x4a5b6cu: goto label_4a5b6c;
        case 0x4a5b70u: goto label_4a5b70;
        case 0x4a5b74u: goto label_4a5b74;
        case 0x4a5b78u: goto label_4a5b78;
        case 0x4a5b7cu: goto label_4a5b7c;
        case 0x4a5b80u: goto label_4a5b80;
        case 0x4a5b84u: goto label_4a5b84;
        case 0x4a5b88u: goto label_4a5b88;
        case 0x4a5b8cu: goto label_4a5b8c;
        case 0x4a5b90u: goto label_4a5b90;
        case 0x4a5b94u: goto label_4a5b94;
        case 0x4a5b98u: goto label_4a5b98;
        case 0x4a5b9cu: goto label_4a5b9c;
        case 0x4a5ba0u: goto label_4a5ba0;
        case 0x4a5ba4u: goto label_4a5ba4;
        case 0x4a5ba8u: goto label_4a5ba8;
        case 0x4a5bacu: goto label_4a5bac;
        case 0x4a5bb0u: goto label_4a5bb0;
        case 0x4a5bb4u: goto label_4a5bb4;
        case 0x4a5bb8u: goto label_4a5bb8;
        case 0x4a5bbcu: goto label_4a5bbc;
        case 0x4a5bc0u: goto label_4a5bc0;
        case 0x4a5bc4u: goto label_4a5bc4;
        case 0x4a5bc8u: goto label_4a5bc8;
        case 0x4a5bccu: goto label_4a5bcc;
        case 0x4a5bd0u: goto label_4a5bd0;
        case 0x4a5bd4u: goto label_4a5bd4;
        case 0x4a5bd8u: goto label_4a5bd8;
        case 0x4a5bdcu: goto label_4a5bdc;
        case 0x4a5be0u: goto label_4a5be0;
        case 0x4a5be4u: goto label_4a5be4;
        case 0x4a5be8u: goto label_4a5be8;
        case 0x4a5becu: goto label_4a5bec;
        case 0x4a5bf0u: goto label_4a5bf0;
        case 0x4a5bf4u: goto label_4a5bf4;
        case 0x4a5bf8u: goto label_4a5bf8;
        case 0x4a5bfcu: goto label_4a5bfc;
        case 0x4a5c00u: goto label_4a5c00;
        case 0x4a5c04u: goto label_4a5c04;
        case 0x4a5c08u: goto label_4a5c08;
        case 0x4a5c0cu: goto label_4a5c0c;
        case 0x4a5c10u: goto label_4a5c10;
        case 0x4a5c14u: goto label_4a5c14;
        case 0x4a5c18u: goto label_4a5c18;
        case 0x4a5c1cu: goto label_4a5c1c;
        case 0x4a5c20u: goto label_4a5c20;
        case 0x4a5c24u: goto label_4a5c24;
        case 0x4a5c28u: goto label_4a5c28;
        case 0x4a5c2cu: goto label_4a5c2c;
        case 0x4a5c30u: goto label_4a5c30;
        case 0x4a5c34u: goto label_4a5c34;
        case 0x4a5c38u: goto label_4a5c38;
        case 0x4a5c3cu: goto label_4a5c3c;
        case 0x4a5c40u: goto label_4a5c40;
        case 0x4a5c44u: goto label_4a5c44;
        case 0x4a5c48u: goto label_4a5c48;
        case 0x4a5c4cu: goto label_4a5c4c;
        case 0x4a5c50u: goto label_4a5c50;
        case 0x4a5c54u: goto label_4a5c54;
        case 0x4a5c58u: goto label_4a5c58;
        case 0x4a5c5cu: goto label_4a5c5c;
        case 0x4a5c60u: goto label_4a5c60;
        case 0x4a5c64u: goto label_4a5c64;
        case 0x4a5c68u: goto label_4a5c68;
        case 0x4a5c6cu: goto label_4a5c6c;
        case 0x4a5c70u: goto label_4a5c70;
        case 0x4a5c74u: goto label_4a5c74;
        case 0x4a5c78u: goto label_4a5c78;
        case 0x4a5c7cu: goto label_4a5c7c;
        case 0x4a5c80u: goto label_4a5c80;
        case 0x4a5c84u: goto label_4a5c84;
        case 0x4a5c88u: goto label_4a5c88;
        case 0x4a5c8cu: goto label_4a5c8c;
        case 0x4a5c90u: goto label_4a5c90;
        case 0x4a5c94u: goto label_4a5c94;
        case 0x4a5c98u: goto label_4a5c98;
        case 0x4a5c9cu: goto label_4a5c9c;
        case 0x4a5ca0u: goto label_4a5ca0;
        case 0x4a5ca4u: goto label_4a5ca4;
        case 0x4a5ca8u: goto label_4a5ca8;
        case 0x4a5cacu: goto label_4a5cac;
        case 0x4a5cb0u: goto label_4a5cb0;
        case 0x4a5cb4u: goto label_4a5cb4;
        case 0x4a5cb8u: goto label_4a5cb8;
        case 0x4a5cbcu: goto label_4a5cbc;
        case 0x4a5cc0u: goto label_4a5cc0;
        case 0x4a5cc4u: goto label_4a5cc4;
        case 0x4a5cc8u: goto label_4a5cc8;
        case 0x4a5cccu: goto label_4a5ccc;
        case 0x4a5cd0u: goto label_4a5cd0;
        case 0x4a5cd4u: goto label_4a5cd4;
        case 0x4a5cd8u: goto label_4a5cd8;
        case 0x4a5cdcu: goto label_4a5cdc;
        case 0x4a5ce0u: goto label_4a5ce0;
        case 0x4a5ce4u: goto label_4a5ce4;
        case 0x4a5ce8u: goto label_4a5ce8;
        case 0x4a5cecu: goto label_4a5cec;
        case 0x4a5cf0u: goto label_4a5cf0;
        case 0x4a5cf4u: goto label_4a5cf4;
        case 0x4a5cf8u: goto label_4a5cf8;
        case 0x4a5cfcu: goto label_4a5cfc;
        case 0x4a5d00u: goto label_4a5d00;
        case 0x4a5d04u: goto label_4a5d04;
        case 0x4a5d08u: goto label_4a5d08;
        case 0x4a5d0cu: goto label_4a5d0c;
        case 0x4a5d10u: goto label_4a5d10;
        case 0x4a5d14u: goto label_4a5d14;
        case 0x4a5d18u: goto label_4a5d18;
        case 0x4a5d1cu: goto label_4a5d1c;
        case 0x4a5d20u: goto label_4a5d20;
        case 0x4a5d24u: goto label_4a5d24;
        case 0x4a5d28u: goto label_4a5d28;
        case 0x4a5d2cu: goto label_4a5d2c;
        case 0x4a5d30u: goto label_4a5d30;
        case 0x4a5d34u: goto label_4a5d34;
        case 0x4a5d38u: goto label_4a5d38;
        case 0x4a5d3cu: goto label_4a5d3c;
        case 0x4a5d40u: goto label_4a5d40;
        case 0x4a5d44u: goto label_4a5d44;
        case 0x4a5d48u: goto label_4a5d48;
        case 0x4a5d4cu: goto label_4a5d4c;
        case 0x4a5d50u: goto label_4a5d50;
        case 0x4a5d54u: goto label_4a5d54;
        case 0x4a5d58u: goto label_4a5d58;
        case 0x4a5d5cu: goto label_4a5d5c;
        case 0x4a5d60u: goto label_4a5d60;
        case 0x4a5d64u: goto label_4a5d64;
        case 0x4a5d68u: goto label_4a5d68;
        case 0x4a5d6cu: goto label_4a5d6c;
        case 0x4a5d70u: goto label_4a5d70;
        case 0x4a5d74u: goto label_4a5d74;
        case 0x4a5d78u: goto label_4a5d78;
        case 0x4a5d7cu: goto label_4a5d7c;
        case 0x4a5d80u: goto label_4a5d80;
        case 0x4a5d84u: goto label_4a5d84;
        case 0x4a5d88u: goto label_4a5d88;
        case 0x4a5d8cu: goto label_4a5d8c;
        case 0x4a5d90u: goto label_4a5d90;
        case 0x4a5d94u: goto label_4a5d94;
        case 0x4a5d98u: goto label_4a5d98;
        case 0x4a5d9cu: goto label_4a5d9c;
        case 0x4a5da0u: goto label_4a5da0;
        case 0x4a5da4u: goto label_4a5da4;
        case 0x4a5da8u: goto label_4a5da8;
        case 0x4a5dacu: goto label_4a5dac;
        case 0x4a5db0u: goto label_4a5db0;
        case 0x4a5db4u: goto label_4a5db4;
        case 0x4a5db8u: goto label_4a5db8;
        case 0x4a5dbcu: goto label_4a5dbc;
        case 0x4a5dc0u: goto label_4a5dc0;
        case 0x4a5dc4u: goto label_4a5dc4;
        case 0x4a5dc8u: goto label_4a5dc8;
        case 0x4a5dccu: goto label_4a5dcc;
        case 0x4a5dd0u: goto label_4a5dd0;
        case 0x4a5dd4u: goto label_4a5dd4;
        case 0x4a5dd8u: goto label_4a5dd8;
        case 0x4a5ddcu: goto label_4a5ddc;
        case 0x4a5de0u: goto label_4a5de0;
        case 0x4a5de4u: goto label_4a5de4;
        case 0x4a5de8u: goto label_4a5de8;
        case 0x4a5decu: goto label_4a5dec;
        case 0x4a5df0u: goto label_4a5df0;
        case 0x4a5df4u: goto label_4a5df4;
        case 0x4a5df8u: goto label_4a5df8;
        case 0x4a5dfcu: goto label_4a5dfc;
        case 0x4a5e00u: goto label_4a5e00;
        case 0x4a5e04u: goto label_4a5e04;
        default: break;
    }

    ctx->pc = 0x4a5b00u;

label_4a5b00:
    // 0x4a5b00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a5b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a5b04:
    // 0x4a5b04: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a5b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a5b08:
    // 0x4a5b08: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a5b0c:
    // 0x4a5b0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a5b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a5b10:
    // 0x4a5b10: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4a5b14:
    // 0x4a5b14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a5b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a5b18:
    // 0x4a5b18: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a5b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a5b1c:
    // 0x4a5b1c: 0x3c160071  lui         $s6, 0x71
    ctx->pc = 0x4a5b1cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
label_4a5b20:
    // 0x4a5b20: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a5b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a5b24:
    // 0x4a5b24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a5b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a5b28:
    // 0x4a5b28: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a5b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a5b2c:
    // 0x4a5b2c: 0x1253004f  beq         $s2, $s3, . + 4 + (0x4F << 2)
label_4a5b30:
    if (ctx->pc == 0x4A5B30u) {
        ctx->pc = 0x4A5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B2Cu;
        // 0x4a5b30: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5B34u;
        goto label_4a5b34;
    }
    ctx->pc = 0x4A5B2Cu;
    {
        const bool branch_taken_0x4a5b2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x4A5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B2Cu;
        // 0x4a5b30: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5b2c) {
            ctx->pc = 0x4A5C6Cu;
            goto label_4a5c6c;
        }
    }
    ctx->pc = 0x4A5B34u;
label_4a5b34:
    // 0x4a5b34: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4a5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a5b38:
    // 0x4a5b38: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x4a5b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a5b3c:
    // 0x4a5b3c: 0x6200049  bltz        $s1, . + 4 + (0x49 << 2)
label_4a5b40:
    if (ctx->pc == 0x4A5B40u) {
        ctx->pc = 0x4A5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B3Cu;
        // 0x4a5b40: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5B44u;
        goto label_4a5b44;
    }
    ctx->pc = 0x4A5B3Cu;
    {
        const bool branch_taken_0x4a5b3c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x4A5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B3Cu;
        // 0x4a5b40: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5b3c) {
            ctx->pc = 0x4A5C64u;
            goto label_4a5c64;
        }
    }
    ctx->pc = 0x4A5B44u;
label_4a5b44:
    // 0x4a5b44: 0x26d5ad18  addiu       $s5, $s6, -0x52E8
    ctx->pc = 0x4a5b44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
label_4a5b48:
    // 0x4a5b48: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x4a5b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4a5b4c:
    // 0x4a5b4c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4a5b4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5b50:
    // 0x4a5b50: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4a5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5b54:
    // 0x4a5b54: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4a5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a5b58:
    // 0x4a5b58: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x4a5b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4a5b5c:
    // 0x4a5b5c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4a5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4a5b60:
    // 0x4a5b60: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4a5b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a5b64:
    // 0x4a5b64: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4a5b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a5b68:
    // 0x4a5b68: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x4a5b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a5b6c:
    // 0x4a5b6c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4a5b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a5b70:
    // 0x4a5b70: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4a5b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4a5b74:
    // 0x4a5b74: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4a5b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4a5b78:
    // 0x4a5b78: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x4a5b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4a5b7c:
    // 0x4a5b7c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x4a5b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4a5b80:
    // 0x4a5b80: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x4a5b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5b84:
    // 0x4a5b84: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x4a5b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5b88:
    // 0x4a5b88: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x4a5b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5b8c:
    // 0x4a5b8c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x4a5b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5b90:
    // 0x4a5b90: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x4a5b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5b94:
    // 0x4a5b94: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x4a5b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5b98:
    // 0x4a5b98: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x4a5b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5b9c:
    // 0x4a5b9c: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x4a5b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5ba0:
    // 0x4a5ba0: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x4a5ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a5ba4:
    // 0x4a5ba4: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x4a5ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a5ba8:
    // 0x4a5ba8: 0xb0820027  sdl         $v0, 0x27($a0)
    ctx->pc = 0x4a5ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5bac:
    // 0x4a5bac: 0xb4820020  sdr         $v0, 0x20($a0)
    ctx->pc = 0x4a5bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5bb0:
    // 0x4a5bb0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5bb4:
    // 0x4a5bb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4a5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a5bb8:
    // 0x4a5bb8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4a5bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_4a5bbc:
    // 0x4a5bbc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5bc0:
    // 0x4a5bc0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4a5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4a5bc4:
    // 0x4a5bc4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x4a5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_4a5bc8:
    // 0x4a5bc8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5bcc:
    // 0x4a5bcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4a5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a5bd0:
    // 0x4a5bd0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4a5bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_4a5bd4:
    // 0x4a5bd4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5bd8:
    // 0x4a5bd8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4a5bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4a5bdc:
    // 0x4a5bdc: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x4a5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_4a5be0:
    // 0x4a5be0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5be4:
    // 0x4a5be4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4a5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a5be8:
    // 0x4a5be8: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x4a5be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4a5bec:
    // 0x4a5bec: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_4a5bf0:
    if (ctx->pc == 0x4A5BF0u) {
        ctx->pc = 0x4A5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BECu;
        // 0x4a5bf0: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5BF4u;
        goto label_4a5bf4;
    }
    ctx->pc = 0x4A5BECu;
    {
        const bool branch_taken_0x4a5bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BECu;
        // 0x4a5bf0: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5bec) {
            ctx->pc = 0x4A5C58u;
            goto label_4a5c58;
        }
    }
    ctx->pc = 0x4A5BF4u;
label_4a5bf4:
    // 0x4a5bf4: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x4a5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_4a5bf8:
    // 0x4a5bf8: 0x40f809  jalr        $v0
label_4a5bfc:
    if (ctx->pc == 0x4A5BFCu) {
        ctx->pc = 0x4A5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BF8u;
        // 0x4a5bfc: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5C00u;
        goto label_4a5c00;
    }
    ctx->pc = 0x4A5BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A5C00u);
        ctx->pc = 0x4A5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BF8u;
        // 0x4a5bfc: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5BF8u, 0x4A5C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A5C00u;
label_4a5c00:
    // 0x4a5c00: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5c04:
    // 0x4a5c04: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4a5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4a5c08:
    // 0x4a5c08: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x4a5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_4a5c0c:
    // 0x4a5c0c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5c10:
    // 0x4a5c10: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x4a5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a5c14:
    // 0x4a5c14: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x4a5c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4a5c18:
    // 0x4a5c18: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
label_4a5c1c:
    if (ctx->pc == 0x4A5C1Cu) {
        ctx->pc = 0x4A5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C18u;
        // 0x4a5c1c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5C20u;
        goto label_4a5c20;
    }
    ctx->pc = 0x4A5C18u;
    {
        const bool branch_taken_0x4a5c18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5c18) {
            ctx->pc = 0x4A5C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5C18u;
            // 0x4a5c1c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5C48u;
            goto label_4a5c48;
        }
    }
    ctx->pc = 0x4A5C20u;
label_4a5c20:
    // 0x4a5c20: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x4a5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_4a5c24:
    // 0x4a5c24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a5c28:
    // 0x4a5c28: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x4a5c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_4a5c2c:
    // 0x4a5c2c: 0xc11eff2  jal         func_47BFC8
label_4a5c30:
    if (ctx->pc == 0x4A5C30u) {
        ctx->pc = 0x4A5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C2Cu;
        // 0x4a5c30: 0x8c650024  lw          $a1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5C34u;
        goto label_4a5c34;
    }
    ctx->pc = 0x4A5C2Cu;
    SET_GPR_U32(ctx, 31, 0x4A5C34u);
    ctx->pc = 0x4A5C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C2Cu;
    // 0x4a5c30: 0x8c650024  lw          $a1, 0x24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A5C2Cu, 0x4A5C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C34u;
label_4a5c34:
    // 0x4a5c34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a5c38:
    // 0x4a5c38: 0xc11f024  jal         func_47C090
label_4a5c3c:
    if (ctx->pc == 0x4A5C3Cu) {
        ctx->pc = 0x4A5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C38u;
        // 0x4a5c3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5C40u;
        goto label_4a5c40;
    }
    ctx->pc = 0x4A5C38u;
    SET_GPR_U32(ctx, 31, 0x4A5C40u);
    ctx->pc = 0x4A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C38u;
    // 0x4a5c3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A5C38u, 0x4A5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C40u;
label_4a5c40:
    // 0x4a5c40: 0x10000064  b           . + 4 + (0x64 << 2)
label_4a5c44:
    if (ctx->pc == 0x4A5C44u) {
        ctx->pc = 0x4A5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C40u;
        // 0x4a5c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5C48u;
        goto label_4a5c48;
    }
    ctx->pc = 0x4A5C40u;
    {
        const bool branch_taken_0x4a5c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C40u;
        // 0x4a5c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c40) {
            ctx->pc = 0x4A5DD4u;
            goto label_4a5dd4;
        }
    }
    ctx->pc = 0x4A5C48u;
label_4a5c48:
    // 0x4a5c48: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x4a5c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_4a5c4c:
    // 0x4a5c4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a5c50:
    // 0x4a5c50: 0xc10c190  jal         func_430640
label_4a5c54:
    if (ctx->pc == 0x4A5C54u) {
        ctx->pc = 0x4A5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C50u;
        // 0x4a5c54: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5C58u;
        goto label_4a5c58;
    }
    ctx->pc = 0x4A5C50u;
    SET_GPR_U32(ctx, 31, 0x4A5C58u);
    ctx->pc = 0x4A5C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5C50u;
    // 0x4a5c54: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4A5C50u, 0x4A5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5C58u;
label_4a5c58:
    // 0x4a5c58: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4a5c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4a5c5c:
    // 0x4a5c5c: 0x621ffbc  bgez        $s1, . + 4 + (-0x44 << 2)
label_4a5c60:
    if (ctx->pc == 0x4A5C60u) {
        ctx->pc = 0x4A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C5Cu;
        // 0x4a5c60: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5C64u;
        goto label_4a5c64;
    }
    ctx->pc = 0x4A5C5Cu;
    {
        const bool branch_taken_0x4a5c5c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C5Cu;
        // 0x4a5c60: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c5c) {
            ctx->pc = 0x4A5B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5b50;
        }
    }
    ctx->pc = 0x4A5C64u;
label_4a5c64:
    // 0x4a5c64: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4a5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a5c68:
    // 0x4a5c68: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x4a5c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_4a5c6c:
    // 0x4a5c6c: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a5c70:
    // 0x4a5c70: 0x26c2ad18  addiu       $v0, $s6, -0x52E8
    ctx->pc = 0x4a5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
label_4a5c74:
    // 0x4a5c74: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x4a5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a5c78:
    // 0x4a5c78: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x4a5c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5c7c:
    // 0x4a5c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a5c80:
    // 0x4a5c80: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4a5c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a5c84:
    // 0x4a5c84: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4a5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4a5c88:
    // 0x4a5c88: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x4a5c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4a5c8c:
    // 0x4a5c8c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4a5c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a5c90:
    // 0x4a5c90: 0x6200038  bltz        $s1, . + 4 + (0x38 << 2)
label_4a5c94:
    if (ctx->pc == 0x4A5C94u) {
        ctx->pc = 0x4A5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C90u;
        // 0x4a5c94: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5C98u;
        goto label_4a5c98;
    }
    ctx->pc = 0x4A5C90u;
    {
        const bool branch_taken_0x4a5c90 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x4A5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5C90u;
        // 0x4a5c94: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c90) {
            ctx->pc = 0x4A5D74u;
            goto label_4a5d74;
        }
    }
    ctx->pc = 0x4A5C98u;
label_4a5c98:
    // 0x4a5c98: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x4a5c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a5c9c:
    // 0x4a5c9c: 0x2293818  mult        $a3, $s1, $t1
    ctx->pc = 0x4a5c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_4a5ca0:
    // 0x4a5ca0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4a5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5ca4:
    // 0x4a5ca4: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x4a5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_4a5ca8:
    // 0x4a5ca8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4a5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4a5cac:
    // 0x4a5cac: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4a5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4a5cb0:
    // 0x4a5cb0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4a5cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_4a5cb4:
    // 0x4a5cb4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4a5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a5cb8:
    // 0x4a5cb8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4a5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4a5cbc:
    // 0x4a5cbc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4a5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4a5cc0:
    // 0x4a5cc0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_4a5cc4:
    if (ctx->pc == 0x4A5CC4u) {
        ctx->pc = 0x4A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5CC0u;
        // 0x4a5cc4: 0x2628ffff  addiu       $t0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5CC8u;
        goto label_4a5cc8;
    }
    ctx->pc = 0x4A5CC0u;
    {
        const bool branch_taken_0x4a5cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5CC0u;
        // 0x4a5cc4: 0x2628ffff  addiu       $t0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5cc0) {
            ctx->pc = 0x4A5D68u;
            goto label_4a5d68;
        }
    }
    ctx->pc = 0x4A5CC8u;
label_4a5cc8:
    // 0x4a5cc8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5ccc:
    // 0x4a5ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a5cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5cd0:
    // 0x4a5cd0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x4a5cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4a5cd4:
    // 0x4a5cd4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4a5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4a5cd8:
    // 0x4a5cd8: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x4a5cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4a5cdc:
    // 0x4a5cdc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4a5cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4a5ce0:
    // 0x4a5ce0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_4a5ce4:
    if (ctx->pc == 0x4A5CE4u) {
        ctx->pc = 0x4A5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5CE0u;
        // 0x4a5ce4: 0x24a20080  addiu       $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5CE8u;
        goto label_4a5ce8;
    }
    ctx->pc = 0x4A5CE0u;
    {
        const bool branch_taken_0x4a5ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5CE0u;
        // 0x4a5ce4: 0x24a20080  addiu       $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ce0) {
            ctx->pc = 0x4A5D3Cu;
            goto label_4a5d3c;
        }
    }
    ctx->pc = 0x4A5CE8u;
label_4a5ce8:
    // 0x4a5ce8: 0x68aa0007  ldl         $t2, 0x7($a1)
    ctx->pc = 0x4a5ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4a5cec:
    // 0x4a5cec: 0x6caa0000  ldr         $t2, 0x0($a1)
    ctx->pc = 0x4a5cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4a5cf0:
    // 0x4a5cf0: 0x68ab000f  ldl         $t3, 0xF($a1)
    ctx->pc = 0x4a5cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4a5cf4:
    // 0x4a5cf4: 0x6cab0008  ldr         $t3, 0x8($a1)
    ctx->pc = 0x4a5cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4a5cf8:
    // 0x4a5cf8: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x4a5cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a5cfc:
    // 0x4a5cfc: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x4a5cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a5d00:
    // 0x4a5d00: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x4a5d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4a5d04:
    // 0x4a5d04: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x4a5d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4a5d08:
    // 0x4a5d08: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x4a5d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5d0c:
    // 0x4a5d0c: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x4a5d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5d10:
    // 0x4a5d10: 0xb06b000f  sdl         $t3, 0xF($v1)
    ctx->pc = 0x4a5d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5d14:
    // 0x4a5d14: 0xb46b0008  sdr         $t3, 0x8($v1)
    ctx->pc = 0x4a5d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5d18:
    // 0x4a5d18: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x4a5d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5d1c:
    // 0x4a5d1c: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x4a5d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5d20:
    // 0x4a5d20: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x4a5d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5d24:
    // 0x4a5d24: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x4a5d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5d28:
    // 0x4a5d28: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4a5d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4a5d2c:
    // 0x4a5d2c: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_4a5d30:
    if (ctx->pc == 0x4A5D30u) {
        ctx->pc = 0x4A5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D2Cu;
        // 0x4a5d30: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5D34u;
        goto label_4a5d34;
    }
    ctx->pc = 0x4A5D2Cu;
    {
        const bool branch_taken_0x4a5d2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D2Cu;
        // 0x4a5d30: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d2c) {
            ctx->pc = 0x4A5CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5ce8;
        }
    }
    ctx->pc = 0x4A5D34u;
label_4a5d34:
    // 0x4a5d34: 0x1000000d  b           . + 4 + (0xD << 2)
label_4a5d38:
    if (ctx->pc == 0x4A5D38u) {
        ctx->pc = 0x4A5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D34u;
        // 0x4a5d38: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5D3Cu;
        goto label_4a5d3c;
    }
    ctx->pc = 0x4A5D34u;
    {
        const bool branch_taken_0x4a5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D34u;
        // 0x4a5d38: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d34) {
            ctx->pc = 0x4A5D6Cu;
            goto label_4a5d6c;
        }
    }
    ctx->pc = 0x4A5D3Cu;
label_4a5d3c:
    // 0x4a5d3c: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x4a5d3cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_4a5d40:
    // 0x4a5d40: 0xdcab0008  ld          $t3, 0x8($a1)
    ctx->pc = 0x4a5d40u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_4a5d44:
    // 0x4a5d44: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x4a5d44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_4a5d48:
    // 0x4a5d48: 0xdca70018  ld          $a3, 0x18($a1)
    ctx->pc = 0x4a5d48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_4a5d4c:
    // 0x4a5d4c: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x4a5d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
label_4a5d50:
    // 0x4a5d50: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x4a5d50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
label_4a5d54:
    // 0x4a5d54: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x4a5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
label_4a5d58:
    // 0x4a5d58: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x4a5d58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
label_4a5d5c:
    // 0x4a5d5c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4a5d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4a5d60:
    // 0x4a5d60: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_4a5d64:
    if (ctx->pc == 0x4A5D64u) {
        ctx->pc = 0x4A5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D60u;
        // 0x4a5d64: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5D68u;
        goto label_4a5d68;
    }
    ctx->pc = 0x4A5D60u;
    {
        const bool branch_taken_0x4a5d60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D60u;
        // 0x4a5d64: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d60) {
            ctx->pc = 0x4A5D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5d3c;
        }
    }
    ctx->pc = 0x4A5D68u;
label_4a5d68:
    // 0x4a5d68: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4a5d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a5d6c:
    // 0x4a5d6c: 0x621ffcc  bgez        $s1, . + 4 + (-0x34 << 2)
label_4a5d70:
    if (ctx->pc == 0x4A5D70u) {
        ctx->pc = 0x4A5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D6Cu;
        // 0x4a5d70: 0x2293818  mult        $a3, $s1, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5D74u;
        goto label_4a5d74;
    }
    ctx->pc = 0x4A5D6Cu;
    {
        const bool branch_taken_0x4a5d6c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4A5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D6Cu;
        // 0x4a5d70: 0x2293818  mult        $a3, $s1, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d6c) {
            ctx->pc = 0x4A5CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5ca0;
        }
    }
    ctx->pc = 0x4A5D74u;
label_4a5d74:
    // 0x4a5d74: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a5d78:
    // 0x4a5d78: 0x26c4ad18  addiu       $a0, $s6, -0x52E8
    ctx->pc = 0x4a5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
label_4a5d7c:
    // 0x4a5d7c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4a5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a5d80:
    // 0x4a5d80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a5d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5d84:
    // 0x4a5d84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a5d88:
    // 0x4a5d88: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4a5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4a5d8c:
    // 0x4a5d8c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4a5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_4a5d90:
    // 0x4a5d90: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_4a5d94:
    if (ctx->pc == 0x4A5D94u) {
        ctx->pc = 0x4A5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D90u;
        // 0x4a5d94: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5D98u;
        goto label_4a5d98;
    }
    ctx->pc = 0x4A5D90u;
    {
        const bool branch_taken_0x4a5d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5D90u;
        // 0x4a5d94: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5d90) {
            ctx->pc = 0x4A5DD0u;
            goto label_4a5dd0;
        }
    }
    ctx->pc = 0x4A5D98u;
label_4a5d98:
    // 0x4a5d98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a5d98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5d9c:
    // 0x4a5d9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a5d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5da0:
    // 0x4a5da0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4a5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4a5da4:
    // 0x4a5da4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a5da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a5da8:
    // 0x4a5da8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4a5da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_4a5dac:
    // 0x4a5dac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4a5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_4a5db0:
    // 0x4a5db0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a5db4:
    // 0x4a5db4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4a5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4a5db8:
    // 0x4a5db8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x4a5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_4a5dbc:
    // 0x4a5dbc: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x4a5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_4a5dc0:
    // 0x4a5dc0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4a5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a5dc4:
    // 0x4a5dc4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a5dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a5dc8:
    // 0x4a5dc8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4a5dcc:
    if (ctx->pc == 0x4A5DCCu) {
        ctx->pc = 0x4A5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DC8u;
        // 0x4a5dcc: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5DD0u;
        goto label_4a5dd0;
    }
    ctx->pc = 0x4A5DC8u;
    {
        const bool branch_taken_0x4a5dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DC8u;
        // 0x4a5dcc: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5dc8) {
            ctx->pc = 0x4A5DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5da0;
        }
    }
    ctx->pc = 0x4A5DD0u;
label_4a5dd0:
    // 0x4a5dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5dd4:
    // 0x4a5dd4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a5dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a5dd8:
    // 0x4a5dd8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a5dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a5ddc:
    // 0x4a5ddc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a5ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a5de0:
    // 0x4a5de0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a5de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a5de4:
    // 0x4a5de4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a5de4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a5de8:
    // 0x4a5de8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a5de8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a5dec:
    // 0x4a5dec: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a5decu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a5df0:
    // 0x4a5df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a5df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5df4:
    // 0x4a5df4: 0x3e00008  jr          $ra
label_4a5df8:
    if (ctx->pc == 0x4A5DF8u) {
        ctx->pc = 0x4A5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DF4u;
        // 0x4a5df8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5DFCu;
        goto label_4a5dfc;
    }
    ctx->pc = 0x4A5DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5DF4u;
        // 0x4a5df8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5DFCu;
label_4a5dfc:
    // 0x4a5dfc: 0x0  nop
    ctx->pc = 0x4a5dfcu;
    // NOP
label_4a5e00:
    // 0x4a5e00: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x4a5e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4a5e04:
    // 0x4a5e04: 0x0  nop
    ctx->pc = 0x4a5e04u;
    // NOP
    ctx->pc = 0x4a5e08u;
}
