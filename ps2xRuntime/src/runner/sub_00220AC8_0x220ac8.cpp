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

// Function: sub_00220AC8
// Address: 0x220ac8 - 0x220df0
void sub_00220AC8_0x220ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220AC8_0x220ac8");
#endif

    switch (ctx->pc) {
        case 0x220ac8u: goto label_220ac8;
        case 0x220accu: goto label_220acc;
        case 0x220ad0u: goto label_220ad0;
        case 0x220ad4u: goto label_220ad4;
        case 0x220ad8u: goto label_220ad8;
        case 0x220adcu: goto label_220adc;
        case 0x220ae0u: goto label_220ae0;
        case 0x220ae4u: goto label_220ae4;
        case 0x220ae8u: goto label_220ae8;
        case 0x220aecu: goto label_220aec;
        case 0x220af0u: goto label_220af0;
        case 0x220af4u: goto label_220af4;
        case 0x220af8u: goto label_220af8;
        case 0x220afcu: goto label_220afc;
        case 0x220b00u: goto label_220b00;
        case 0x220b04u: goto label_220b04;
        case 0x220b08u: goto label_220b08;
        case 0x220b0cu: goto label_220b0c;
        case 0x220b10u: goto label_220b10;
        case 0x220b14u: goto label_220b14;
        case 0x220b18u: goto label_220b18;
        case 0x220b1cu: goto label_220b1c;
        case 0x220b20u: goto label_220b20;
        case 0x220b24u: goto label_220b24;
        case 0x220b28u: goto label_220b28;
        case 0x220b2cu: goto label_220b2c;
        case 0x220b30u: goto label_220b30;
        case 0x220b34u: goto label_220b34;
        case 0x220b38u: goto label_220b38;
        case 0x220b3cu: goto label_220b3c;
        case 0x220b40u: goto label_220b40;
        case 0x220b44u: goto label_220b44;
        case 0x220b48u: goto label_220b48;
        case 0x220b4cu: goto label_220b4c;
        case 0x220b50u: goto label_220b50;
        case 0x220b54u: goto label_220b54;
        case 0x220b58u: goto label_220b58;
        case 0x220b5cu: goto label_220b5c;
        case 0x220b60u: goto label_220b60;
        case 0x220b64u: goto label_220b64;
        case 0x220b68u: goto label_220b68;
        case 0x220b6cu: goto label_220b6c;
        case 0x220b70u: goto label_220b70;
        case 0x220b74u: goto label_220b74;
        case 0x220b78u: goto label_220b78;
        case 0x220b7cu: goto label_220b7c;
        case 0x220b80u: goto label_220b80;
        case 0x220b84u: goto label_220b84;
        case 0x220b88u: goto label_220b88;
        case 0x220b8cu: goto label_220b8c;
        case 0x220b90u: goto label_220b90;
        case 0x220b94u: goto label_220b94;
        case 0x220b98u: goto label_220b98;
        case 0x220b9cu: goto label_220b9c;
        case 0x220ba0u: goto label_220ba0;
        case 0x220ba4u: goto label_220ba4;
        case 0x220ba8u: goto label_220ba8;
        case 0x220bacu: goto label_220bac;
        case 0x220bb0u: goto label_220bb0;
        case 0x220bb4u: goto label_220bb4;
        case 0x220bb8u: goto label_220bb8;
        case 0x220bbcu: goto label_220bbc;
        case 0x220bc0u: goto label_220bc0;
        case 0x220bc4u: goto label_220bc4;
        case 0x220bc8u: goto label_220bc8;
        case 0x220bccu: goto label_220bcc;
        case 0x220bd0u: goto label_220bd0;
        case 0x220bd4u: goto label_220bd4;
        case 0x220bd8u: goto label_220bd8;
        case 0x220bdcu: goto label_220bdc;
        case 0x220be0u: goto label_220be0;
        case 0x220be4u: goto label_220be4;
        case 0x220be8u: goto label_220be8;
        case 0x220becu: goto label_220bec;
        case 0x220bf0u: goto label_220bf0;
        case 0x220bf4u: goto label_220bf4;
        case 0x220bf8u: goto label_220bf8;
        case 0x220bfcu: goto label_220bfc;
        case 0x220c00u: goto label_220c00;
        case 0x220c04u: goto label_220c04;
        case 0x220c08u: goto label_220c08;
        case 0x220c0cu: goto label_220c0c;
        case 0x220c10u: goto label_220c10;
        case 0x220c14u: goto label_220c14;
        case 0x220c18u: goto label_220c18;
        case 0x220c1cu: goto label_220c1c;
        case 0x220c20u: goto label_220c20;
        case 0x220c24u: goto label_220c24;
        case 0x220c28u: goto label_220c28;
        case 0x220c2cu: goto label_220c2c;
        case 0x220c30u: goto label_220c30;
        case 0x220c34u: goto label_220c34;
        case 0x220c38u: goto label_220c38;
        case 0x220c3cu: goto label_220c3c;
        case 0x220c40u: goto label_220c40;
        case 0x220c44u: goto label_220c44;
        case 0x220c48u: goto label_220c48;
        case 0x220c4cu: goto label_220c4c;
        case 0x220c50u: goto label_220c50;
        case 0x220c54u: goto label_220c54;
        case 0x220c58u: goto label_220c58;
        case 0x220c5cu: goto label_220c5c;
        case 0x220c60u: goto label_220c60;
        case 0x220c64u: goto label_220c64;
        case 0x220c68u: goto label_220c68;
        case 0x220c6cu: goto label_220c6c;
        case 0x220c70u: goto label_220c70;
        case 0x220c74u: goto label_220c74;
        case 0x220c78u: goto label_220c78;
        case 0x220c7cu: goto label_220c7c;
        case 0x220c80u: goto label_220c80;
        case 0x220c84u: goto label_220c84;
        case 0x220c88u: goto label_220c88;
        case 0x220c8cu: goto label_220c8c;
        case 0x220c90u: goto label_220c90;
        case 0x220c94u: goto label_220c94;
        case 0x220c98u: goto label_220c98;
        case 0x220c9cu: goto label_220c9c;
        case 0x220ca0u: goto label_220ca0;
        case 0x220ca4u: goto label_220ca4;
        case 0x220ca8u: goto label_220ca8;
        case 0x220cacu: goto label_220cac;
        case 0x220cb0u: goto label_220cb0;
        case 0x220cb4u: goto label_220cb4;
        case 0x220cb8u: goto label_220cb8;
        case 0x220cbcu: goto label_220cbc;
        case 0x220cc0u: goto label_220cc0;
        case 0x220cc4u: goto label_220cc4;
        case 0x220cc8u: goto label_220cc8;
        case 0x220cccu: goto label_220ccc;
        case 0x220cd0u: goto label_220cd0;
        case 0x220cd4u: goto label_220cd4;
        case 0x220cd8u: goto label_220cd8;
        case 0x220cdcu: goto label_220cdc;
        case 0x220ce0u: goto label_220ce0;
        case 0x220ce4u: goto label_220ce4;
        case 0x220ce8u: goto label_220ce8;
        case 0x220cecu: goto label_220cec;
        case 0x220cf0u: goto label_220cf0;
        case 0x220cf4u: goto label_220cf4;
        case 0x220cf8u: goto label_220cf8;
        case 0x220cfcu: goto label_220cfc;
        case 0x220d00u: goto label_220d00;
        case 0x220d04u: goto label_220d04;
        case 0x220d08u: goto label_220d08;
        case 0x220d0cu: goto label_220d0c;
        case 0x220d10u: goto label_220d10;
        case 0x220d14u: goto label_220d14;
        case 0x220d18u: goto label_220d18;
        case 0x220d1cu: goto label_220d1c;
        case 0x220d20u: goto label_220d20;
        case 0x220d24u: goto label_220d24;
        case 0x220d28u: goto label_220d28;
        case 0x220d2cu: goto label_220d2c;
        case 0x220d30u: goto label_220d30;
        case 0x220d34u: goto label_220d34;
        case 0x220d38u: goto label_220d38;
        case 0x220d3cu: goto label_220d3c;
        case 0x220d40u: goto label_220d40;
        case 0x220d44u: goto label_220d44;
        case 0x220d48u: goto label_220d48;
        case 0x220d4cu: goto label_220d4c;
        case 0x220d50u: goto label_220d50;
        case 0x220d54u: goto label_220d54;
        case 0x220d58u: goto label_220d58;
        case 0x220d5cu: goto label_220d5c;
        case 0x220d60u: goto label_220d60;
        case 0x220d64u: goto label_220d64;
        case 0x220d68u: goto label_220d68;
        case 0x220d6cu: goto label_220d6c;
        case 0x220d70u: goto label_220d70;
        case 0x220d74u: goto label_220d74;
        case 0x220d78u: goto label_220d78;
        case 0x220d7cu: goto label_220d7c;
        case 0x220d80u: goto label_220d80;
        case 0x220d84u: goto label_220d84;
        case 0x220d88u: goto label_220d88;
        case 0x220d8cu: goto label_220d8c;
        case 0x220d90u: goto label_220d90;
        case 0x220d94u: goto label_220d94;
        case 0x220d98u: goto label_220d98;
        case 0x220d9cu: goto label_220d9c;
        case 0x220da0u: goto label_220da0;
        case 0x220da4u: goto label_220da4;
        case 0x220da8u: goto label_220da8;
        case 0x220dacu: goto label_220dac;
        case 0x220db0u: goto label_220db0;
        case 0x220db4u: goto label_220db4;
        case 0x220db8u: goto label_220db8;
        case 0x220dbcu: goto label_220dbc;
        case 0x220dc0u: goto label_220dc0;
        case 0x220dc4u: goto label_220dc4;
        case 0x220dc8u: goto label_220dc8;
        case 0x220dccu: goto label_220dcc;
        case 0x220dd0u: goto label_220dd0;
        case 0x220dd4u: goto label_220dd4;
        case 0x220dd8u: goto label_220dd8;
        case 0x220ddcu: goto label_220ddc;
        case 0x220de0u: goto label_220de0;
        case 0x220de4u: goto label_220de4;
        case 0x220de8u: goto label_220de8;
        case 0x220decu: goto label_220dec;
        default: break;
    }

    ctx->pc = 0x220ac8u;

