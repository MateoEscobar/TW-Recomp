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

// Function: sub_00489CE0
// Address: 0x489ce0 - 0x489ea8
void sub_00489CE0_0x489ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489CE0_0x489ce0");
#endif

    switch (ctx->pc) {
        case 0x489df8u: goto label_489df8;
        case 0x489e6cu: goto label_489e6c;
        default: break;
    }

    ctx->pc = 0x489ce0u;

label_489ce0:
    // 0x489ce0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x489ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x489ce4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x489ce4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489ce8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x489ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x489cec: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x489cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x489cf0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x489cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489cf4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x489cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x489cf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x489cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489cfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x489cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x489d00: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x489d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489d04: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x489d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x489d08: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x489d08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489d0c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x489d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x489d10: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x489d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x489d14: 0x11e00059  beqz        $t7, . + 4 + (0x59 << 2)
    ctx->pc = 0x489D14u;
    {
        const bool branch_taken_0x489d14 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x489D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489D14u;
        // 0x489d18: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489d14) {
            ctx->pc = 0x489E7Cu;
            goto label_489e7c;
        }
    }
    ctx->pc = 0x489D1Cu;
    // 0x489d1c: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x489d1cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x489d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489d24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x489d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489d28: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x489d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x489d2c: 0x8e4e0004  lw          $t6, 0x4($s2)
    ctx->pc = 0x489d2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x489d30: 0x1a24821  addu        $t1, $t5, $v0
    ctx->pc = 0x489d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x489d34: 0x8e4c0008  lw          $t4, 0x8($s2)
    ctx->pc = 0x489d34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x489d38: 0x1255023  subu        $t2, $t1, $a1
    ctx->pc = 0x489d38u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x489d3c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x489d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x489d40: 0x1c24021  addu        $t0, $t6, $v0
    ctx->pc = 0x489d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x489d44: 0x8e4b000c  lw          $t3, 0xC($s2)
    ctx->pc = 0x489d44u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x489d48: 0x1823821  addu        $a3, $t4, $v0
    ctx->pc = 0x489d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x489d4c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x489d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x489d50: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x489d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x489d54: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x489d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x489d58: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x489d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x489d5c: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x489d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x489d60: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x489d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x489d64: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x489d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x489d68: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x489d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x489d6c: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x489d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x489d70: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x489d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x489d74: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x489d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x489d78: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x489d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x489d7c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x489d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x489d80: 0x1940003e  blez        $t2, . + 4 + (0x3E << 2)
    ctx->pc = 0x489D80u;
    {
        const bool branch_taken_0x489d80 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x489D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489D80u;
        // 0x489d84: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489d80) {
            ctx->pc = 0x489E7Cu;
            goto label_489e7c;
        }
    }
    ctx->pc = 0x489D88u;
    // 0x489d88: 0x18c0003d  blez        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x489D88u;
    {
        const bool branch_taken_0x489d88 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x489D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489D88u;
        // 0x489d8c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489d88) {
            ctx->pc = 0x489E80u;
            goto label_489e80;
        }
    }
    ctx->pc = 0x489D90u;
    // 0x489d90: 0x58a0003c  blezl       $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x489D90u;
    {
        const bool branch_taken_0x489d90 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x489d90) {
            ctx->pc = 0x489D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489D90u;
            // 0x489d94: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489E84u;
            goto label_489e84;
        }
    }
    ctx->pc = 0x489D98u;
    // 0x489d98: 0x5860003a  blezl       $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x489D98u;
    {
        const bool branch_taken_0x489d98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x489d98) {
            ctx->pc = 0x489D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489D98u;
            // 0x489d9c: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489E84u;
            goto label_489e84;
        }
    }
    ctx->pc = 0x489DA0u;
    // 0x489da0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x489da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x489da4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x489da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x489da8: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x489da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x489dac: 0x1a25023  subu        $t2, $t5, $v0
    ctx->pc = 0x489dacu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x489db0: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x489db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x489db4: 0x1c43023  subu        $a2, $t6, $a0
    ctx->pc = 0x489db4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x489db8: 0x1852823  subu        $a1, $t4, $a1
    ctx->pc = 0x489db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x489dbc: 0x5410030  bgez        $t2, . + 4 + (0x30 << 2)
    ctx->pc = 0x489DBCu;
    {
        const bool branch_taken_0x489dbc = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x489DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489DBCu;
        // 0x489dc0: 0x1631823  subu        $v1, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489dbc) {
            ctx->pc = 0x489E80u;
            goto label_489e80;
        }
    }
    ctx->pc = 0x489DC4u;
    // 0x489dc4: 0x4c3002f  bgezl       $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x489DC4u;
    {
        const bool branch_taken_0x489dc4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x489dc4) {
            ctx->pc = 0x489DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489DC4u;
            // 0x489dc8: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489E84u;
            goto label_489e84;
        }
    }
    ctx->pc = 0x489DCCu;
    // 0x489dcc: 0x4a3002d  bgezl       $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x489DCCu;
    {
        const bool branch_taken_0x489dcc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x489dcc) {
            ctx->pc = 0x489DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489DCCu;
            // 0x489dd0: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489E84u;
            goto label_489e84;
        }
    }
    ctx->pc = 0x489DD4u;
    // 0x489dd4: 0x463002b  bgezl       $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x489DD4u;
    {
        const bool branch_taken_0x489dd4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x489dd4) {
            ctx->pc = 0x489DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489DD4u;
            // 0x489dd8: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489E84u;
            goto label_489e84;
        }
    }
    ctx->pc = 0x489DDCu;
    // 0x489ddc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x489DDCu;
    {
        const bool branch_taken_0x489ddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x489DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489DDCu;
        // 0x489de0: 0x25f4001c  addiu       $s4, $t7, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489ddc) {
            ctx->pc = 0x489DECu;
            goto label_489dec;
        }
    }
    ctx->pc = 0x489DE4u;
    // 0x489de4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x489DE4u;
    {
        const bool branch_taken_0x489de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489DE4u;
        // 0x489de8: 0xa1f50018  sb          $s5, 0x18($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 24), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489de4) {
            ctx->pc = 0x489E80u;
            goto label_489e80;
        }
    }
    ctx->pc = 0x489DECu;
