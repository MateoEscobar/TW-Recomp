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

// Function: sub_00489EA8
// Address: 0x489ea8 - 0x48a0e0
void sub_00489EA8_0x489ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489EA8_0x489ea8");
#endif

    switch (ctx->pc) {
        case 0x48a00cu: goto label_48a00c;
        case 0x48a028u: goto label_48a028;
        case 0x48a09cu: goto label_48a09c;
        default: break;
    }

    ctx->pc = 0x489ea8u;

label_489ea8:
    // 0x489ea8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x489ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x489eac: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x489eacu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489eb0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x489eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x489eb4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x489eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x489eb8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x489eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489ebc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x489ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x489ec0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x489ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489ec4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x489ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x489ec8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x489ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489ecc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x489eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x489ed0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x489ed0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489ed4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x489ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x489ed8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x489ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x489edc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x489edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x489ee0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x489ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x489ee4: 0x13000071  beqz        $t8, . + 4 + (0x71 << 2)
    ctx->pc = 0x489EE4u;
    {
        const bool branch_taken_0x489ee4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x489EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489EE4u;
        // 0x489ee8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489ee4) {
            ctx->pc = 0x48A0ACu;
            goto label_48a0ac;
        }
    }
    ctx->pc = 0x489EECu;
    // 0x489eec: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x489eecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x489ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489ef4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x489ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x489ef8: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x489ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x489efc: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x489efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x489f00: 0x1226821  addu        $t5, $t1, $v0
    ctx->pc = 0x489f00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x489f04: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x489f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x489f08: 0x1025821  addu        $t3, $t0, $v0
    ctx->pc = 0x489f08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x489f0c: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x489f0cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x489f10: 0xe26021  addu        $t4, $a3, $v0
    ctx->pc = 0x489f10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x489f14: 0x8e950004  lw          $s5, 0x4($s4)
    ctx->pc = 0x489f14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x489f18: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x489f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x489f1c: 0x8e960008  lw          $s6, 0x8($s4)
    ctx->pc = 0x489f1cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x489f20: 0x1b72823  subu        $a1, $t5, $s7
    ctx->pc = 0x489f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 23)));
    // 0x489f24: 0x8e99000c  lw          $t9, 0xC($s4)
    ctx->pc = 0x489f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x489f28: 0x1752023  subu        $a0, $t3, $s5
    ctx->pc = 0x489f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 21)));
    // 0x489f2c: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x489f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x489f30: 0x1961823  subu        $v1, $t4, $s6
    ctx->pc = 0x489f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 22)));
    // 0x489f34: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x489f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x489f38: 0x1591023  subu        $v0, $t2, $t9
    ctx->pc = 0x489f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x489f3c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x489f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x489f40: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x489f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x489f44: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x489f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x489f48: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x489f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x489f4c: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x489f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x489f50: 0x18a00056  blez        $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x489F50u;
    {
        const bool branch_taken_0x489f50 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x489F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489F50u;
        // 0x489f54: 0xafaa001c  sw          $t2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489f50) {
            ctx->pc = 0x48A0ACu;
            goto label_48a0ac;
        }
    }
    ctx->pc = 0x489F58u;
    // 0x489f58: 0x18800055  blez        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x489F58u;
    {
        const bool branch_taken_0x489f58 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x489F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489F58u;
        // 0x489f5c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489f58) {
            ctx->pc = 0x48A0B0u;
            goto label_48a0b0;
        }
    }
    ctx->pc = 0x489F60u;
    // 0x489f60: 0x58600054  blezl       $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x489F60u;
    {
        const bool branch_taken_0x489f60 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x489f60) {
            ctx->pc = 0x489F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489F60u;
            // 0x489f64: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A0B4u;
            goto label_48a0b4;
        }
    }
    ctx->pc = 0x489F68u;
    // 0x489f68: 0x58400052  blezl       $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x489F68u;
    {
        const bool branch_taken_0x489f68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x489f68) {
            ctx->pc = 0x489F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489F68u;
            // 0x489f6c: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A0B4u;
            goto label_48a0b4;
        }
    }
    ctx->pc = 0x489F70u;
    // 0x489f70: 0x8e8f0010  lw          $t7, 0x10($s4)
    ctx->pc = 0x489f70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x489f74: 0x8e900014  lw          $s0, 0x14($s4)
    ctx->pc = 0x489f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x489f78: 0x8e930018  lw          $s3, 0x18($s4)
    ctx->pc = 0x489f78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x489f7c: 0x12f2823  subu        $a1, $t1, $t7
    ctx->pc = 0x489f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x489f80: 0x8e8e001c  lw          $t6, 0x1C($s4)
    ctx->pc = 0x489f80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x489f84: 0x1102023  subu        $a0, $t0, $s0
    ctx->pc = 0x489f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x489f88: 0xf31823  subu        $v1, $a3, $s3
    ctx->pc = 0x489f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x489f8c: 0x4a10047  bgez        $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x489F8Cu;
    {
        const bool branch_taken_0x489f8c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x489F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489F8Cu;
        // 0x489f90: 0xce1023  subu        $v0, $a2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489f8c) {
            ctx->pc = 0x48A0ACu;
            goto label_48a0ac;
        }
    }
    ctx->pc = 0x489F94u;
    // 0x489f94: 0x4830046  bgezl       $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x489F94u;
    {
        const bool branch_taken_0x489f94 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x489f94) {
            ctx->pc = 0x489F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489F94u;
            // 0x489f98: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A0B0u;
            goto label_48a0b0;
        }
    }
    ctx->pc = 0x489F9Cu;
    // 0x489f9c: 0x4630044  bgezl       $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x489F9Cu;
    {
        const bool branch_taken_0x489f9c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x489f9c) {
            ctx->pc = 0x489FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489F9Cu;
            // 0x489fa0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A0B0u;
            goto label_48a0b0;
        }
    }
    ctx->pc = 0x489FA4u;
    // 0x489fa4: 0x4430042  bgezl       $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x489FA4u;
    {
        const bool branch_taken_0x489fa4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x489fa4) {
            ctx->pc = 0x489FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489FA4u;
            // 0x489fa8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A0B0u;
            goto label_48a0b0;
        }
    }
    ctx->pc = 0x489FACu;
    // 0x489fac: 0x1372823  subu        $a1, $t1, $s7
    ctx->pc = 0x489facu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 23)));
    // 0x489fb0: 0x1152023  subu        $a0, $t0, $s5
    ctx->pc = 0x489fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 21)));
    // 0x489fb4: 0xf61823  subu        $v1, $a3, $s6
    ctx->pc = 0x489fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x489fb8: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x489FB8u;
    {
        const bool branch_taken_0x489fb8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x489FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489FB8u;
        // 0x489fbc: 0xd91023  subu        $v0, $a2, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489fb8) {
            ctx->pc = 0x48A014u;
            goto label_48a014;
        }
    }
    ctx->pc = 0x489FC0u;
    // 0x489fc0: 0x4800014  bltz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x489FC0u;
    {
        const bool branch_taken_0x489fc0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x489fc0) {
            ctx->pc = 0x48A014u;
            goto label_48a014;
        }
    }
    ctx->pc = 0x489FC8u;
    // 0x489fc8: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x489FC8u;
    {
        const bool branch_taken_0x489fc8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x489fc8) {
            ctx->pc = 0x48A014u;
            goto label_48a014;
        }
    }
    ctx->pc = 0x489FD0u;
    // 0x489fd0: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x489FD0u;
    {
        const bool branch_taken_0x489fd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x489FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489FD0u;
        // 0x489fd4: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489fd0) {
            ctx->pc = 0x48A014u;
            goto label_48a014;
        }
    }
    ctx->pc = 0x489FD8u;
    // 0x489fd8: 0x20b2023  subu        $a0, $s0, $t3
    ctx->pc = 0x489fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
    // 0x489fdc: 0x26c1823  subu        $v1, $s3, $t4
    ctx->pc = 0x489fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x489fe0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x489FE0u;
    {
        const bool branch_taken_0x489fe0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x489FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489FE0u;
        // 0x489fe4: 0x1ca1023  subu        $v0, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489fe0) {
            ctx->pc = 0x48A014u;
            goto label_48a014;
        }
    }
    ctx->pc = 0x489FE8u;
    // 0x489fe8: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x489FE8u;
    {
        const bool branch_taken_0x489fe8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x489fe8) {
            ctx->pc = 0x48A014u;
            goto label_48a014;
        }
    }
    ctx->pc = 0x489FF0u;
    // 0x489ff0: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x489FF0u;
    {
        const bool branch_taken_0x489ff0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x489ff0) {
            ctx->pc = 0x48A014u;
            goto label_48a014;
        }
    }
    ctx->pc = 0x489FF8u;
    // 0x489ff8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x489FF8u;
    {
        const bool branch_taken_0x489ff8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x489FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489FF8u;
        // 0x489ffc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489ff8) {
            ctx->pc = 0x48A014u;
            goto label_48a014;
        }
    }
    ctx->pc = 0x48A000u;
    // 0x48a000: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x48a000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a004: 0xc122538  jal         func_4894E0
    ctx->pc = 0x48A004u;
    SET_GPR_U32(ctx, 31, 0x48A00Cu);
    ctx->pc = 0x48A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A004u;
    // 0x48a008: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4894E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4894E0u, 0x48A004u, 0x48A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A00Cu;