label_220ac8:
    // 0x220ac8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x220ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_220acc:
    // 0x220acc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x220accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_220ad0:
    // 0x220ad0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x220ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_220ad4:
    // 0x220ad4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x220ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_220ad8:
    // 0x220ad8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x220ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_220adc:
    // 0x220adc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x220adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_220ae0:
    // 0x220ae0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x220ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_220ae4:
    // 0x220ae4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x220ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_220ae8:
    // 0x220ae8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x220ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_220aec:
    // 0x220aec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x220aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_220af0:
    // 0x220af0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x220af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_220af4:
    // 0x220af4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x220af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_220af8:
    // 0x220af8: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x220af8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_220afc:
    // 0x220afc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x220afcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_220b00:
    // 0x220b00: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x220b00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_220b04:
    // 0x220b04: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x220b04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_220b08:
    // 0x220b08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x220b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_220b0c:
    // 0x220b0c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x220b0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_220b10:
    // 0x220b10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x220b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_220b14:
    // 0x220b14: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x220b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_220b18:
    // 0x220b18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220b1c:
    // 0x220b1c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x220b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_220b20:
    // 0x220b20: 0x84820092  lh          $v0, 0x92($a0)
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_220b24:
    // 0x220b24: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x220b24u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
label_220b28:
    // 0x220b28: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x220b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_220b2c:
    // 0x220b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220b30:
    // 0x220b30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x220b30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_220b34:
    // 0x220b34: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_220b38:
    if (ctx->pc == 0x220B38u) {
        ctx->pc = 0x220B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B34u;
        // 0x220b38: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B3Cu;
        goto label_220b3c;
    }
    ctx->pc = 0x220B34u;
    {
        const bool branch_taken_0x220b34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B34u;
        // 0x220b38: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b34) {
            ctx->pc = 0x220B48u;
            goto label_220b48;
        }
    }
    ctx->pc = 0x220B3Cu;
