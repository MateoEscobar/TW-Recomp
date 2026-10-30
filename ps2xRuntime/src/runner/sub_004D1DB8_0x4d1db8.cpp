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

// Function: sub_004D1DB8
// Address: 0x4d1db8 - 0x4d2358
void sub_004D1DB8_0x4d1db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1DB8_0x4d1db8");
#endif

    switch (ctx->pc) {
        case 0x4d1e68u: goto label_4d1e68;
        case 0x4d1e78u: goto label_4d1e78;
        case 0x4d1f08u: goto label_4d1f08;
        default: break;
    }

    ctx->pc = 0x4d1db8u;

    // 0x4d1db8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4d1db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x4d1dbc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x4d1dbcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1dc0: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x4d1dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x4d1dc4: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x4d1dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x4d1dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d1dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1dcc: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x4d1dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x4d1dd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4d1dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1dd4: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x4d1dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4d1dd8: 0x8e490004  lw          $t1, 0x4($s2)
    ctx->pc = 0x4d1dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4d1ddc: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x4d1ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4d1de0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D1DE0u;
    {
        const bool branch_taken_0x4d1de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DE0u;
        // 0x4d1de4: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1de0) {
            ctx->pc = 0x4D1DF8u;
            goto label_4d1df8;
        }
    }
    ctx->pc = 0x4D1DE8u;
    // 0x4d1de8: 0x30eb0007  andi        $t3, $a3, 0x7
    ctx->pc = 0x4d1de8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x4d1dec: 0x2508fffd  addiu       $t0, $t0, -0x3
    ctx->pc = 0x4d1decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
    // 0x4d1df0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D1DF0u;
    {
        const bool branch_taken_0x4d1df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DF0u;
        // 0x4d1df4: 0x738c2  srl         $a3, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1df0) {
            ctx->pc = 0x4D1E1Cu;
            goto label_4d1e1c;
        }
    }
    ctx->pc = 0x4D1DF8u;
label_4d1df8:
    // 0x4d1df8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4d1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d1dfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4d1e00: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4d1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4d1e04: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d1e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d1e08: 0x1041004  sllv        $v0, $a0, $t0
    ctx->pc = 0x4d1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x4d1e0c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x4d1e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4d1e10: 0x2508001d  addiu       $t0, $t0, 0x1D
    ctx->pc = 0x4d1e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29));
    // 0x4d1e14: 0x643806  srlv        $a3, $a0, $v1
    ctx->pc = 0x4d1e14u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4d1e18: 0x304b0007  andi        $t3, $v0, 0x7
    ctx->pc = 0x4d1e18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4d1e1c:
    // 0x4d1e1c: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x4d1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4d1e20: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4d1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d1e24: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x4d1e24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4d1e28: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x4d1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x4d1e2c: 0x2562ffff  addiu       $v0, $t3, -0x1
    ctx->pc = 0x4d1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x4d1e30: 0xa3a40044  sb          $a0, 0x44($sp)
    ctx->pc = 0x4d1e30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d1e34: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x4d1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4d1e38: 0x27aa0044  addiu       $t2, $sp, 0x44
    ctx->pc = 0x4d1e38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x4d1e3c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x4d1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4d1e40: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x4d1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x4d1e44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4d1e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d1e48: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x4d1e48u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d1e4c: 0xa1440002  sb          $a0, 0x2($t2)
    ctx->pc = 0x4d1e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d1e50: 0x37e03  sra         $t7, $v1, 24
    ctx->pc = 0x4d1e50u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 3), 24));
    // 0x4d1e54: 0xa1450003  sb          $a1, 0x3($t2)
    ctx->pc = 0x4d1e54u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d1e58: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x4d1e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1e5c: 0x27ac0048  addiu       $t4, $sp, 0x48
    ctx->pc = 0x4d1e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x4d1e60: 0x12200135  beqz        $s1, . + 4 + (0x135 << 2)
    ctx->pc = 0x4D1E60u;
    {
        const bool branch_taken_0x4d1e60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E60u;
        // 0x4d1e64: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1e60) {
            ctx->pc = 0x4D2338u;
            goto label_4d2338;
        }
    }
    ctx->pc = 0x4D1E68u;
