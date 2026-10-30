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

// Function: sub_001BAC20
// Address: 0x1bac20 - 0x1baee0
void sub_001BAC20_0x1bac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAC20_0x1bac20");
#endif

    switch (ctx->pc) {
        case 0x1bac70u: goto label_1bac70;
        case 0x1bac8cu: goto label_1bac8c;
        case 0x1baca0u: goto label_1baca0;
        case 0x1bacb0u: goto label_1bacb0;
        case 0x1bacd8u: goto label_1bacd8;
        case 0x1bad00u: goto label_1bad00;
        case 0x1bad14u: goto label_1bad14;
        case 0x1bada8u: goto label_1bada8;
        case 0x1badd0u: goto label_1badd0;
        case 0x1badecu: goto label_1badec;
        case 0x1bae00u: goto label_1bae00;
        case 0x1bae24u: goto label_1bae24;
        case 0x1bae34u: goto label_1bae34;
        case 0x1bae44u: goto label_1bae44;
        case 0x1bae54u: goto label_1bae54;
        case 0x1bae6cu: goto label_1bae6c;
        case 0x1bae7cu: goto label_1bae7c;
        case 0x1bae8cu: goto label_1bae8c;
        default: break;
    }

    ctx->pc = 0x1bac20u;

    // 0x1bac20: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x1bac24: 0x7fb002c0  sq          $s0, 0x2C0($sp)
    ctx->pc = 0x1bac24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 16));
    // 0x1bac28: 0x7fb30290  sq          $s3, 0x290($sp)
    ctx->pc = 0x1bac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 19));
    // 0x1bac2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bac2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac30: 0x7fb40280  sq          $s4, 0x280($sp)
    ctx->pc = 0x1bac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 20));
    // 0x1bac34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bac34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac38: 0x7fb102b0  sq          $s1, 0x2B0($sp)
    ctx->pc = 0x1bac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 17));
    // 0x1bac3c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1bac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1bac40: 0x7fb202a0  sq          $s2, 0x2A0($sp)
    ctx->pc = 0x1bac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 18));
    // 0x1bac44: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1bac44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac48: 0x7fb50270  sq          $s5, 0x270($sp)
    ctx->pc = 0x1bac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 21));
    // 0x1bac4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bac4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac50: 0x7fb60260  sq          $s6, 0x260($sp)
    ctx->pc = 0x1bac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 22));
    // 0x1bac54: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bac54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac58: 0x7fb70250  sq          $s7, 0x250($sp)
    ctx->pc = 0x1bac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 23));
    // 0x1bac5c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1bac5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac60: 0x7fbe0240  sq          $fp, 0x240($sp)
    ctx->pc = 0x1bac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 30));
    // 0x1bac64: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x1bac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
    // 0x1bac68: 0xc06e538  jal         func_1B94E0
    ctx->pc = 0x1BAC68u;
    SET_GPR_U32(ctx, 31, 0x1BAC70u);
    ctx->pc = 0x1BAC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC68u;
    // 0x1bac6c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94E0u, 0x1BAC68u, 0x1BAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC70u;
label_1bac70:
    // 0x1bac70: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x1bac70u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bac74: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1bac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1bac78: 0x24514ae8  addiu       $s1, $v0, 0x4AE8
    ctx->pc = 0x1bac78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19176));
    // 0x1bac7c: 0xae6001ac  sw          $zero, 0x1AC($s3)
    ctx->pc = 0x1bac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 0));
    // 0x1bac80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac84: 0xc10d76a  jal         func_435DA8
    ctx->pc = 0x1BAC84u;
    SET_GPR_U32(ctx, 31, 0x1BAC8Cu);
    ctx->pc = 0x1BAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC84u;
    // 0x1bac88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435DA8u, 0x1BAC84u, 0x1BAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC8Cu;
label_1bac8c:
    // 0x1bac8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bac8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac90: 0x12400087  beqz        $s2, . + 4 + (0x87 << 2)
    ctx->pc = 0x1BAC90u;
    {
        const bool branch_taken_0x1bac90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC90u;
        // 0x1bac94: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac90) {
            ctx->pc = 0x1BAEB0u;
            goto label_1baeb0;
        }
    }
    ctx->pc = 0x1BAC98u;
    // 0x1bac98: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1bac98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1bac9c: 0x0  nop
    ctx->pc = 0x1bac9cu;
    // NOP
label_1baca0:
    // 0x1baca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1baca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baca8: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x1BACA8u;
    SET_GPR_U32(ctx, 31, 0x1BACB0u);
    ctx->pc = 0x1BACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACA8u;
    // 0x1bacac: 0x24454998  addiu       $a1, $v0, 0x4998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1BACA8u, 0x1BACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACB0u;