label_220b3c:
    // 0x220b3c: 0xc0878ea  jal         func_21E3A8
label_220b40:
    if (ctx->pc == 0x220B40u) {
        ctx->pc = 0x220B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B3Cu;
        // 0x220b40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B44u;
        goto label_220b44;
    }
    ctx->pc = 0x220B3Cu;
    SET_GPR_U32(ctx, 31, 0x220B44u);
    ctx->pc = 0x220B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B3Cu;
    // 0x220b40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3A8u, 0x220B3Cu, 0x220B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B44u;
label_220b44:
    // 0x220b44: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x220b44u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_220b48:
    // 0x220b48: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_220b4c:
    if (ctx->pc == 0x220B4Cu) {
        ctx->pc = 0x220B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B48u;
        // 0x220b4c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B50u;
        goto label_220b50;
    }
    ctx->pc = 0x220B48u;
    {
        const bool branch_taken_0x220b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x220b48) {
            ctx->pc = 0x220B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220B48u;
            // 0x220b4c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220B90u;
            goto label_220b90;
        }
    }
    ctx->pc = 0x220B50u;
label_220b50:
    // 0x220b50: 0xc088ee6  jal         func_223B98
label_220b54:
    if (ctx->pc == 0x220B54u) {
        ctx->pc = 0x220B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B50u;
        // 0x220b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B58u;
        goto label_220b58;
    }
    ctx->pc = 0x220B50u;
    SET_GPR_U32(ctx, 31, 0x220B58u);
    ctx->pc = 0x220B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B50u;
    // 0x220b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x220B50u, 0x220B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B58u;