label_4d1e68:
    // 0x4d1e68: 0x19a0001f  blez        $t5, . + 4 + (0x1F << 2)
    ctx->pc = 0x4D1E68u;
    {
        const bool branch_taken_0x4d1e68 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x4D1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E68u;
        // 0x4d1e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1e68) {
            ctx->pc = 0x4D1EE8u;
            goto label_4d1ee8;
        }
    }
    ctx->pc = 0x4D1E70u;
    // 0x4d1e70: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x4d1e70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4d1e74: 0x0  nop
    ctx->pc = 0x4d1e74u;
    // NOP
label_4d1e78:
    // 0x4d1e78: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1E78u;
    {
        const bool branch_taken_0x4d1e78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E78u;
        // 0x4d1e7c: 0x30e30001  andi        $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1e78) {
            ctx->pc = 0x4D1E94u;
            goto label_4d1e94;
        }
    }
    ctx->pc = 0x4D1E80u;
    // 0x4d1e80: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d1e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d1e84: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1E84u;
    {
        const bool branch_taken_0x4d1e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E84u;
        // 0x4d1e88: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1e84) {
            ctx->pc = 0x4D1EACu;
            goto label_4d1eac;
        }
    }
    ctx->pc = 0x4D1E8Cu;
    // 0x4d1e8c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4D1E8Cu;
    {
        const bool branch_taken_0x4d1e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E8Cu;
        // 0x4d1e90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1e8c) {
            ctx->pc = 0x4D1EDCu;
            goto label_4d1edc;
        }
    }
    ctx->pc = 0x4D1E94u;
label_4d1e94:
    // 0x4d1e94: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d1e98: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d1e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1e9c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d1e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d1ea0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d1ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d1ea4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4D1EA4u;
    {
        const bool branch_taken_0x4d1ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1EA4u;
        // 0x4d1ea8: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ea4) {
            ctx->pc = 0x4D1ED8u;
            goto label_4d1ed8;
        }
    }
    ctx->pc = 0x4D1EACu;
label_4d1eac:
    // 0x4d1eac: 0x1651021  addu        $v0, $t3, $a1
    ctx->pc = 0x4d1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x4d1eb0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4d1eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d1eb4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x4d1eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4d1eb8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4d1eb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d1ebc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1EBCu;
    {
        const bool branch_taken_0x4d1ebc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4D1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1EBCu;
        // 0x4d1ec0: 0x4f1821  addu        $v1, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ebc) {
            ctx->pc = 0x4D1EC8u;
            goto label_4d1ec8;
        }
    }
    ctx->pc = 0x4D1EC4u;
    // 0x4d1ec4: 0x4f1823  subu        $v1, $v0, $t7
    ctx->pc = 0x4d1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_4d1ec8:
    // 0x4d1ec8: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4d1ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1ecc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4d1eccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d1ed0: 0x10460119  beq         $v0, $a2, . + 4 + (0x119 << 2)
    ctx->pc = 0x4D1ED0u;
    {
        const bool branch_taken_0x4d1ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4D1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1ED0u;
        // 0x4d1ed4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ed0) {
            ctx->pc = 0x4D2338u;
            goto label_4d2338;
        }
    }
    ctx->pc = 0x4D1ED8u;
label_4d1ed8:
    // 0x4d1ed8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4d1ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4d1edc:
    // 0x4d1edc: 0xad102a  slt         $v0, $a1, $t5
    ctx->pc = 0x4d1edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x4d1ee0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4D1EE0u;
    {
        const bool branch_taken_0x4d1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1ee0) {
            ctx->pc = 0x4D1E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d1e78;
        }
    }
    ctx->pc = 0x4D1EE8u;
label_4d1ee8:
    // 0x4d1ee8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4d1ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1eec: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x4d1eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x4d1ef0: 0x1040010e  beqz        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x4D1EF0u;
    {
        const bool branch_taken_0x4d1ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1EF0u;
        // 0x4d1ef4: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ef0) {
            ctx->pc = 0x4D232Cu;
            goto label_4d232c;
        }
    }
    ctx->pc = 0x4D1EF8u;
    // 0x4d1ef8: 0x27b90090  addiu       $t9, $sp, 0x90
    ctx->pc = 0x4d1ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4d1efc: 0xfc023  negu        $t8, $t7
    ctx->pc = 0x4d1efcu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x4d1f00: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x4d1f00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d1f04: 0x0  nop
    ctx->pc = 0x4d1f04u;
    // NOP
