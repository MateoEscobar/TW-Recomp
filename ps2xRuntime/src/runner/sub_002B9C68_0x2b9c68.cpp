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

// Function: sub_002B9C68
// Address: 0x2b9c68 - 0x2b9da0
void sub_002B9C68_0x2b9c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9C68_0x2b9c68");
#endif

    switch (ctx->pc) {
        case 0x2b9c68u: goto label_2b9c68;
        case 0x2b9c6cu: goto label_2b9c6c;
        case 0x2b9c70u: goto label_2b9c70;
        case 0x2b9c74u: goto label_2b9c74;
        case 0x2b9c78u: goto label_2b9c78;
        case 0x2b9c7cu: goto label_2b9c7c;
        case 0x2b9c80u: goto label_2b9c80;
        case 0x2b9c84u: goto label_2b9c84;
        case 0x2b9c88u: goto label_2b9c88;
        case 0x2b9c8cu: goto label_2b9c8c;
        case 0x2b9c90u: goto label_2b9c90;
        case 0x2b9c94u: goto label_2b9c94;
        case 0x2b9c98u: goto label_2b9c98;
        case 0x2b9c9cu: goto label_2b9c9c;
        case 0x2b9ca0u: goto label_2b9ca0;
        case 0x2b9ca4u: goto label_2b9ca4;
        case 0x2b9ca8u: goto label_2b9ca8;
        case 0x2b9cacu: goto label_2b9cac;
        case 0x2b9cb0u: goto label_2b9cb0;
        case 0x2b9cb4u: goto label_2b9cb4;
        case 0x2b9cb8u: goto label_2b9cb8;
        case 0x2b9cbcu: goto label_2b9cbc;
        case 0x2b9cc0u: goto label_2b9cc0;
        case 0x2b9cc4u: goto label_2b9cc4;
        case 0x2b9cc8u: goto label_2b9cc8;
        case 0x2b9cccu: goto label_2b9ccc;
        case 0x2b9cd0u: goto label_2b9cd0;
        case 0x2b9cd4u: goto label_2b9cd4;
        case 0x2b9cd8u: goto label_2b9cd8;
        case 0x2b9cdcu: goto label_2b9cdc;
        case 0x2b9ce0u: goto label_2b9ce0;
        case 0x2b9ce4u: goto label_2b9ce4;
        case 0x2b9ce8u: goto label_2b9ce8;
        case 0x2b9cecu: goto label_2b9cec;
        case 0x2b9cf0u: goto label_2b9cf0;
        case 0x2b9cf4u: goto label_2b9cf4;
        case 0x2b9cf8u: goto label_2b9cf8;
        case 0x2b9cfcu: goto label_2b9cfc;
        case 0x2b9d00u: goto label_2b9d00;
        case 0x2b9d04u: goto label_2b9d04;
        case 0x2b9d08u: goto label_2b9d08;
        case 0x2b9d0cu: goto label_2b9d0c;
        case 0x2b9d10u: goto label_2b9d10;
        case 0x2b9d14u: goto label_2b9d14;
        case 0x2b9d18u: goto label_2b9d18;
        case 0x2b9d1cu: goto label_2b9d1c;
        case 0x2b9d20u: goto label_2b9d20;
        case 0x2b9d24u: goto label_2b9d24;
        case 0x2b9d28u: goto label_2b9d28;
        case 0x2b9d2cu: goto label_2b9d2c;
        case 0x2b9d30u: goto label_2b9d30;
        case 0x2b9d34u: goto label_2b9d34;
        case 0x2b9d38u: goto label_2b9d38;
        case 0x2b9d3cu: goto label_2b9d3c;
        case 0x2b9d40u: goto label_2b9d40;
        case 0x2b9d44u: goto label_2b9d44;
        case 0x2b9d48u: goto label_2b9d48;
        case 0x2b9d4cu: goto label_2b9d4c;
        case 0x2b9d50u: goto label_2b9d50;
        case 0x2b9d54u: goto label_2b9d54;
        case 0x2b9d58u: goto label_2b9d58;
        case 0x2b9d5cu: goto label_2b9d5c;
        case 0x2b9d60u: goto label_2b9d60;
        case 0x2b9d64u: goto label_2b9d64;
        case 0x2b9d68u: goto label_2b9d68;
        case 0x2b9d6cu: goto label_2b9d6c;
        case 0x2b9d70u: goto label_2b9d70;
        case 0x2b9d74u: goto label_2b9d74;
        case 0x2b9d78u: goto label_2b9d78;
        case 0x2b9d7cu: goto label_2b9d7c;
        case 0x2b9d80u: goto label_2b9d80;
        case 0x2b9d84u: goto label_2b9d84;
        case 0x2b9d88u: goto label_2b9d88;
        case 0x2b9d8cu: goto label_2b9d8c;
        case 0x2b9d90u: goto label_2b9d90;
        case 0x2b9d94u: goto label_2b9d94;
        case 0x2b9d98u: goto label_2b9d98;
        case 0x2b9d9cu: goto label_2b9d9c;
        default: break;
    }

    ctx->pc = 0x2b9c68u;

