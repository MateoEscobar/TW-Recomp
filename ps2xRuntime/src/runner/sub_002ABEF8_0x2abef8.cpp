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

// Function: sub_002ABEF8
// Address: 0x2abef8 - 0x2ac000
void sub_002ABEF8_0x2abef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABEF8_0x2abef8");
#endif

    switch (ctx->pc) {
        case 0x2abef8u: goto label_2abef8;
        case 0x2abefcu: goto label_2abefc;
        case 0x2abf00u: goto label_2abf00;
        case 0x2abf04u: goto label_2abf04;
        case 0x2abf08u: goto label_2abf08;
        case 0x2abf0cu: goto label_2abf0c;
        case 0x2abf10u: goto label_2abf10;
        case 0x2abf14u: goto label_2abf14;
        case 0x2abf18u: goto label_2abf18;
        case 0x2abf1cu: goto label_2abf1c;
        case 0x2abf20u: goto label_2abf20;
        case 0x2abf24u: goto label_2abf24;
        case 0x2abf28u: goto label_2abf28;
        case 0x2abf2cu: goto label_2abf2c;
        case 0x2abf30u: goto label_2abf30;
        case 0x2abf34u: goto label_2abf34;
        case 0x2abf38u: goto label_2abf38;
        case 0x2abf3cu: goto label_2abf3c;
        case 0x2abf40u: goto label_2abf40;
        case 0x2abf44u: goto label_2abf44;
        case 0x2abf48u: goto label_2abf48;
        case 0x2abf4cu: goto label_2abf4c;
        case 0x2abf50u: goto label_2abf50;
        case 0x2abf54u: goto label_2abf54;
        case 0x2abf58u: goto label_2abf58;
        case 0x2abf5cu: goto label_2abf5c;
        case 0x2abf60u: goto label_2abf60;
        case 0x2abf64u: goto label_2abf64;
        case 0x2abf68u: goto label_2abf68;
        case 0x2abf6cu: goto label_2abf6c;
        case 0x2abf70u: goto label_2abf70;
        case 0x2abf74u: goto label_2abf74;
        case 0x2abf78u: goto label_2abf78;
        case 0x2abf7cu: goto label_2abf7c;
        case 0x2abf80u: goto label_2abf80;
        case 0x2abf84u: goto label_2abf84;
        case 0x2abf88u: goto label_2abf88;
        case 0x2abf8cu: goto label_2abf8c;
        case 0x2abf90u: goto label_2abf90;
        case 0x2abf94u: goto label_2abf94;
        case 0x2abf98u: goto label_2abf98;
        case 0x2abf9cu: goto label_2abf9c;
        case 0x2abfa0u: goto label_2abfa0;
        case 0x2abfa4u: goto label_2abfa4;
        case 0x2abfa8u: goto label_2abfa8;
        case 0x2abfacu: goto label_2abfac;
        case 0x2abfb0u: goto label_2abfb0;
        case 0x2abfb4u: goto label_2abfb4;
        case 0x2abfb8u: goto label_2abfb8;
        case 0x2abfbcu: goto label_2abfbc;
        case 0x2abfc0u: goto label_2abfc0;
        case 0x2abfc4u: goto label_2abfc4;
        case 0x2abfc8u: goto label_2abfc8;
        case 0x2abfccu: goto label_2abfcc;
        case 0x2abfd0u: goto label_2abfd0;
        case 0x2abfd4u: goto label_2abfd4;
        case 0x2abfd8u: goto label_2abfd8;
        case 0x2abfdcu: goto label_2abfdc;
        case 0x2abfe0u: goto label_2abfe0;
        case 0x2abfe4u: goto label_2abfe4;
        case 0x2abfe8u: goto label_2abfe8;
        case 0x2abfecu: goto label_2abfec;
        case 0x2abff0u: goto label_2abff0;
        case 0x2abff4u: goto label_2abff4;
        case 0x2abff8u: goto label_2abff8;
        case 0x2abffcu: goto label_2abffc;
        default: break;
    }

    ctx->pc = 0x2abef8u;