label_4d1f08:
    // 0x4d1f08: 0x50800104  beql        $a0, $zero, . + 4 + (0x104 << 2)
    ctx->pc = 0x4D1F08u;
    {
        const bool branch_taken_0x4d1f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1f08) {
            ctx->pc = 0x4D1F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1F08u;
            // 0x4d1f0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D231Cu;
            goto label_4d231c;
        }
    }
    ctx->pc = 0x4D1F10u;
    // 0x4d1f10: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1F10u;
    {
        const bool branch_taken_0x4d1f10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F10u;
        // 0x4d1f14: 0x30e30001  andi        $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f10) {
            ctx->pc = 0x4D1F2Cu;
            goto label_4d1f2c;
        }
    }
    ctx->pc = 0x4D1F18u;
    // 0x4d1f18: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d1f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d1f1c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1F1Cu;
    {
        const bool branch_taken_0x4d1f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F1Cu;
        // 0x4d1f20: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f1c) {
            ctx->pc = 0x4D1F44u;
            goto label_4d1f44;
        }
    }
    ctx->pc = 0x4D1F24u;
    // 0x4d1f24: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x4D1F24u;
    {
        const bool branch_taken_0x4d1f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F24u;
        // 0x4d1f28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f24) {
            ctx->pc = 0x4D231Cu;
            goto label_4d231c;
        }
    }
    ctx->pc = 0x4D1F2Cu;
label_4d1f2c:
    // 0x4d1f2c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d1f30: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d1f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1f34: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d1f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d1f38: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d1f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d1f3c: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x4D1F3Cu;
    {
        const bool branch_taken_0x4d1f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F3Cu;
        // 0x4d1f40: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f3c) {
            ctx->pc = 0x4D2318u;
            goto label_4d2318;
        }
    }
    ctx->pc = 0x4D1F44u;
label_4d1f44:
    // 0x4d1f44: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x4d1f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4d1f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d1f4c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4D1F4Cu;
    {
        const bool branch_taken_0x4d1f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F4Cu;
        // 0x4d1f50: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f4c) {
            ctx->pc = 0x4D1F98u;
            goto label_4d1f98;
        }
    }
    ctx->pc = 0x4D1F54u;
    // 0x4d1f54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D1F54u;
    {
        const bool branch_taken_0x4d1f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F54u;
        // 0x4d1f58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f54) {
            ctx->pc = 0x4D1F6Cu;
            goto label_4d1f6c;
        }
    }
    ctx->pc = 0x4D1F5Cu;
    // 0x4d1f5c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1F5Cu;
    {
        const bool branch_taken_0x4d1f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F5Cu;
        // 0x4d1f60: 0x42082  srl         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f5c) {
            ctx->pc = 0x4D1F84u;
            goto label_4d1f84;
        }
    }
    ctx->pc = 0x4D1F64u;
    // 0x4d1f64: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x4D1F64u;
    {
        const bool branch_taken_0x4d1f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F64u;
        // 0x4d1f68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f64) {
            ctx->pc = 0x4D231Cu;
            goto label_4d231c;
        }
    }
    ctx->pc = 0x4D1F6Cu;
label_4d1f6c:
    // 0x4d1f6c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4D1F6Cu;
    {
        const bool branch_taken_0x4d1f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F6Cu;
        // 0x4d1f70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f6c) {
            ctx->pc = 0x4D1FE8u;
            goto label_4d1fe8;
        }
    }
    ctx->pc = 0x4D1F74u;
    // 0x4d1f74: 0x106200cf  beq         $v1, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x4D1F74u;
    {
        const bool branch_taken_0x4d1f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F74u;
        // 0x4d1f78: 0x42082  srl         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f74) {
            ctx->pc = 0x4D22B4u;
            goto label_4d22b4;
        }
    }
    ctx->pc = 0x4D1F7Cu;
    // 0x4d1f7c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x4D1F7Cu;
    {
        const bool branch_taken_0x4d1f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F7Cu;
        // 0x4d1f80: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f7c) {
            ctx->pc = 0x4D231Cu;
            goto label_4d231c;
        }
    }
    ctx->pc = 0x4D1F84u;
label_4d1f84:
    // 0x4d1f84: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4d1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4d1f88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d1f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d1f90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4D1F90u;
    {
        const bool branch_taken_0x4d1f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1F90u;
        // 0x4d1f94: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1f90) {
            ctx->pc = 0x4D1FF4u;
            goto label_4d1ff4;
        }
    }
    ctx->pc = 0x4D1F98u;