label_1bacb0:
    // 0x1bacb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BACB0u;
    {
        const bool branch_taken_0x1bacb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACB0u;
        // 0x1bacb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacb0) {
            ctx->pc = 0x1BACBCu;
            goto label_1bacbc;
        }
    }
    ctx->pc = 0x1BACB8u;
    // 0x1bacb8: 0x56b00a  movz        $s6, $v0, $s6
    ctx->pc = 0x1bacb8u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
label_1bacbc:
    // 0x1bacbc: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1bacbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bacc0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BACC0u;
    {
        const bool branch_taken_0x1bacc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACC0u;
        // 0x1bacc4: 0x3b51021  addu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacc0) {
            ctx->pc = 0x1BAD78u;
            goto label_1bad78;
        }
    }
    ctx->pc = 0x1BACC8u;
    // 0x1bacc8: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x1bacc8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
    // 0x1baccc: 0x2417003e  addiu       $s7, $zero, 0x3E
    ctx->pc = 0x1bacccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1bacd0: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1bacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1bacd4: 0x0  nop
    ctx->pc = 0x1bacd4u;
    // NOP
label_1bacd8:
    // 0x1bacd8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1bacd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bacdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bacdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bace0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1bace0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bace4: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BACE4u;
    {
        const bool branch_taken_0x1bace4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACE4u;
        // 0x1bace8: 0x3842003e  xori        $v0, $v0, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)62);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bace4) {
            ctx->pc = 0x1BAD34u;
            goto label_1bad34;
        }
    }
    ctx->pc = 0x1BACECu;
    // 0x1bacec: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1bacecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1bacf0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1bacf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bacf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bacf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bacf8: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x1BACF8u;
    SET_GPR_U32(ctx, 31, 0x1BAD00u);
    ctx->pc = 0x1BACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACF8u;
    // 0x1bacfc: 0x24454af0  addiu       $a1, $v0, 0x4AF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1BACF8u, 0x1BAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD00u;
label_1bad00:
    // 0x1bad00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAD00u;
    {
        const bool branch_taken_0x1bad00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bad00) {
            ctx->pc = 0x1BAD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAD00u;
            // 0x1bad04: 0x8e6201ac  lw          $v0, 0x1AC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAD20u;
            goto label_1bad20;
        }
    }
    ctx->pc = 0x1BAD08u;
    // 0x1bad08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad0c: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x1BAD0Cu;
    SET_GPR_U32(ctx, 31, 0x1BAD14u);
    ctx->pc = 0x1BAD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD0Cu;
    // 0x1bad10: 0x27c549c0  addiu       $a1, $fp, 0x49C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 18880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1BAD0Cu, 0x1BAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD14u;
label_1bad14:
    // 0x1bad14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAD14u;
    {
        const bool branch_taken_0x1bad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bad14) {
            ctx->pc = 0x1BAD38u;
            goto label_1bad38;
        }
    }
    ctx->pc = 0x1BAD1Cu;
    // 0x1bad1c: 0x8e6201ac  lw          $v0, 0x1AC($s3)
    ctx->pc = 0x1bad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
label_1bad20:
    // 0x1bad20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bad20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad24: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1bad24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bad2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAD2Cu;
    {
        const bool branch_taken_0x1bad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD2Cu;
        // 0x1bad30: 0xae6201ac  sw          $v0, 0x1AC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad2c) {
            ctx->pc = 0x1BAD38u;
            goto label_1bad38;
        }
    }
    ctx->pc = 0x1BAD34u;
label_1bad34:
    // 0x1bad34: 0x2b00a  movz        $s6, $zero, $v0
    ctx->pc = 0x1bad34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_1bad38:
    // 0x1bad38: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BAD38u;
    {
        const bool branch_taken_0x1bad38 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD38u;
        // 0x1bad3c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad38) {
            ctx->pc = 0x1BAD60u;
            goto label_1bad60;
        }
    }
    ctx->pc = 0x1BAD40u;
    // 0x1bad40: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1bad40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bad44: 0x10570005  beq         $v0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAD44u;
    {
        const bool branch_taken_0x1bad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1BAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD44u;
        // 0x1bad48: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad44) {
            ctx->pc = 0x1BAD5Cu;
            goto label_1bad5c;
        }
    }
    ctx->pc = 0x1BAD4Cu;
    // 0x1bad4c: 0x3b51021  addu        $v0, $sp, $s5
    ctx->pc = 0x1bad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
    // 0x1bad50: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1bad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bad54: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1bad54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bad58: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1bad58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bad5c:
    // 0x1bad5c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1bad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bad60:
    // 0x1bad60: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1bad60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bad64: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1bad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1bad68: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1bad68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bad6c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1BAD6Cu;
    {
        const bool branch_taken_0x1bad6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD6Cu;
        // 0x1bad70: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad6c) {
            ctx->pc = 0x1BACD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bacd8;
        }
    }
    ctx->pc = 0x1BAD74u;
    // 0x1bad74: 0x3b51021  addu        $v0, $sp, $s5
    ctx->pc = 0x1bad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