label_2b9c68:
    // 0x2b9c68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b9c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b9c6c:
    // 0x2b9c6c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2b9c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2b9c70:
    // 0x2b9c70: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b9c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2b9c74:
    // 0x2b9c74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b9c78:
    // 0x2b9c78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b9c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2b9c7c:
    // 0x2b9c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c80:
    // 0x2b9c80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b9c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2b9c84:
    // 0x2b9c84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b9c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9c88:
    // 0x2b9c88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b9c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2b9c8c:
    // 0x2b9c8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c90:
    // 0x2b9c90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b9c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b9c94:
    // 0x2b9c94: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b9c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9c98:
    // 0x2b9c98: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x2b9c98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b9c9c:
    // 0x2b9c9c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2b9c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_2b9ca0:
    // 0x2b9ca0: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2b9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_2b9ca4:
    // 0x2b9ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ca8:
    // 0x2b9ca8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b9ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2b9cac:
    // 0x2b9cac: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x2b9cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
label_2b9cb0:
    // 0x2b9cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9cb4:
    // 0x2b9cb4: 0xc087612  jal         func_21D848
label_2b9cb8:
    if (ctx->pc == 0x2B9CB8u) {
        ctx->pc = 0x2B9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CB4u;
        // 0x2b9cb8: 0xe460012c  swc1        $f0, 0x12C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CBCu;
        goto label_2b9cbc;
    }
    ctx->pc = 0x2B9CB4u;
    SET_GPR_U32(ctx, 31, 0x2B9CBCu);
    ctx->pc = 0x2B9CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CB4u;
    // 0x2b9cb8: 0xe460012c  swc1        $f0, 0x12C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2B9CB4u, 0x2B9CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CBCu;
label_2b9cbc:
    // 0x2b9cbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9cc0:
    // 0x2b9cc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b9cc4:
    // 0x2b9cc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b9cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b9cc8:
    // 0x2b9cc8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2b9ccc:
    if (ctx->pc == 0x2B9CCCu) {
        ctx->pc = 0x2B9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CC8u;
        // 0x2b9ccc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CD0u;
        goto label_2b9cd0;
    }
    ctx->pc = 0x2B9CC8u;
    {
        const bool branch_taken_0x2b9cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CC8u;
        // 0x2b9ccc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cc8) {
            ctx->pc = 0x2B9D34u;
            goto label_2b9d34;
        }
    }
    ctx->pc = 0x2B9CD0u;
label_2b9cd0:
    // 0x2b9cd0: 0xa0600265  sb          $zero, 0x265($v1)
    ctx->pc = 0x2b9cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 0));
label_2b9cd4:
    // 0x2b9cd4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2b9cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2b9cd8:
    // 0x2b9cd8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2b9cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2b9cdc:
    // 0x2b9cdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b9cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b9ce0:
    // 0x2b9ce0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9ce4:
    // 0x2b9ce4: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x2b9ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_2b9ce8:
    // 0x2b9ce8: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x2b9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_2b9cec:
    // 0x2b9cec: 0x60f809  jalr        $v1
label_2b9cf0:
    if (ctx->pc == 0x2B9CF0u) {
        ctx->pc = 0x2B9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CECu;
        // 0x2b9cf0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CF4u;
        goto label_2b9cf4;
    }
    ctx->pc = 0x2B9CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9CF4u);
        ctx->pc = 0x2B9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CECu;
        // 0x2b9cf0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9CECu, 0x2B9CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9CF4u;