label_4d1f98:
    // 0x4d1f98: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x4d1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x4d1f9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4d1f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d1fa0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4d1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4d1fa4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d1fa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d1fac: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4d1facu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d1fb0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d1fb4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x4d1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4d1fb8: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x4d1fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d1fbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d1fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d1fc0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4d1fc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4d1fc4: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x4d1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4d1fc8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d1fcc: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x4d1fccu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d1fd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d1fd4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4d1fd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4d1fd8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d1fdc: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x4d1fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d1fe0: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x4D1FE0u;
    {
        const bool branch_taken_0x4d1fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1FE0u;
        // 0x4d1fe4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1fe0) {
            ctx->pc = 0x4D231Cu;
            goto label_4d231c;
        }
    }
    ctx->pc = 0x4D1FE8u;
label_4d1fe8:
    // 0x4d1fe8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x4d1fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d1fec: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x4d1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x4d1ff0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4d1ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4d1ff4:
    // 0x4d1ff4: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1FF4u;
    {
        const bool branch_taken_0x4d1ff4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1FF4u;
        // 0x4d1ff8: 0x30e30001  andi        $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ff4) {
            ctx->pc = 0x4D2010u;
            goto label_4d2010;
        }
    }
    ctx->pc = 0x4D1FFCu;
    // 0x4d1ffc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d1ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d2000: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D2000u;
    {
        const bool branch_taken_0x4d2000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2000u;
        // 0x4d2004: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2000) {
            ctx->pc = 0x4D2028u;
            goto label_4d2028;
        }
    }
    ctx->pc = 0x4D2008u;
    // 0x4d2008: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D2008u;
    {
        const bool branch_taken_0x4d2008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2008u;
        // 0x4d200c: 0x32d1021  addu        $v0, $t9, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2008) {
            ctx->pc = 0x4D2040u;
            goto label_4d2040;
        }
    }
    ctx->pc = 0x4D2010u;
label_4d2010:
    // 0x4d2010: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d2010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d2014: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d2014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d2018: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d2018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d201c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d2020: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D2020u;
    {
        const bool branch_taken_0x4d2020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2020u;
        // 0x4d2024: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2020) {
            ctx->pc = 0x4D203Cu;
            goto label_4d203c;
        }
    }
    ctx->pc = 0x4D2028u;
label_4d2028:
    // 0x4d2028: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4d2028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d202c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4d202cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x4d2030: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d2030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d2034: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4D2034u;
    {
        const bool branch_taken_0x4d2034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2034u;
        // 0x4d2038: 0xa1420000  sb          $v0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2034) {
            ctx->pc = 0x4D209Cu;
            goto label_4d209c;
        }
    }
    ctx->pc = 0x4D203Cu;
label_4d203c:
    // 0x4d203c: 0x32d1021  addu        $v0, $t9, $t5
    ctx->pc = 0x4d203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_4d2040:
    // 0x4d2040: 0x2045821  addu        $t3, $s0, $a0
    ctx->pc = 0x4d2040u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4d2044: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x4d2044u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d2048: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D2048u;
    {
        const bool branch_taken_0x4d2048 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2048u;
        // 0x4d204c: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2048) {
            ctx->pc = 0x4D2068u;
            goto label_4d2068;
        }
    }
    ctx->pc = 0x4D2050u;
    // 0x4d2050: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4d2050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4d2054: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d2054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d2058: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D2058u;
    {
        const bool branch_taken_0x4d2058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2058u;
        // 0x4d205c: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2058) {
            ctx->pc = 0x4D2080u;
            goto label_4d2080;
        }
    }
    ctx->pc = 0x4D2060u;
    // 0x4d2060: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D2060u;
    {
        const bool branch_taken_0x4d2060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2060u;
        // 0x4d2064: 0x1e0182d  daddu       $v1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2060) {
            ctx->pc = 0x4D208Cu;
            goto label_4d208c;
        }
    }
    ctx->pc = 0x4D2068u;
label_4d2068:
    // 0x4d2068: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d2068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d206c: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d206cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d2070: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d2070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d2074: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d2074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d2078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D2078u;
    {
        const bool branch_taken_0x4d2078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2078u;
        // 0x4d207c: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2078) {
            ctx->pc = 0x4D2088u;
            goto label_4d2088;
        }
    }
    ctx->pc = 0x4D2080u;
label_4d2080:
    // 0x4d2080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D2080u;
    {
        const bool branch_taken_0x4d2080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2080u;
        // 0x4d2084: 0x300182d  daddu       $v1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2080) {
            ctx->pc = 0x4D208Cu;
            goto label_4d208c;
        }
    }
    ctx->pc = 0x4D2088u;