label_220b58:
    // 0x220b58: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_220b5c:
    if (ctx->pc == 0x220B5Cu) {
        ctx->pc = 0x220B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B58u;
        // 0x220b5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B60u;
        goto label_220b60;
    }
    ctx->pc = 0x220B58u;
    {
        const bool branch_taken_0x220b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B58u;
        // 0x220b5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b58) {
            ctx->pc = 0x220B8Cu;
            goto label_220b8c;
        }
    }
    ctx->pc = 0x220B60u;
label_220b60:
    // 0x220b60: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_220b64:
    if (ctx->pc == 0x220B64u) {
        ctx->pc = 0x220B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B60u;
        // 0x220b64: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B68u;
        goto label_220b68;
    }
    ctx->pc = 0x220B60u;
    {
        const bool branch_taken_0x220b60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x220B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B60u;
        // 0x220b64: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b60) {
            ctx->pc = 0x220B70u;
            goto label_220b70;
        }
    }
    ctx->pc = 0x220B68u;
label_220b68:
    // 0x220b68: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_220b6c:
    if (ctx->pc == 0x220B6Cu) {
        ctx->pc = 0x220B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B68u;
        // 0x220b6c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B70u;
        goto label_220b70;
    }
    ctx->pc = 0x220B68u;
    {
        const bool branch_taken_0x220b68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x220B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B68u;
        // 0x220b6c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b68) {
            ctx->pc = 0x220B78u;
            goto label_220b78;
        }
    }
    ctx->pc = 0x220B70u;
label_220b70:
    // 0x220b70: 0x2411009f  addiu       $s1, $zero, 0x9F
    ctx->pc = 0x220b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_220b74:
    // 0x220b74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x220b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_220b78:
    // 0x220b78: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_220b7c:
    if (ctx->pc == 0x220B7Cu) {
        ctx->pc = 0x220B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B78u;
        // 0x220b7c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B80u;
        goto label_220b80;
    }
    ctx->pc = 0x220B78u;
    {
        const bool branch_taken_0x220b78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x220B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B78u;
        // 0x220b7c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b78) {
            ctx->pc = 0x220B88u;
            goto label_220b88;
        }
    }
    ctx->pc = 0x220B80u;
label_220b80:
    // 0x220b80: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_220b84:
    if (ctx->pc == 0x220B84u) {
        ctx->pc = 0x220B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B80u;
        // 0x220b84: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B88u;
        goto label_220b88;
    }
    ctx->pc = 0x220B80u;
    {
        const bool branch_taken_0x220b80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x220B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B80u;
        // 0x220b84: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b80) {
            ctx->pc = 0x220B90u;
            goto label_220b90;
        }
    }
    ctx->pc = 0x220B88u;