label_489dec:
    // 0x489dec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x489decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x489df0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x489df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489df4: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x489df4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_489df8:
    // 0x489df8: 0x102043  sra         $a0, $s0, 1
    ctx->pc = 0x489df8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
    // 0x489dfc: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x489dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x489e00: 0x1010c3  sra         $v0, $s0, 3
    ctx->pc = 0x489e00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 3));
    // 0x489e04: 0x101883  sra         $v1, $s0, 2
    ctx->pc = 0x489e04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
    // 0x489e08: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x489e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x489e0c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x489e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489e10: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x489e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x489e14: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x489e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x489e18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x489e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x489e1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x489e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x489e20: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x489e20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x489e24: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x489e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x489e28: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x489e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x489e2c: 0x32050001  andi        $a1, $s0, 0x1
    ctx->pc = 0x489e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x489e30: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x489e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x489e34: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x489e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x489e38: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x489e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x489e3c: 0x2252804  sllv        $a1, $a1, $s1
    ctx->pc = 0x489e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x489e40: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x489e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x489e44: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x489e44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x489e48: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x489e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x489e4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x489e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489e50: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x489e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x489e54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x489e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489e58: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x489e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x489e5c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x489e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489e60: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x489e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x489e64: 0xc122738  jal         func_489CE0
    ctx->pc = 0x489E64u;
    SET_GPR_U32(ctx, 31, 0x489E6Cu);
    ctx->pc = 0x489E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489E64u;
    // 0x489e68: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489CE0u;
    goto label_489ce0;
    ctx->pc = 0x489E6Cu;
label_489e6c:
    // 0x489e6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x489e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x489e70: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x489e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x489e74: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x489E74u;
    {
        const bool branch_taken_0x489e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x489E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489E74u;
        // 0x489e78: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489e74) {
            ctx->pc = 0x489DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489df8;
        }
    }
    ctx->pc = 0x489E7Cu;
label_489e7c:
    // 0x489e7c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x489e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_489e80:
    // 0x489e80: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x489e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_489e84:
    // 0x489e84: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x489e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x489e88: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x489e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x489e8c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x489e8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489e90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x489e90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x489e94: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x489e94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x489e98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x489e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x489e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x489E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489E9Cu;
        // 0x489ea0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489EA4u;
    // 0x489ea4: 0x0  nop
    ctx->pc = 0x489ea4u;
    // NOP
    ctx->pc = 0x489ea8u;
}