label_4d2088:
    // 0x4d2088: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x4d2088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4d208c:
    // 0x4d208c: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4d208cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2090: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x4d2090u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d2094: 0x104600a8  beq         $v0, $a2, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4D2094u;
    {
        const bool branch_taken_0x4d2094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4D2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2094u;
        // 0x4d2098: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2094) {
            ctx->pc = 0x4D2338u;
            goto label_4d2338;
        }
    }
    ctx->pc = 0x4D209Cu;
label_4d209c:
    // 0x4d209c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4d209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4d20a0: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D20A0u;
    {
        const bool branch_taken_0x4d20a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D20A0u;
        // 0x4d20a4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d20a0) {
            ctx->pc = 0x4D20C0u;
            goto label_4d20c0;
        }
    }
    ctx->pc = 0x4D20A8u;
    // 0x4d20a8: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4d20a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4d20ac: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d20acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d20b0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D20B0u;
    {
        const bool branch_taken_0x4d20b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D20B0u;
        // 0x4d20b4: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d20b0) {
            ctx->pc = 0x4D20D8u;
            goto label_4d20d8;
        }
    }
    ctx->pc = 0x4D20B8u;
    // 0x4d20b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D20B8u;
    {
        const bool branch_taken_0x4d20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D20B8u;
        // 0x4d20bc: 0x32d1021  addu        $v0, $t9, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d20b8) {
            ctx->pc = 0x4D20F0u;
            goto label_4d20f0;
        }
    }
    ctx->pc = 0x4D20C0u;
label_4d20c0:
    // 0x4d20c0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d20c4: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d20c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d20c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d20c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d20cc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d20ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d20d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D20D0u;
    {
        const bool branch_taken_0x4d20d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D20D0u;
        // 0x4d20d4: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d20d0) {
            ctx->pc = 0x4D20ECu;
            goto label_4d20ec;
        }
    }
    ctx->pc = 0x4D20D8u;
label_4d20d8:
    // 0x4d20d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4d20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d20dc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4d20dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x4d20e0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d20e4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4D20E4u;
    {
        const bool branch_taken_0x4d20e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D20E4u;
        // 0x4d20e8: 0xa1420000  sb          $v0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d20e4) {
            ctx->pc = 0x4D214Cu;
            goto label_4d214c;
        }
    }
    ctx->pc = 0x4D20ECu;
label_4d20ec:
    // 0x4d20ec: 0x32d1021  addu        $v0, $t9, $t5
    ctx->pc = 0x4d20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_4d20f0:
    // 0x4d20f0: 0x2045821  addu        $t3, $s0, $a0
    ctx->pc = 0x4d20f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4d20f4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x4d20f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d20f8: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D20F8u;
    {
        const bool branch_taken_0x4d20f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D20F8u;
        // 0x4d20fc: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d20f8) {
            ctx->pc = 0x4D2118u;
            goto label_4d2118;
        }
    }
    ctx->pc = 0x4D2100u;
    // 0x4d2100: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4d2100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4d2104: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d2104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d2108: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D2108u;
    {
        const bool branch_taken_0x4d2108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2108u;
        // 0x4d210c: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2108) {
            ctx->pc = 0x4D2130u;
            goto label_4d2130;
        }
    }
    ctx->pc = 0x4D2110u;
    // 0x4d2110: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D2110u;
    {
        const bool branch_taken_0x4d2110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2110u;
        // 0x4d2114: 0x1e0182d  daddu       $v1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2110) {
            ctx->pc = 0x4D213Cu;
            goto label_4d213c;
        }
    }
    ctx->pc = 0x4D2118u;
label_4d2118:
    // 0x4d2118: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d211c: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d211cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d2120: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d2120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d2124: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d2124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d2128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D2128u;
    {
        const bool branch_taken_0x4d2128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2128u;
        // 0x4d212c: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2128) {
            ctx->pc = 0x4D2138u;
            goto label_4d2138;
        }
    }
    ctx->pc = 0x4D2130u;
label_4d2130:
    // 0x4d2130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D2130u;
    {
        const bool branch_taken_0x4d2130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2130u;
        // 0x4d2134: 0x300182d  daddu       $v1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2130) {
            ctx->pc = 0x4D213Cu;
            goto label_4d213c;
        }
    }
    ctx->pc = 0x4D2138u;