label_48a00c:
    // 0x48a00c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x48A00Cu;
    {
        const bool branch_taken_0x48a00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A00Cu;
        // 0x48a010: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a00c) {
            ctx->pc = 0x48A0B0u;
            goto label_48a0b0;
        }
    }
    ctx->pc = 0x48A014u;
label_48a014:
    // 0x48a014: 0x1a200025  blez        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x48A014u;
    {
        const bool branch_taken_0x48a014 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x48A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A014u;
        // 0x48a018: 0x2713001c  addiu       $s3, $t8, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a014) {
            ctx->pc = 0x48A0ACu;
            goto label_48a0ac;
        }
    }
    ctx->pc = 0x48A01Cu;
    // 0x48a01c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x48a01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x48a020: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48a020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a024: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x48a024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48a028:
    // 0x48a028: 0x102043  sra         $a0, $s0, 1
    ctx->pc = 0x48a028u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
    // 0x48a02c: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x48a02cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x48a030: 0x1010c3  sra         $v0, $s0, 3
    ctx->pc = 0x48a030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 3));
    // 0x48a034: 0x101883  sra         $v1, $s0, 2
    ctx->pc = 0x48a034u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
    // 0x48a038: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x48a038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x48a03c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x48a03cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48a040: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x48a040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x48a044: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x48a044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x48a048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48a048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48a04c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x48a04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x48a050: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x48a050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x48a054: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x48a054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x48a058: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x48a058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x48a05c: 0x32050001  andi        $a1, $s0, 0x1
    ctx->pc = 0x48a05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x48a060: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x48a060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x48a064: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x48a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48a068: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x48a068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48a06c: 0x2252804  sllv        $a1, $a1, $s1
    ctx->pc = 0x48a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x48a070: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x48a070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x48a074: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x48a074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x48a078: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x48a078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x48a07c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x48a07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a080: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x48a080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x48a084: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x48a084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a088: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x48a088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x48a08c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x48a08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a090: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x48a090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x48a094: 0xc1227aa  jal         func_489EA8
    ctx->pc = 0x48A094u;
    SET_GPR_U32(ctx, 31, 0x48A09Cu);
    ctx->pc = 0x48A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A094u;
    // 0x48a098: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489EA8u;
    goto label_489ea8;
    ctx->pc = 0x48A09Cu;
label_48a09c:
    // 0x48a09c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48a09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48a0a0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x48a0a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a0a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x48A0A4u;
    {
        const bool branch_taken_0x48a0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A0A4u;
        // 0x48a0a8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a0a4) {
            ctx->pc = 0x48A028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a028;
        }
    }
    ctx->pc = 0x48A0ACu;
label_48a0ac:
    // 0x48a0ac: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x48a0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_48a0b0:
    // 0x48a0b0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x48a0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_48a0b4:
    // 0x48a0b4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x48a0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48a0b8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x48a0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48a0bc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x48a0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x48a0c0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x48a0c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48a0c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48a0c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48a0c8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x48a0c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48a0cc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x48a0ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48a0d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48a0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48a0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x48A0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A0D4u;
        // 0x48a0d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48A0DCu;
    // 0x48a0dc: 0x0  nop
    ctx->pc = 0x48a0dcu;
    // NOP
    ctx->pc = 0x48a0e0u;
}