label_2abef8:
    // 0x2abef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2abefc:
    // 0x2abefc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2abefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2abf00:
    // 0x2abf00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2abf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2abf04:
    // 0x2abf04: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2abf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2abf08:
    // 0x2abf08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2abf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2abf0c:
    // 0x2abf0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2abf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2abf10:
    // 0x2abf10: 0x2463f610  addiu       $v1, $v1, -0x9F0
    ctx->pc = 0x2abf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964752));
label_2abf14:
    // 0x2abf14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2abf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2abf18:
    // 0x2abf18: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2abf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2abf1c:
    // 0x2abf1c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2abf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2abf20:
    // 0x2abf20: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2abf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2abf24:
    // 0x2abf24: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x2abf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_2abf28:
    // 0x2abf28: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2abf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2abf2c:
    // 0x2abf2c: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x2abf2cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2abf30:
    // 0x2abf30: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2abf30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2abf34:
    // 0x2abf34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2abf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abf38:
    // 0x2abf38: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2abf38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2abf3c:
    // 0x2abf3c: 0x318500ff  andi        $a1, $t4, 0xFF
    ctx->pc = 0x2abf3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_2abf40:
    // 0x2abf40: 0x2ca50065  sltiu       $a1, $a1, 0x65
    ctx->pc = 0x2abf40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
label_2abf44:
    // 0x2abf44: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2abf44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2abf48:
    // 0x2abf48: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2abf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_2abf4c:
    // 0x2abf4c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2abf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_2abf50:
    // 0x2abf50: 0xa2070030  sb          $a3, 0x30($s0)
    ctx->pc = 0x2abf50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 7));
label_2abf54:
    // 0x2abf54: 0xa2060031  sb          $a2, 0x31($s0)
    ctx->pc = 0x2abf54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 6));
label_2abf58:
    // 0x2abf58: 0xa2090038  sb          $t1, 0x38($s0)
    ctx->pc = 0x2abf58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 9));
label_2abf5c:
    // 0x2abf5c: 0xa20b003a  sb          $t3, 0x3A($s0)
    ctx->pc = 0x2abf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 11));
label_2abf60:
    // 0x2abf60: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2abf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2abf64:
    // 0x2abf64: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2abf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2abf68:
    // 0x2abf68: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2abf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2abf6c:
    // 0x2abf6c: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x2abf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
label_2abf70:
    // 0x2abf70: 0xa2000033  sb          $zero, 0x33($s0)
    ctx->pc = 0x2abf70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 0));
label_2abf74:
    // 0x2abf74: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x2abf74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
label_2abf78:
    // 0x2abf78: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x2abf78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
label_2abf7c:
    // 0x2abf7c: 0xa2000036  sb          $zero, 0x36($s0)
    ctx->pc = 0x2abf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 0));
label_2abf80:
    // 0x2abf80: 0xa2080037  sb          $t0, 0x37($s0)
    ctx->pc = 0x2abf80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 8));
label_2abf84:
    // 0x2abf84: 0xa2000039  sb          $zero, 0x39($s0)
    ctx->pc = 0x2abf84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
label_2abf88:
    // 0x2abf88: 0xa200003b  sb          $zero, 0x3B($s0)
    ctx->pc = 0x2abf88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 0));
label_2abf8c:
    // 0x2abf8c: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x2abf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
label_2abf90:
    // 0x2abf90: 0xa200003d  sb          $zero, 0x3D($s0)
    ctx->pc = 0x2abf90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 0));
label_2abf94:
    // 0x2abf94: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
label_2abf98:
    if (ctx->pc == 0x2ABF98u) {
        ctx->pc = 0x2ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF94u;
        // 0x2abf98: 0xa200003e  sb          $zero, 0x3E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABF9Cu;
        goto label_2abf9c;
    }
    ctx->pc = 0x2ABF94u;
    {
        const bool branch_taken_0x2abf94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF94u;
        // 0x2abf98: 0xa200003e  sb          $zero, 0x3E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf94) {
            ctx->pc = 0x2ABFA0u;
            goto label_2abfa0;
        }
    }
    ctx->pc = 0x2ABF9Cu;
label_2abf9c:
    // 0x2abf9c: 0x240c0064  addiu       $t4, $zero, 0x64
    ctx->pc = 0x2abf9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2abfa0:
    // 0x2abfa0: 0x1140000c  beqz        $t2, . + 4 + (0xC << 2)