label_4d2138:
    // 0x4d2138: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x4d2138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4d213c:
    // 0x4d213c: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4d213cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2140: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x4d2140u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d2144: 0x1046007c  beq         $v0, $a2, . + 4 + (0x7C << 2)
    ctx->pc = 0x4D2144u;
    {
        const bool branch_taken_0x4d2144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4D2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2144u;
        // 0x4d2148: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2144) {
            ctx->pc = 0x4D2338u;
            goto label_4d2338;
        }
    }
    ctx->pc = 0x4D214Cu;
label_4d214c:
    // 0x4d214c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4d214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4d2150: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D2150u;
    {
        const bool branch_taken_0x4d2150 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2150u;
        // 0x4d2154: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2150) {
            ctx->pc = 0x4D2170u;
            goto label_4d2170;
        }
    }
    ctx->pc = 0x4D2158u;
    // 0x4d2158: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4d2158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4d215c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d215cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d2160: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D2160u;
    {
        const bool branch_taken_0x4d2160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2160u;
        // 0x4d2164: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2160) {
            ctx->pc = 0x4D2188u;
            goto label_4d2188;
        }
    }
    ctx->pc = 0x4D2168u;
    // 0x4d2168: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D2168u;
    {
        const bool branch_taken_0x4d2168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2168u;
        // 0x4d216c: 0x32d1021  addu        $v0, $t9, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2168) {
            ctx->pc = 0x4D21A0u;
            goto label_4d21a0;
        }
    }
    ctx->pc = 0x4D2170u;
label_4d2170:
    // 0x4d2170: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d2170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d2174: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d2174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d2178: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d2178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d217c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d2180: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D2180u;
    {
        const bool branch_taken_0x4d2180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2180u;
        // 0x4d2184: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2180) {
            ctx->pc = 0x4D219Cu;
            goto label_4d219c;
        }
    }
    ctx->pc = 0x4D2188u;
label_4d2188:
    // 0x4d2188: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4d2188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d218c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4d218cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x4d2190: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d2194: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4D2194u;
    {
        const bool branch_taken_0x4d2194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2194u;
        // 0x4d2198: 0xa1420000  sb          $v0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2194) {
            ctx->pc = 0x4D21FCu;
            goto label_4d21fc;
        }
    }
    ctx->pc = 0x4D219Cu;
label_4d219c:
    // 0x4d219c: 0x32d1021  addu        $v0, $t9, $t5
    ctx->pc = 0x4d219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_4d21a0:
    // 0x4d21a0: 0x2045821  addu        $t3, $s0, $a0
    ctx->pc = 0x4d21a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4d21a4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x4d21a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d21a8: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D21A8u;
    {
        const bool branch_taken_0x4d21a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21A8u;
        // 0x4d21ac: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d21a8) {
            ctx->pc = 0x4D21C8u;
            goto label_4d21c8;
        }
    }
    ctx->pc = 0x4D21B0u;
    // 0x4d21b0: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4d21b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4d21b4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d21b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d21b8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D21B8u;
    {
        const bool branch_taken_0x4d21b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21B8u;
        // 0x4d21bc: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d21b8) {
            ctx->pc = 0x4D21E0u;
            goto label_4d21e0;
        }
    }
    ctx->pc = 0x4D21C0u;
    // 0x4d21c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D21C0u;
    {
        const bool branch_taken_0x4d21c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21C0u;
        // 0x4d21c4: 0x1e0182d  daddu       $v1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d21c0) {
            ctx->pc = 0x4D21ECu;
            goto label_4d21ec;
        }
    }
    ctx->pc = 0x4D21C8u;
label_4d21c8:
    // 0x4d21c8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d21cc: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d21ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d21d0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d21d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d21d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d21d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d21d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D21D8u;
    {
        const bool branch_taken_0x4d21d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21D8u;
        // 0x4d21dc: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d21d8) {
            ctx->pc = 0x4D21E8u;
            goto label_4d21e8;
        }
    }
    ctx->pc = 0x4D21E0u;
label_4d21e0:
    // 0x4d21e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D21E0u;
    {
        const bool branch_taken_0x4d21e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21E0u;
        // 0x4d21e4: 0x300182d  daddu       $v1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d21e0) {
            ctx->pc = 0x4D21ECu;
            goto label_4d21ec;
        }
    }
    ctx->pc = 0x4D21E8u;