label_220b88:
    // 0x220b88: 0x2412009f  addiu       $s2, $zero, 0x9F
    ctx->pc = 0x220b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_220b8c:
    // 0x220b8c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x220b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_220b90:
    // 0x220b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x220b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220b94:
    // 0x220b94: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x220b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_220b98:
    // 0x220b98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x220b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220b9c:
    // 0x220b9c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x220b9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_220ba0:
    // 0x220ba0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x220ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_220ba4:
    // 0x220ba4: 0x248401e0  addiu       $a0, $a0, 0x1E0
    ctx->pc = 0x220ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
label_220ba8:
    // 0x220ba8: 0xc0451b0  jal         func_1146C0
label_220bac:
    if (ctx->pc == 0x220BACu) {
        ctx->pc = 0x220BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BA8u;
        // 0x220bac: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220BB0u;
        goto label_220bb0;
    }
    ctx->pc = 0x220BA8u;
    SET_GPR_U32(ctx, 31, 0x220BB0u);
    ctx->pc = 0x220BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220BA8u;
    // 0x220bac: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1146C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1146C0u, 0x220BA8u, 0x220BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BB0u;
label_220bb0:
    // 0x220bb0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x220bb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220bb4:
    // 0x220bb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220bb8:
    // 0x220bb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220bbc:
    // 0x220bbc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x220bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_220bc0:
    // 0x220bc0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x220bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_220bc4:
    // 0x220bc4: 0xc044594  jal         func_111650
label_220bc8:
    if (ctx->pc == 0x220BC8u) {
        ctx->pc = 0x220BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BC4u;
        // 0x220bc8: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x220BCCu;
        goto label_220bcc;
    }
    ctx->pc = 0x220BC4u;
    SET_GPR_U32(ctx, 31, 0x220BCCu);
    ctx->pc = 0x220BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220BC4u;
    // 0x220bc8: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x220BC4u, 0x220BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BCCu;
label_220bcc:
    // 0x220bcc: 0x52600068  beql        $s3, $zero, . + 4 + (0x68 << 2)
label_220bd0:
    if (ctx->pc == 0x220BD0u) {
        ctx->pc = 0x220BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BCCu;
        // 0x220bd0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220BD4u;
        goto label_220bd4;
    }
    ctx->pc = 0x220BCCu;
    {
        const bool branch_taken_0x220bcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x220bcc) {
            ctx->pc = 0x220BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220BCCu;
            // 0x220bd0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220D70u;
            goto label_220d70;
        }
    }
    ctx->pc = 0x220BD4u;
label_220bd4:
    // 0x220bd4: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x220bd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_220bd8:
    // 0x220bd8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x220bd8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_220bdc:
    // 0x220bdc: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
label_220be0:
    if (ctx->pc == 0x220BE0u) {
        ctx->pc = 0x220BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BDCu;
        // 0x220be0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220BE4u;
        goto label_220be4;
    }
    ctx->pc = 0x220BDCu;
    {
        const bool branch_taken_0x220bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220bdc) {
            ctx->pc = 0x220BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220BDCu;
            // 0x220be0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220D70u;
            goto label_220d70;
        }
    }
    ctx->pc = 0x220BE4u;
label_220be4:
    // 0x220be4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x220be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_220be8:
    // 0x220be8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x220be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_220bec:
    // 0x220bec: 0xc08cf14  jal         func_233C50
label_220bf0:
    if (ctx->pc == 0x220BF0u) {
        ctx->pc = 0x220BF4u;
        goto label_220bf4;
    }
    ctx->pc = 0x220BECu;
    SET_GPR_U32(ctx, 31, 0x220BF4u);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x220BECu, 0x220BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BF4u;
label_220bf4:
    // 0x220bf4: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_220bf8:
    if (ctx->pc == 0x220BF8u) {
        ctx->pc = 0x220BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BF4u;
        // 0x220bf8: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220BFCu;
        goto label_220bfc;
    }
    ctx->pc = 0x220BF4u;
    {
        const bool branch_taken_0x220bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BF4u;
        // 0x220bf8: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bf4) {
            ctx->pc = 0x220D1Cu;
            goto label_220d1c;
        }
    }
    ctx->pc = 0x220BFCu;