label_2b9cf4:
    // 0x2b9cf4: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b9cf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2b9cf8:
    // 0x2b9cf8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b9cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b9cfc:
    // 0x2b9cfc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2b9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_2b9d00:
    // 0x2b9d00: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2b9d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2b9d04:
    // 0x2b9d04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b9d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b9d08:
    // 0x2b9d08: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2b9d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2b9d0c:
    // 0x2b9d0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b9d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2b9d10:
    // 0x2b9d10: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2b9d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2b9d14:
    // 0x2b9d14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b9d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2b9d18:
    // 0x2b9d18: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2b9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2b9d1c:
    // 0x2b9d1c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b9d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2b9d20:
    // 0x2b9d20: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2b9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2b9d24:
    // 0x2b9d24: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2b9d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2b9d28:
    // 0x2b9d28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b9d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2b9d2c:
    // 0x2b9d2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b9d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b9d30:
    // 0x2b9d30: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b9d30u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2b9d34:
    // 0x2b9d34: 0x92220055  lbu         $v0, 0x55($s1)
    ctx->pc = 0x2b9d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2b9d38:
    // 0x2b9d38: 0x14500013  bne         $v0, $s0, . + 4 + (0x13 << 2)
label_2b9d3c:
    if (ctx->pc == 0x2B9D3Cu) {
        ctx->pc = 0x2B9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D38u;
        // 0x2b9d3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D40u;
        goto label_2b9d40;
    }
    ctx->pc = 0x2B9D38u;
    {
        const bool branch_taken_0x2b9d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D38u;
        // 0x2b9d3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d38) {
            ctx->pc = 0x2B9D88u;
            goto label_2b9d88;
        }
    }
    ctx->pc = 0x2B9D40u;
label_2b9d40:
    // 0x2b9d40: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2b9d40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_2b9d44:
    // 0x2b9d44: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2b9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2b9d48:
    // 0x2b9d48: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2b9d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b9d4c:
    // 0x2b9d4c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2b9d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2b9d50:
    // 0x2b9d50: 0xc0cd780  jal         func_335E00
label_2b9d54:
    if (ctx->pc == 0x2B9D54u) {
        ctx->pc = 0x2B9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D50u;
        // 0x2b9d54: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D58u;
        goto label_2b9d58;
    }
    ctx->pc = 0x2B9D50u;
    SET_GPR_U32(ctx, 31, 0x2B9D58u);
    ctx->pc = 0x2B9D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D50u;
    // 0x2b9d54: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2B9D50u, 0x2B9D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D58u;
label_2b9d58:
    // 0x2b9d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d5c:
    // 0x2b9d5c: 0xc0cd7a8  jal         func_335EA0
label_2b9d60:
    if (ctx->pc == 0x2B9D60u) {
        ctx->pc = 0x2B9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D5Cu;
        // 0x2b9d60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D64u;
        goto label_2b9d64;
    }
    ctx->pc = 0x2B9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B9D64u);
    ctx->pc = 0x2B9D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D5Cu;
    // 0x2b9d60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x2B9D5Cu, 0x2B9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D64u;
label_2b9d64:
    // 0x2b9d64: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2b9d64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9d68:
    // 0x2b9d68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b9d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d6c:
    // 0x2b9d6c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2b9d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2b9d70:
    // 0x2b9d70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9d74:
    // 0x2b9d74: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2b9d74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2b9d78:
    // 0x2b9d78: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2b9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2b9d7c:
    // 0x2b9d7c: 0x40f809  jalr        $v0
label_2b9d80:
    if (ctx->pc == 0x2B9D80u) {
        ctx->pc = 0x2B9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D7Cu;
        // 0x2b9d80: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D84u;
        goto label_2b9d84;
    }
    ctx->pc = 0x2B9D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9D84u);
        ctx->pc = 0x2B9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D7Cu;
        // 0x2b9d80: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9D7Cu, 0x2B9D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9D84u;
label_2b9d84:
    // 0x2b9d84: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b9d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b9d88:
    // 0x2b9d88: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b9d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9d8c:
    // 0x2b9d8c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b9d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b9d90:
    // 0x2b9d90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b9d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9d94:
    // 0x2b9d94: 0x3e00008  jr          $ra
label_2b9d98:
    if (ctx->pc == 0x2B9D98u) {
        ctx->pc = 0x2B9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D94u;
        // 0x2b9d98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D9Cu;
        goto label_2b9d9c;
    }
    ctx->pc = 0x2B9D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D94u;
        // 0x2b9d98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9D9Cu;
label_2b9d9c:
    // 0x2b9d9c: 0x0  nop
    ctx->pc = 0x2b9d9cu;
    // NOP
    ctx->pc = 0x2b9da0u;
}