label_4d21e8:
    // 0x4d21e8: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x4d21e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4d21ec:
    // 0x4d21ec: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4d21ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d21f0: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x4d21f0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d21f4: 0x10460050  beq         $v0, $a2, . + 4 + (0x50 << 2)
    ctx->pc = 0x4D21F4u;
    {
        const bool branch_taken_0x4d21f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4D21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21F4u;
        // 0x4d21f8: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d21f4) {
            ctx->pc = 0x4D2338u;
            goto label_4d2338;
        }
    }
    ctx->pc = 0x4D21FCu;
label_4d21fc:
    // 0x4d21fc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4d21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4d2200: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D2200u;
    {
        const bool branch_taken_0x4d2200 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2200u;
        // 0x4d2204: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2200) {
            ctx->pc = 0x4D2220u;
            goto label_4d2220;
        }
    }
    ctx->pc = 0x4D2208u;
    // 0x4d2208: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4d2208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4d220c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d220cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d2210: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D2210u;
    {
        const bool branch_taken_0x4d2210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2210u;
        // 0x4d2214: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2210) {
            ctx->pc = 0x4D2238u;
            goto label_4d2238;
        }
    }
    ctx->pc = 0x4D2218u;
    // 0x4d2218: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D2218u;
    {
        const bool branch_taken_0x4d2218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2218u;
        // 0x4d221c: 0x32d1021  addu        $v0, $t9, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2218) {
            ctx->pc = 0x4D2250u;
            goto label_4d2250;
        }
    }
    ctx->pc = 0x4D2220u;
label_4d2220:
    // 0x4d2220: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d2220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d2224: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d2224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d2228: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d2228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d222c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d2230: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D2230u;
    {
        const bool branch_taken_0x4d2230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2230u;
        // 0x4d2234: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2230) {
            ctx->pc = 0x4D224Cu;
            goto label_4d224c;
        }
    }
    ctx->pc = 0x4D2238u;
label_4d2238:
    // 0x4d2238: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4d2238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d223c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4d223cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x4d2240: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d2244: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x4D2244u;
    {
        const bool branch_taken_0x4d2244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2244u;
        // 0x4d2248: 0xa1420000  sb          $v0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2244) {
            ctx->pc = 0x4D231Cu;
            goto label_4d231c;
        }
    }
    ctx->pc = 0x4D224Cu;
label_4d224c:
    // 0x4d224c: 0x32d1021  addu        $v0, $t9, $t5
    ctx->pc = 0x4d224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_4d2250:
    // 0x4d2250: 0x2045821  addu        $t3, $s0, $a0
    ctx->pc = 0x4d2250u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4d2254: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x4d2254u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d2258: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D2258u;
    {
        const bool branch_taken_0x4d2258 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2258u;
        // 0x4d225c: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2258) {
            ctx->pc = 0x4D2278u;
            goto label_4d2278;
        }
    }
    ctx->pc = 0x4D2260u;
    // 0x4d2260: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4d2260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4d2264: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d2264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d2268: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D2268u;
    {
        const bool branch_taken_0x4d2268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2268u;
        // 0x4d226c: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2268) {
            ctx->pc = 0x4D2290u;
            goto label_4d2290;
        }
    }
    ctx->pc = 0x4D2270u;
    // 0x4d2270: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D2270u;
    {
        const bool branch_taken_0x4d2270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2270u;
        // 0x4d2274: 0x1e0182d  daddu       $v1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2270) {
            ctx->pc = 0x4D229Cu;
            goto label_4d229c;
        }
    }
    ctx->pc = 0x4D2278u;
label_4d2278:
    // 0x4d2278: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d2278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d227c: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d227cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d2280: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d2280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d2284: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d2288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D2288u;
    {
        const bool branch_taken_0x4d2288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2288u;
        // 0x4d228c: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2288) {
            ctx->pc = 0x4D2298u;
            goto label_4d2298;
        }
    }
    ctx->pc = 0x4D2290u;
label_4d2290:
    // 0x4d2290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D2290u;
    {
        const bool branch_taken_0x4d2290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2290u;
        // 0x4d2294: 0x300182d  daddu       $v1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2290) {
            ctx->pc = 0x4D229Cu;
            goto label_4d229c;
        }
    }
    ctx->pc = 0x4D2298u;
label_4d2298:
    // 0x4d2298: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x4d2298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4d229c:
    // 0x4d229c: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4d229cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d22a0: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x4d22a0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d22a4: 0x10460024  beq         $v0, $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x4D22A4u;
    {
        const bool branch_taken_0x4d22a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4D22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D22A4u;
        // 0x4d22a8: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d22a4) {
            ctx->pc = 0x4D2338u;
            goto label_4d2338;
        }
    }
    ctx->pc = 0x4D22ACu;
    // 0x4d22ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4D22ACu;
    {
        const bool branch_taken_0x4d22ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D22ACu;
        // 0x4d22b0: 0xac102b  sltu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d22ac) {
            ctx->pc = 0x4D2320u;
            goto label_4d2320;
        }
    }
    ctx->pc = 0x4D22B4u;