label_220bfc:
    // 0x220bfc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x220bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_220c00:
    // 0x220c00: 0x2610b8b0  addiu       $s0, $s0, -0x4750
    ctx->pc = 0x220c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949040));
label_220c04:
    // 0x220c04: 0xc0cd4ee  jal         func_3353B8
label_220c08:
    if (ctx->pc == 0x220C08u) {
        ctx->pc = 0x220C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C04u;
        // 0x220c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C0Cu;
        goto label_220c0c;
    }
    ctx->pc = 0x220C04u;
    SET_GPR_U32(ctx, 31, 0x220C0Cu);
    ctx->pc = 0x220C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C04u;
    // 0x220c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x220C04u, 0x220C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C0Cu;
label_220c0c:
    // 0x220c0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x220c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_220c10:
    // 0x220c10: 0xc0cd4e4  jal         func_335390
label_220c14:
    if (ctx->pc == 0x220C14u) {
        ctx->pc = 0x220C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C10u;
        // 0x220c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C18u;
        goto label_220c18;
    }
    ctx->pc = 0x220C10u;
    SET_GPR_U32(ctx, 31, 0x220C18u);
    ctx->pc = 0x220C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C10u;
    // 0x220c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x220C10u, 0x220C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C18u;
label_220c18:
    // 0x220c18: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x220c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_220c1c:
    // 0x220c1c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x220c1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_220c20:
    // 0x220c20: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_220c24:
    if (ctx->pc == 0x220C24u) {
        ctx->pc = 0x220C28u;
        goto label_220c28;
    }
    ctx->pc = 0x220C20u;
    {
        const bool branch_taken_0x220c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c20) {
            ctx->pc = 0x220C7Cu;
            goto label_220c7c;
        }
    }
    ctx->pc = 0x220C28u;
label_220c28:
    // 0x220c28: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_220c2c:
    if (ctx->pc == 0x220C2Cu) {
        ctx->pc = 0x220C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C28u;
        // 0x220c2c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C30u;
        goto label_220c30;
    }
    ctx->pc = 0x220C28u;
    {
        const bool branch_taken_0x220c28 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x220C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C28u;
        // 0x220c2c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c28) {
            ctx->pc = 0x220C44u;
            goto label_220c44;
        }
    }
    ctx->pc = 0x220C30u;
label_220c30:
    // 0x220c30: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x220c30u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_220c34:
    // 0x220c34: 0x0  nop
    ctx->pc = 0x220c34u;
    // NOP
label_220c38:
    // 0x220c38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x220c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_220c3c:
    // 0x220c3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_220c40:
    if (ctx->pc == 0x220C40u) {
        ctx->pc = 0x220C44u;
        goto label_220c44;
    }
    ctx->pc = 0x220C3Cu;
    {
        const bool branch_taken_0x220c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c3c) {
            ctx->pc = 0x220C5Cu;
            goto label_220c5c;
        }
    }
    ctx->pc = 0x220C44u;
label_220c44:
    // 0x220c44: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x220c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_220c48:
    // 0x220c48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x220c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_220c4c:
    // 0x220c4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x220c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_220c50:
    // 0x220c50: 0x0  nop
    ctx->pc = 0x220c50u;
    // NOP
label_220c54:
    // 0x220c54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x220c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_220c58:
    // 0x220c58: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x220c58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_220c5c:
    // 0x220c5c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_220c60:
    // 0x220c60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x220c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_220c64:
    // 0x220c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220c68:
    // 0x220c68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220c6c:
    // 0x220c6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x220c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_220c70:
    // 0x220c70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x220c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_220c74:
    // 0x220c74: 0x10000015  b           . + 4 + (0x15 << 2)
label_220c78:
    if (ctx->pc == 0x220C78u) {
        ctx->pc = 0x220C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C74u;
        // 0x220c78: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C7Cu;
        goto label_220c7c;
    }
    ctx->pc = 0x220C74u;
    {
        const bool branch_taken_0x220c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C74u;
        // 0x220c78: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c74) {
            ctx->pc = 0x220CCCu;
            goto label_220ccc;
        }
    }
    ctx->pc = 0x220C7Cu;