label_1bad78:
    // 0x1bad78: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BAD78u;
    {
        const bool branch_taken_0x1bad78 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD78u;
        // 0x1bad7c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad78) {
            ctx->pc = 0x1BADA0u;
            goto label_1bada0;
        }
    }
    ctx->pc = 0x1BAD80u;
    // 0x1bad80: 0x26a4ffff  addiu       $a0, $s5, -0x1
    ctx->pc = 0x1bad80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1bad84: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1bad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bad88: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x1bad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1bad8c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1bad8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bad90: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAD90u;
    {
        const bool branch_taken_0x1bad90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bad90) {
            ctx->pc = 0x1BADA0u;
            goto label_1bada0;
        }
    }
    ctx->pc = 0x1BAD98u;
    // 0x1bad98: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1bad98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bad9c: 0x309500ff  andi        $s5, $a0, 0xFF
    ctx->pc = 0x1bad9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1bada0:
    // 0x1bada0: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BADA0u;
    SET_GPR_U32(ctx, 31, 0x1BADA8u);
    ctx->pc = 0x1BADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADA0u;
    // 0x1bada4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BADA0u, 0x1BADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADA8u;
label_1bada8:
    // 0x1bada8: 0x8e630180  lw          $v1, 0x180($s3)
    ctx->pc = 0x1bada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x1badac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1badacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1badb0: 0x8e68019c  lw          $t0, 0x19C($s3)
    ctx->pc = 0x1badb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 412)));
    // 0x1badb4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1badb4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1badb8: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x1badb8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1badbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1badbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1badc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1badc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1badc4: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x1badc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1badc8: 0xc05e656  jal         func_179958
    ctx->pc = 0x1BADC8u;
    SET_GPR_U32(ctx, 31, 0x1BADD0u);
    ctx->pc = 0x1BADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADC8u;
    // 0x1badcc: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179958u, 0x1BADC8u, 0x1BADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADD0u;
label_1badd0:
    // 0x1badd0: 0xc66101d4  lwc1        $f1, 0x1D4($s3)
    ctx->pc = 0x1badd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1badd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1badd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1badd8: 0x0  nop
    ctx->pc = 0x1badd8u;
    // NOP
    // 0x1baddc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1BADDCu;
    {
        const bool branch_taken_0x1baddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADDCu;
        // 0x1bade0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baddc) {
            ctx->pc = 0x1BAE64u;
            goto label_1bae64;
        }
    }
    ctx->pc = 0x1BADE4u;
    // 0x1bade4: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BADE4u;
    SET_GPR_U32(ctx, 31, 0x1BADECu);
    ctx->pc = 0x1BADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADE4u;
    // 0x1bade8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BADE4u, 0x1BADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADECu;
label_1badec:
    // 0x1badec: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1badecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1badf0: 0xa3a00210  sb          $zero, 0x210($sp)
    ctx->pc = 0x1badf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 528), (uint8_t)GPR_U32(ctx, 0));
    // 0x1badf4: 0x27b10210  addiu       $s1, $sp, 0x210
    ctx->pc = 0x1badf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1badf8: 0x3c150055  lui         $s5, 0x55
    ctx->pc = 0x1badf8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
    // 0x1badfc: 0x0  nop
    ctx->pc = 0x1badfcu;
    // NOP
label_1bae00:
    // 0x1bae00: 0x2848021  addu        $s0, $s4, $a0
    ctx->pc = 0x1bae00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1bae04: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bae08: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1bae08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bae0c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BAE0Cu;
    {
        const bool branch_taken_0x1bae0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE0Cu;
        // 0x1bae10: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae0c) {
            ctx->pc = 0x1BAE38u;
            goto label_1bae38;
        }
    }
    ctx->pc = 0x1BAE14u;
    // 0x1bae14: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BAE14u;
    {
        const bool branch_taken_0x1bae14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE14u;
        // 0x1bae18: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae14) {
            ctx->pc = 0x1BAE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bae00;
        }
    }
    ctx->pc = 0x1BAE1Cu;
    // 0x1bae1c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BAE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE24u);
    ctx->pc = 0x1BAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE1Cu;
    // 0x1bae20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BAE1Cu, 0x1BAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE24u;