label_2abfa4:
    if (ctx->pc == 0x2ABFA4u) {
        ctx->pc = 0x2ABFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFA0u;
        // 0x2abfa4: 0xa20c0037  sb          $t4, 0x37($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABFA8u;
        goto label_2abfa8;
    }
    ctx->pc = 0x2ABFA0u;
    {
        const bool branch_taken_0x2abfa0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFA0u;
        // 0x2abfa4: 0xa20c0037  sb          $t4, 0x37($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfa0) {
            ctx->pc = 0x2ABFD4u;
            goto label_2abfd4;
        }
    }
    ctx->pc = 0x2ABFA8u;
label_2abfa8:
    // 0x2abfa8: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x2abfa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2abfac:
    // 0x2abfac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2abfb0:
    if (ctx->pc == 0x2ABFB0u) {
        ctx->pc = 0x2ABFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFACu;
        // 0x2abfb0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABFB4u;
        goto label_2abfb4;
    }
    ctx->pc = 0x2ABFACu;
    {
        const bool branch_taken_0x2abfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFACu;
        // 0x2abfb0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfac) {
            ctx->pc = 0x2ABFD4u;
            goto label_2abfd4;
        }
    }
    ctx->pc = 0x2ABFB4u;
label_2abfb4:
    // 0x2abfb4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2abfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2abfb8:
    // 0x2abfb8: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2abfbc:
    // 0x2abfbc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2abfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2abfc0:
    // 0x2abfc0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2abfc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2abfc4:
    // 0x2abfc4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2abfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2abfc8:
    // 0x2abfc8: 0x40f809  jalr        $v0
label_2abfcc:
    if (ctx->pc == 0x2ABFCCu) {
        ctx->pc = 0x2ABFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFC8u;
        // 0x2abfcc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABFD0u;
        goto label_2abfd0;
    }
    ctx->pc = 0x2ABFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABFD0u);
        ctx->pc = 0x2ABFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFC8u;
        // 0x2abfcc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABFC8u, 0x2ABFD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABFD0u;
label_2abfd0:
    // 0x2abfd0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2abfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2abfd4:
    // 0x2abfd4: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2abfd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
label_2abfd8:
    // 0x2abfd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2abfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2abfdc:
    // 0x2abfdc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_2abfe0:
    if (ctx->pc == 0x2ABFE0u) {
        ctx->pc = 0x2ABFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFDCu;
        // 0x2abfe0: 0xa2000038  sb          $zero, 0x38($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABFE4u;
        goto label_2abfe4;
    }
    ctx->pc = 0x2ABFDCu;
    {
        const bool branch_taken_0x2abfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2abfdc) {
            ctx->pc = 0x2ABFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABFDCu;
            // 0x2abfe0: 0xa2000038  sb          $zero, 0x38($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABFE4u;
            goto label_2abfe4;
        }
    }
    ctx->pc = 0x2ABFE4u;
label_2abfe4:
    // 0x2abfe4: 0xc0ab278  jal         func_2AC9E0
label_2abfe8:
    if (ctx->pc == 0x2ABFE8u) {
        ctx->pc = 0x2ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFE4u;
        // 0x2abfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABFECu;
        goto label_2abfec;
    }
    ctx->pc = 0x2ABFE4u;
    SET_GPR_U32(ctx, 31, 0x2ABFECu);
    ctx->pc = 0x2ABFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABFE4u;
    // 0x2abfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9E0u, 0x2ABFE4u, 0x2ABFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABFECu;
label_2abfec:
    // 0x2abfec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2abfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2abff0:
    // 0x2abff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2abff4:
    // 0x2abff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2abff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2abff8:
    // 0x2abff8: 0x3e00008  jr          $ra
label_2abffc:
    if (ctx->pc == 0x2ABFFCu) {
        ctx->pc = 0x2ABFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFF8u;
        // 0x2abffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC000u;
        goto label_fallthrough_0x2abff8;
    }
    ctx->pc = 0x2ABFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFF8u;
        // 0x2abffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2abff8:
    ctx->pc = 0x2AC000u;
}