label_220c7c:
    // 0x220c7c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_220c80:
    if (ctx->pc == 0x220C80u) {
        ctx->pc = 0x220C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C7Cu;
        // 0x220c80: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C84u;
        goto label_220c84;
    }
    ctx->pc = 0x220C7Cu;
    {
        const bool branch_taken_0x220c7c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x220C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C7Cu;
        // 0x220c80: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c7c) {
            ctx->pc = 0x220C98u;
            goto label_220c98;
        }
    }
    ctx->pc = 0x220C84u;
label_220c84:
    // 0x220c84: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x220c84u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_220c88:
    // 0x220c88: 0x0  nop
    ctx->pc = 0x220c88u;
    // NOP
label_220c8c:
    // 0x220c8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x220c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_220c90:
    // 0x220c90: 0x10000007  b           . + 4 + (0x7 << 2)
label_220c94:
    if (ctx->pc == 0x220C94u) {
        ctx->pc = 0x220C98u;
        goto label_220c98;
    }
    ctx->pc = 0x220C90u;
    {
        const bool branch_taken_0x220c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c90) {
            ctx->pc = 0x220CB0u;
            goto label_220cb0;
        }
    }
    ctx->pc = 0x220C98u;
label_220c98:
    // 0x220c98: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x220c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_220c9c:
    // 0x220c9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x220c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_220ca0:
    // 0x220ca0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x220ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_220ca4:
    // 0x220ca4: 0x0  nop
    ctx->pc = 0x220ca4u;
    // NOP
label_220ca8:
    // 0x220ca8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x220ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_220cac:
    // 0x220cac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x220cacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_220cb0:
    // 0x220cb0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x220cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_220cb4:
    // 0x220cb4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x220cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_220cb8:
    // 0x220cb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220cbc:
    // 0x220cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220cc0:
    // 0x220cc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x220cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_220cc4:
    // 0x220cc4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x220cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_220cc8:
    // 0x220cc8: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x220cc8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_220ccc:
    // 0x220ccc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x220cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_220cd0:
    // 0x220cd0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x220cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_220cd4:
    // 0x220cd4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x220cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_220cd8:
    // 0x220cd8: 0x40f809  jalr        $v0
label_220cdc:
    if (ctx->pc == 0x220CDCu) {
        ctx->pc = 0x220CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CD8u;
        // 0x220cdc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220CE0u;
        goto label_220ce0;
    }
    ctx->pc = 0x220CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220CE0u);
        ctx->pc = 0x220CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CD8u;
        // 0x220cdc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220CD8u, 0x220CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220CE0u;
label_220ce0:
    // 0x220ce0: 0x4615bb02  mul.s       $f12, $f23, $f21
    ctx->pc = 0x220ce0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_220ce4:
    // 0x220ce4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x220ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220ce8:
    // 0x220ce8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x220ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220cec:
    // 0x220cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x220cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_220cf0:
    // 0x220cf0: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x220cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_220cf4:
    // 0x220cf4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x220cf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_220cf8:
    // 0x220cf8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x220cf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_220cfc:
    // 0x220cfc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_220d00:
    // 0x220d00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220d04:
    // 0x220d04: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x220d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_220d08:
    // 0x220d08: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x220d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220d0c:
    // 0x220d0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220d10:
    // 0x220d10: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x220d10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_220d14:
    // 0x220d14: 0xc043fa4  jal         func_10FE90
label_220d18:
    if (ctx->pc == 0x220D18u) {
        ctx->pc = 0x220D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D14u;
        // 0x220d18: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D1Cu;
        goto label_220d1c;
    }
    ctx->pc = 0x220D14u;
    SET_GPR_U32(ctx, 31, 0x220D1Cu);
    ctx->pc = 0x220D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D14u;
    // 0x220d18: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE90u, 0x220D14u, 0x220D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D1Cu;
label_220d1c:
    // 0x220d1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x220d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_220d20:
    // 0x220d20: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x220d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_220d24:
    // 0x220d24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x220d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_220d28:
    // 0x220d28: 0x40f809  jalr        $v0
label_220d2c:
    if (ctx->pc == 0x220D2Cu) {
        ctx->pc = 0x220D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D28u;
        // 0x220d2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D30u;
        goto label_220d30;
    }
    ctx->pc = 0x220D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220D30u);
        ctx->pc = 0x220D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D28u;
        // 0x220d2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220D28u, 0x220D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220D30u;