label_1bae24:
    // 0x1bae24: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1bae24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bae28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae2c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1BAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE34u);
    ctx->pc = 0x1BAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE2Cu;
    // 0x1bae30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1BAE2Cu, 0x1BAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE34u;
label_1bae34:
    // 0x1bae34: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1bae34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1bae38:
    // 0x1bae38: 0x26a54af8  addiu       $a1, $s5, 0x4AF8
    ctx->pc = 0x1bae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 19192));
    // 0x1bae3c: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BAE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE44u);
    ctx->pc = 0x1BAE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE3Cu;
    // 0x1bae40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BAE3Cu, 0x1BAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE44u;
label_1bae44:
    // 0x1bae44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bae44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bae48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae4c: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BAE4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE54u);
    ctx->pc = 0x1BAE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE4Cu;
    // 0x1bae50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BAE4Cu, 0x1BAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE54u;
label_1bae54:
    // 0x1bae54: 0x8e6301ac  lw          $v1, 0x1AC($s3)
    ctx->pc = 0x1bae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    // 0x1bae58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bae58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bae5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BAE5Cu;
    {
        const bool branch_taken_0x1bae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE5Cu;
        // 0x1bae60: 0xae6301ac  sw          $v1, 0x1AC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae5c) {
            ctx->pc = 0x1BAEA4u;
            goto label_1baea4;
        }
    }
    ctx->pc = 0x1BAE64u;
label_1bae64:
    // 0x1bae64: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BAE64u;
    SET_GPR_U32(ctx, 31, 0x1BAE6Cu);
    ctx->pc = 0x1BAE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE64u;
    // 0x1bae68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BAE64u, 0x1BAE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE6Cu;
label_1bae6c:
    // 0x1bae6c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1bae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1bae70: 0x24a54ae8  addiu       $a1, $a1, 0x4AE8
    ctx->pc = 0x1bae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19176));
    // 0x1bae74: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BAE74u;
    SET_GPR_U32(ctx, 31, 0x1BAE7Cu);
    ctx->pc = 0x1BAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE74u;
    // 0x1bae78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BAE74u, 0x1BAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE7Cu;
label_1bae7c:
    // 0x1bae7c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1bae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1bae80: 0x24a54ae8  addiu       $a1, $a1, 0x4AE8
    ctx->pc = 0x1bae80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19176));
    // 0x1bae84: 0xc10d76a  jal         func_435DA8
    ctx->pc = 0x1BAE84u;
    SET_GPR_U32(ctx, 31, 0x1BAE8Cu);
    ctx->pc = 0x1BAE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE84u;
    // 0x1bae88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435DA8u, 0x1BAE84u, 0x1BAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE8Cu;
label_1bae8c:
    // 0x1bae8c: 0x3b51821  addu        $v1, $sp, $s5
    ctx->pc = 0x1bae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
    // 0x1bae90: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1bae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bae94: 0x26a50001  addiu       $a1, $s5, 0x1
    ctx->pc = 0x1bae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bae98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bae98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bae9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bae9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baea0: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x1baea0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1baea4:
    // 0x1baea4: 0x1640ff7e  bnez        $s2, . + 4 + (-0x82 << 2)
    ctx->pc = 0x1BAEA4u;
    {
        const bool branch_taken_0x1baea4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEA4u;
        // 0x1baea8: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baea4) {
            ctx->pc = 0x1BACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baca0;
        }
    }
    ctx->pc = 0x1BAEACu;
    // 0x1baeac: 0x7bb002c0  lq          $s0, 0x2C0($sp)
    ctx->pc = 0x1baeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_1baeb0:
    // 0x1baeb0: 0x7bb102b0  lq          $s1, 0x2B0($sp)
    ctx->pc = 0x1baeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1baeb4: 0x7bb202a0  lq          $s2, 0x2A0($sp)
    ctx->pc = 0x1baeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1baeb8: 0x7bb30290  lq          $s3, 0x290($sp)
    ctx->pc = 0x1baeb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1baebc: 0x7bb40280  lq          $s4, 0x280($sp)
    ctx->pc = 0x1baebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1baec0: 0x7bb50270  lq          $s5, 0x270($sp)
    ctx->pc = 0x1baec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1baec4: 0x7bb60260  lq          $s6, 0x260($sp)
    ctx->pc = 0x1baec4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1baec8: 0x7bb70250  lq          $s7, 0x250($sp)
    ctx->pc = 0x1baec8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1baecc: 0x7bbe0240  lq          $fp, 0x240($sp)
    ctx->pc = 0x1baeccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1baed0: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x1baed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1baed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAED4u;
        // 0x1baed8: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAEDCu;
    // 0x1baedc: 0x0  nop
    ctx->pc = 0x1baedcu;
    // NOP
    ctx->pc = 0x1baee0u;
}