label_4d22b4:
    // 0x4d22b4: 0x32d1021  addu        $v0, $t9, $t5
    ctx->pc = 0x4d22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x4d22b8: 0x2045821  addu        $t3, $s0, $a0
    ctx->pc = 0x4d22b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4d22bc: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x4d22bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d22c0: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D22C0u;
    {
        const bool branch_taken_0x4d22c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D22C0u;
        // 0x4d22c4: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d22c0) {
            ctx->pc = 0x4D22E0u;
            goto label_4d22e0;
        }
    }
    ctx->pc = 0x4D22C8u;
    // 0x4d22c8: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x4d22c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4d22cc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4d22ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d22d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D22D0u;
    {
        const bool branch_taken_0x4d22d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D22D0u;
        // 0x4d22d4: 0x73842  srl         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d22d0) {
            ctx->pc = 0x4D22F8u;
            goto label_4d22f8;
        }
    }
    ctx->pc = 0x4D22D8u;
    // 0x4d22d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D22D8u;
    {
        const bool branch_taken_0x4d22d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D22D8u;
        // 0x4d22dc: 0x1e0182d  daddu       $v1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d22d8) {
            ctx->pc = 0x4D2304u;
            goto label_4d2304;
        }
    }
    ctx->pc = 0x4D22E0u;
label_4d22e0:
    // 0x4d22e0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d22e4: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x4d22e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d22e8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4d22e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d22ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d22ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d22f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D22F0u;
    {
        const bool branch_taken_0x4d22f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D22F0u;
        // 0x4d22f4: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d22f0) {
            ctx->pc = 0x4D2300u;
            goto label_4d2300;
        }
    }
    ctx->pc = 0x4D22F8u;
label_4d22f8:
    // 0x4d22f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D22F8u;
    {
        const bool branch_taken_0x4d22f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D22F8u;
        // 0x4d22fc: 0x300182d  daddu       $v1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d22f8) {
            ctx->pc = 0x4D2304u;
            goto label_4d2304;
        }
    }
    ctx->pc = 0x4D2300u;
label_4d2300:
    // 0x4d2300: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x4d2300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4d2304:
    // 0x4d2304: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x4d2304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2308: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x4d2308u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d230c: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4D230Cu;
    {
        const bool branch_taken_0x4d230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4D2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D230Cu;
        // 0x4d2310: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d230c) {
            ctx->pc = 0x4D2338u;
            goto label_4d2338;
        }
    }
    ctx->pc = 0x4D2314u;
    // 0x4d2314: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x4d2314u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_4d2318:
    // 0x4d2318: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4d2318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4d231c:
    // 0x4d231c: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x4d231cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_4d2320:
    // 0x4d2320: 0x5440fef9  bnel        $v0, $zero, . + 4 + (-0x107 << 2)
    ctx->pc = 0x4D2320u;
    {
        const bool branch_taken_0x4d2320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d2320) {
            ctx->pc = 0x4D2324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D2320u;
            // 0x4d2324: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D1F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d1f08;
        }
    }
    ctx->pc = 0x4D2328u;
    // 0x4d2328: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x4d2328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4d232c:
    // 0x4d232c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x4d232cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4d2330: 0x1620fecd  bnez        $s1, . + 4 + (-0x133 << 2)
    ctx->pc = 0x4D2330u;
    {
        const bool branch_taken_0x4d2330 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2330u;
        // 0x4d2334: 0xf7843  sra         $t7, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2330) {
            ctx->pc = 0x4D1E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d1e68;
        }
    }
    ctx->pc = 0x4D2338u;
label_4d2338:
    // 0x4d2338: 0xae480008  sw          $t0, 0x8($s2)
    ctx->pc = 0x4d2338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 8));
    // 0x4d233c: 0xae490004  sw          $t1, 0x4($s2)
    ctx->pc = 0x4d233cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 9));
    // 0x4d2340: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4d2340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4d2344: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x4d2344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4d2348: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x4d2348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x4d234c: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x4d234cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4d2350: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2350u;
        // 0x4d2354: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D2350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D2358u;
}