label_220d30:
    // 0x220d30: 0x4615bb02  mul.s       $f12, $f23, $f21
    ctx->pc = 0x220d30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_220d34:
    // 0x220d34: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x220d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220d38:
    // 0x220d38: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x220d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220d3c:
    // 0x220d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x220d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_220d40:
    // 0x220d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220d44:
    // 0x220d44: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x220d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_220d48:
    // 0x220d48: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x220d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220d4c:
    // 0x220d4c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x220d4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_220d50:
    // 0x220d50: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x220d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_220d54:
    // 0x220d54: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x220d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_220d58:
    // 0x220d58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220d5c:
    // 0x220d5c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x220d5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_220d60:
    // 0x220d60: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x220d60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_220d64:
    // 0x220d64: 0xc043fa4  jal         func_10FE90
label_220d68:
    if (ctx->pc == 0x220D68u) {
        ctx->pc = 0x220D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D64u;
        // 0x220d68: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D6Cu;
        goto label_220d6c;
    }
    ctx->pc = 0x220D64u;
    SET_GPR_U32(ctx, 31, 0x220D6Cu);
    ctx->pc = 0x220D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D64u;
    // 0x220d68: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE90u, 0x220D64u, 0x220D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D6Cu;
label_220d6c:
    // 0x220d6c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x220d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_220d70:
    // 0x220d70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x220d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_220d74:
    // 0x220d74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x220d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_220d78:
    // 0x220d78: 0x40f809  jalr        $v0
label_220d7c:
    if (ctx->pc == 0x220D7Cu) {
        ctx->pc = 0x220D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D78u;
        // 0x220d7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D80u;
        goto label_220d80;
    }
    ctx->pc = 0x220D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220D80u);
        ctx->pc = 0x220D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D78u;
        // 0x220d7c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220D78u, 0x220D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220D80u;
label_220d80:
    // 0x220d80: 0x4615bb02  mul.s       $f12, $f23, $f21
    ctx->pc = 0x220d80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_220d84:
    // 0x220d84: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x220d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220d88:
    // 0x220d88: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x220d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220d8c:
    // 0x220d8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x220d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_220d90:
    // 0x220d90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220d94:
    // 0x220d94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x220d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_220d98:
    // 0x220d98: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x220d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220d9c:
    // 0x220d9c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x220d9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_220da0:
    // 0x220da0: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x220da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_220da4:
    // 0x220da4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_220da8:
    // 0x220da8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220dac:
    // 0x220dac: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x220dacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_220db0:
    // 0x220db0: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x220db0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_220db4:
    // 0x220db4: 0xc043fa4  jal         func_10FE90
label_220db8:
    if (ctx->pc == 0x220DB8u) {
        ctx->pc = 0x220DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DB4u;
        // 0x220db8: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220DBCu;
        goto label_220dbc;
    }
    ctx->pc = 0x220DB4u;
    SET_GPR_U32(ctx, 31, 0x220DBCu);
    ctx->pc = 0x220DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DB4u;
    // 0x220db8: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE90u, 0x220DB4u, 0x220DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DBCu;
label_220dbc:
    // 0x220dbc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x220dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_220dc0:
    // 0x220dc0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x220dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_220dc4:
    // 0x220dc4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x220dc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_220dc8:
    // 0x220dc8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x220dc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_220dcc:
    // 0x220dcc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x220dccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_220dd0:
    // 0x220dd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x220dd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_220dd4:
    // 0x220dd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x220dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_220dd8:
    // 0x220dd8: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x220dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_220ddc:
    // 0x220ddc: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x220ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_220de0:
    // 0x220de0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x220de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_220de4:
    // 0x220de4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x220de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_220de8:
    // 0x220de8: 0x3e00008  jr          $ra
label_220dec:
    if (ctx->pc == 0x220DECu) {
        ctx->pc = 0x220DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DE8u;
        // 0x220dec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220DF0u;
        goto label_fallthrough_0x220de8;
    }
    ctx->pc = 0x220DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DE8u;
        // 0x220dec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x220de8:
    ctx->pc = 0x220DF0u;
}
