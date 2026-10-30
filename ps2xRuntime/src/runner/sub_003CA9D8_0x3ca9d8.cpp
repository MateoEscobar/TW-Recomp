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

// Function: sub_003CA9D8
// Address: 0x3ca9d8 - 0x3cac40
void sub_003CA9D8_0x3ca9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA9D8_0x3ca9d8");
#endif

    switch (ctx->pc) {
        case 0x3ca9d8u: goto label_3ca9d8;
        case 0x3ca9dcu: goto label_3ca9dc;
        case 0x3ca9e0u: goto label_3ca9e0;
        case 0x3ca9e4u: goto label_3ca9e4;
        case 0x3ca9e8u: goto label_3ca9e8;
        case 0x3ca9ecu: goto label_3ca9ec;
        case 0x3ca9f0u: goto label_3ca9f0;
        case 0x3ca9f4u: goto label_3ca9f4;
        case 0x3ca9f8u: goto label_3ca9f8;
        case 0x3ca9fcu: goto label_3ca9fc;
        case 0x3caa00u: goto label_3caa00;
        case 0x3caa04u: goto label_3caa04;
        case 0x3caa08u: goto label_3caa08;
        case 0x3caa0cu: goto label_3caa0c;
        case 0x3caa10u: goto label_3caa10;
        case 0x3caa14u: goto label_3caa14;
        case 0x3caa18u: goto label_3caa18;
        case 0x3caa1cu: goto label_3caa1c;
        case 0x3caa20u: goto label_3caa20;
        case 0x3caa24u: goto label_3caa24;
        case 0x3caa28u: goto label_3caa28;
        case 0x3caa2cu: goto label_3caa2c;
        case 0x3caa30u: goto label_3caa30;
        case 0x3caa34u: goto label_3caa34;
        case 0x3caa38u: goto label_3caa38;
        case 0x3caa3cu: goto label_3caa3c;
        case 0x3caa40u: goto label_3caa40;
        case 0x3caa44u: goto label_3caa44;
        case 0x3caa48u: goto label_3caa48;
        case 0x3caa4cu: goto label_3caa4c;
        case 0x3caa50u: goto label_3caa50;
        case 0x3caa54u: goto label_3caa54;
        case 0x3caa58u: goto label_3caa58;
        case 0x3caa5cu: goto label_3caa5c;
        case 0x3caa60u: goto label_3caa60;
        case 0x3caa64u: goto label_3caa64;
        case 0x3caa68u: goto label_3caa68;
        case 0x3caa6cu: goto label_3caa6c;
        case 0x3caa70u: goto label_3caa70;
        case 0x3caa74u: goto label_3caa74;
        case 0x3caa78u: goto label_3caa78;
        case 0x3caa7cu: goto label_3caa7c;
        case 0x3caa80u: goto label_3caa80;
        case 0x3caa84u: goto label_3caa84;
        case 0x3caa88u: goto label_3caa88;
        case 0x3caa8cu: goto label_3caa8c;
        case 0x3caa90u: goto label_3caa90;
        case 0x3caa94u: goto label_3caa94;
        case 0x3caa98u: goto label_3caa98;
        case 0x3caa9cu: goto label_3caa9c;
        case 0x3caaa0u: goto label_3caaa0;
        case 0x3caaa4u: goto label_3caaa4;
        case 0x3caaa8u: goto label_3caaa8;
        case 0x3caaacu: goto label_3caaac;
        case 0x3caab0u: goto label_3caab0;
        case 0x3caab4u: goto label_3caab4;
        case 0x3caab8u: goto label_3caab8;
        case 0x3caabcu: goto label_3caabc;
        case 0x3caac0u: goto label_3caac0;
        case 0x3caac4u: goto label_3caac4;
        case 0x3caac8u: goto label_3caac8;
        case 0x3caaccu: goto label_3caacc;
        case 0x3caad0u: goto label_3caad0;
        case 0x3caad4u: goto label_3caad4;
        case 0x3caad8u: goto label_3caad8;
        case 0x3caadcu: goto label_3caadc;
        case 0x3caae0u: goto label_3caae0;
        case 0x3caae4u: goto label_3caae4;
        case 0x3caae8u: goto label_3caae8;
        case 0x3caaecu: goto label_3caaec;
        case 0x3caaf0u: goto label_3caaf0;
        case 0x3caaf4u: goto label_3caaf4;
        case 0x3caaf8u: goto label_3caaf8;
        case 0x3caafcu: goto label_3caafc;
        case 0x3cab00u: goto label_3cab00;
        case 0x3cab04u: goto label_3cab04;
        case 0x3cab08u: goto label_3cab08;
        case 0x3cab0cu: goto label_3cab0c;
        case 0x3cab10u: goto label_3cab10;
        case 0x3cab14u: goto label_3cab14;
        case 0x3cab18u: goto label_3cab18;
        case 0x3cab1cu: goto label_3cab1c;
        case 0x3cab20u: goto label_3cab20;
        case 0x3cab24u: goto label_3cab24;
        case 0x3cab28u: goto label_3cab28;
        case 0x3cab2cu: goto label_3cab2c;
        case 0x3cab30u: goto label_3cab30;
        case 0x3cab34u: goto label_3cab34;
        case 0x3cab38u: goto label_3cab38;
        case 0x3cab3cu: goto label_3cab3c;
        case 0x3cab40u: goto label_3cab40;
        case 0x3cab44u: goto label_3cab44;
        case 0x3cab48u: goto label_3cab48;
        case 0x3cab4cu: goto label_3cab4c;
        case 0x3cab50u: goto label_3cab50;
        case 0x3cab54u: goto label_3cab54;
        case 0x3cab58u: goto label_3cab58;
        case 0x3cab5cu: goto label_3cab5c;
        case 0x3cab60u: goto label_3cab60;
        case 0x3cab64u: goto label_3cab64;
        case 0x3cab68u: goto label_3cab68;
        case 0x3cab6cu: goto label_3cab6c;
        case 0x3cab70u: goto label_3cab70;
        case 0x3cab74u: goto label_3cab74;
        case 0x3cab78u: goto label_3cab78;
        case 0x3cab7cu: goto label_3cab7c;
        case 0x3cab80u: goto label_3cab80;
        case 0x3cab84u: goto label_3cab84;
        case 0x3cab88u: goto label_3cab88;
        case 0x3cab8cu: goto label_3cab8c;
        case 0x3cab90u: goto label_3cab90;
        case 0x3cab94u: goto label_3cab94;
        case 0x3cab98u: goto label_3cab98;
        case 0x3cab9cu: goto label_3cab9c;
        case 0x3caba0u: goto label_3caba0;
        case 0x3caba4u: goto label_3caba4;
        case 0x3caba8u: goto label_3caba8;
        case 0x3cabacu: goto label_3cabac;
        case 0x3cabb0u: goto label_3cabb0;
        case 0x3cabb4u: goto label_3cabb4;
        case 0x3cabb8u: goto label_3cabb8;
        case 0x3cabbcu: goto label_3cabbc;
        case 0x3cabc0u: goto label_3cabc0;
        case 0x3cabc4u: goto label_3cabc4;
        case 0x3cabc8u: goto label_3cabc8;
        case 0x3cabccu: goto label_3cabcc;
        case 0x3cabd0u: goto label_3cabd0;
        case 0x3cabd4u: goto label_3cabd4;
        case 0x3cabd8u: goto label_3cabd8;
        case 0x3cabdcu: goto label_3cabdc;
        case 0x3cabe0u: goto label_3cabe0;
        case 0x3cabe4u: goto label_3cabe4;
        case 0x3cabe8u: goto label_3cabe8;
        case 0x3cabecu: goto label_3cabec;
        case 0x3cabf0u: goto label_3cabf0;
        case 0x3cabf4u: goto label_3cabf4;
        case 0x3cabf8u: goto label_3cabf8;
        case 0x3cabfcu: goto label_3cabfc;
        case 0x3cac00u: goto label_3cac00;
        case 0x3cac04u: goto label_3cac04;
        case 0x3cac08u: goto label_3cac08;
        case 0x3cac0cu: goto label_3cac0c;
        case 0x3cac10u: goto label_3cac10;
        case 0x3cac14u: goto label_3cac14;
        case 0x3cac18u: goto label_3cac18;
        case 0x3cac1cu: goto label_3cac1c;
        case 0x3cac20u: goto label_3cac20;
        case 0x3cac24u: goto label_3cac24;
        case 0x3cac28u: goto label_3cac28;
        case 0x3cac2cu: goto label_3cac2c;
        case 0x3cac30u: goto label_3cac30;
        case 0x3cac34u: goto label_3cac34;
        case 0x3cac38u: goto label_3cac38;
        case 0x3cac3cu: goto label_3cac3c;
        default: break;
    }

    ctx->pc = 0x3ca9d8u;

label_3ca9d8:
    // 0x3ca9d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ca9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ca9dc:
    // 0x3ca9dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ca9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3ca9e0:
    // 0x3ca9e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ca9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ca9e4:
    // 0x3ca9e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ca9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3ca9e8:
    // 0x3ca9e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ca9e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca9ec:
    // 0x3ca9ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ca9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3ca9f0:
    // 0x3ca9f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ca9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ca9f4:
    // 0x3ca9f4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3ca9f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3ca9f8:
    // 0x3ca9f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ca9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ca9fc:
    // 0x3ca9fc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ca9fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3caa00:
    // 0x3caa00: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3caa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3caa04:
    // 0x3caa04: 0x40f809  jalr        $v0
label_3caa08:
    if (ctx->pc == 0x3CAA08u) {
        ctx->pc = 0x3CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA04u;
        // 0x3caa08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA0Cu;
        goto label_3caa0c;
    }
    ctx->pc = 0x3CAA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAA0Cu);
        ctx->pc = 0x3CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA04u;
        // 0x3caa08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAA04u, 0x3CAA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAA0Cu;
label_3caa0c:
    // 0x3caa0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3caa0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3caa10:
    // 0x3caa10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3caa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3caa14:
    // 0x3caa14: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3caa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3caa18:
    // 0x3caa18: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3caa18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3caa1c:
    // 0x3caa1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3caa20:
    if (ctx->pc == 0x3CAA20u) {
        ctx->pc = 0x3CAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA1Cu;
        // 0x3caa20: 0x8e4500b4  lw          $a1, 0xB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA24u;
        goto label_3caa24;
    }
    ctx->pc = 0x3CAA1Cu;
    {
        const bool branch_taken_0x3caa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA1Cu;
        // 0x3caa20: 0x8e4500b4  lw          $a1, 0xB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa1c) {
            ctx->pc = 0x3CAA48u;
            goto label_3caa48;
        }
    }
    ctx->pc = 0x3CAA24u;
label_3caa24:
    // 0x3caa24: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3caa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3caa28:
    // 0x3caa28: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
label_3caa2c:
    if (ctx->pc == 0x3CAA2Cu) {
        ctx->pc = 0x3CAA30u;
        goto label_3caa30;
    }
    ctx->pc = 0x3CAA28u;
    {
        const bool branch_taken_0x3caa28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3caa28) {
            ctx->pc = 0x3CAA48u;
            goto label_3caa48;
        }
    }
    ctx->pc = 0x3CAA30u;
label_3caa30:
    // 0x3caa30: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x3caa30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_3caa34:
    // 0x3caa34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3caa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3caa38:
    // 0x3caa38: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x3caa38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3caa3c:
    // 0x3caa3c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_3caa40:
    if (ctx->pc == 0x3CAA40u) {
        ctx->pc = 0x3CAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA3Cu;
        // 0x3caa40: 0xae4400b4  sw          $a0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA44u;
        goto label_3caa44;
    }
    ctx->pc = 0x3CAA3Cu;
    {
        const bool branch_taken_0x3caa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3caa3c) {
            ctx->pc = 0x3CAA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAA3Cu;
            // 0x3caa40: 0xae4400b4  sw          $a0, 0xB4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAA48u;
            goto label_3caa48;
        }
    }
    ctx->pc = 0x3CAA44u;
label_3caa44:
    // 0x3caa44: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3caa44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3caa48:
    // 0x3caa48: 0xc047e6c  jal         func_11F9B0
label_3caa4c:
    if (ctx->pc == 0x3CAA4Cu) {
        ctx->pc = 0x3CAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA48u;
        // 0x3caa4c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA50u;
        goto label_3caa50;
    }
    ctx->pc = 0x3CAA48u;
    SET_GPR_U32(ctx, 31, 0x3CAA50u);
    ctx->pc = 0x3CAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAA48u;
    // 0x3caa4c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3CAA48u, 0x3CAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAA50u;
label_3caa50:
    // 0x3caa50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3caa50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3caa54:
    // 0x3caa54: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_3caa58:
    if (ctx->pc == 0x3CAA58u) {
        ctx->pc = 0x3CAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA54u;
        // 0x3caa58: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA5Cu;
        goto label_3caa5c;
    }
    ctx->pc = 0x3CAA54u;
    {
        const bool branch_taken_0x3caa54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3caa54) {
            ctx->pc = 0x3CAA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAA54u;
            // 0x3caa58: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAA84u;
            goto label_3caa84;
        }
    }
    ctx->pc = 0x3CAA5Cu;
label_3caa5c:
    // 0x3caa5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3caa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3caa60:
    // 0x3caa60: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x3caa60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_3caa64:
    // 0x3caa64: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x3caa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_3caa68:
    // 0x3caa68: 0x40f809  jalr        $v0
label_3caa6c:
    if (ctx->pc == 0x3CAA6Cu) {
        ctx->pc = 0x3CAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA68u;
        // 0x3caa6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA70u;
        goto label_3caa70;
    }
    ctx->pc = 0x3CAA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAA70u);
        ctx->pc = 0x3CAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA68u;
        // 0x3caa6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAA68u, 0x3CAA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAA70u;
label_3caa70:
    // 0x3caa70: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3caa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3caa74:
    // 0x3caa74: 0x50430018  beql        $v0, $v1, . + 4 + (0x18 << 2)
label_3caa78:
    if (ctx->pc == 0x3CAA78u) {
        ctx->pc = 0x3CAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA74u;
        // 0x3caa78: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA7Cu;
        goto label_3caa7c;
    }
    ctx->pc = 0x3CAA74u;
    {
        const bool branch_taken_0x3caa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3caa74) {
            ctx->pc = 0x3CAA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAA74u;
            // 0x3caa78: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAAD8u;
            goto label_3caad8;
        }
    }
    ctx->pc = 0x3CAA7Cu;
label_3caa7c:
    // 0x3caa7c: 0x10000061  b           . + 4 + (0x61 << 2)
label_3caa80:
    if (ctx->pc == 0x3CAA80u) {
        ctx->pc = 0x3CAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA7Cu;
        // 0x3caa80: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA84u;
        goto label_3caa84;
    }
    ctx->pc = 0x3CAA7Cu;
    {
        const bool branch_taken_0x3caa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA7Cu;
        // 0x3caa80: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa7c) {
            ctx->pc = 0x3CAC04u;
            goto label_3cac04;
        }
    }
    ctx->pc = 0x3CAA84u;
label_3caa84:
    // 0x3caa84: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_3caa88:
    if (ctx->pc == 0x3CAA88u) {
        ctx->pc = 0x3CAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA84u;
        // 0x3caa88: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA8Cu;
        goto label_3caa8c;
    }
    ctx->pc = 0x3CAA84u;
    {
        const bool branch_taken_0x3caa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA84u;
        // 0x3caa88: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa84) {
            ctx->pc = 0x3CAC04u;
            goto label_3cac04;
        }
    }
    ctx->pc = 0x3CAA8Cu;
label_3caa8c:
    // 0x3caa8c: 0xc047ab8  jal         func_11EAE0
label_3caa90:
    if (ctx->pc == 0x3CAA90u) {
        ctx->pc = 0x3CAA94u;
        goto label_3caa94;
    }
    ctx->pc = 0x3CAA8Cu;
    SET_GPR_U32(ctx, 31, 0x3CAA94u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3CAA8Cu, 0x3CAA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAA94u;
label_3caa94:
    // 0x3caa94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3caa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3caa98:
    // 0x3caa98: 0x1443005a  bne         $v0, $v1, . + 4 + (0x5A << 2)
label_3caa9c:
    if (ctx->pc == 0x3CAA9Cu) {
        ctx->pc = 0x3CAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA98u;
        // 0x3caa9c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAAA0u;
        goto label_3caaa0;
    }
    ctx->pc = 0x3CAA98u;
    {
        const bool branch_taken_0x3caa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA98u;
        // 0x3caa9c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa98) {
            ctx->pc = 0x3CAC04u;
            goto label_3cac04;
        }
    }
    ctx->pc = 0x3CAAA0u;
label_3caaa0:
    // 0x3caaa0: 0xc047e6c  jal         func_11F9B0
label_3caaa4:
    if (ctx->pc == 0x3CAAA4u) {
        ctx->pc = 0x3CAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAA0u;
        // 0x3caaa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAAA8u;
        goto label_3caaa8;
    }
    ctx->pc = 0x3CAAA0u;
    SET_GPR_U32(ctx, 31, 0x3CAAA8u);
    ctx->pc = 0x3CAAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAAA0u;
    // 0x3caaa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3CAAA0u, 0x3CAAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAAA8u;
label_3caaa8:
    // 0x3caaa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3caaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3caaac:
    // 0x3caaac: 0x52000055  beql        $s0, $zero, . + 4 + (0x55 << 2)
label_3caab0:
    if (ctx->pc == 0x3CAAB0u) {
        ctx->pc = 0x3CAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAACu;
        // 0x3caab0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAAB4u;
        goto label_3caab4;
    }
    ctx->pc = 0x3CAAACu;
    {
        const bool branch_taken_0x3caaac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3caaac) {
            ctx->pc = 0x3CAAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAAACu;
            // 0x3caab0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAC04u;
            goto label_3cac04;
        }
    }
    ctx->pc = 0x3CAAB4u;
label_3caab4:
    // 0x3caab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3caab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3caab8:
    // 0x3caab8: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x3caab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_3caabc:
    // 0x3caabc: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x3caabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_3caac0:
    // 0x3caac0: 0x40f809  jalr        $v0
label_3caac4:
    if (ctx->pc == 0x3CAAC4u) {
        ctx->pc = 0x3CAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAC0u;
        // 0x3caac4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAAC8u;
        goto label_3caac8;
    }
    ctx->pc = 0x3CAAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAAC8u);
        ctx->pc = 0x3CAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAC0u;
        // 0x3caac4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAAC0u, 0x3CAAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAAC8u;
label_3caac8:
    // 0x3caac8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3caac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3caacc:
    // 0x3caacc: 0x5443004d  bnel        $v0, $v1, . + 4 + (0x4D << 2)
label_3caad0:
    if (ctx->pc == 0x3CAAD0u) {
        ctx->pc = 0x3CAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAACCu;
        // 0x3caad0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAAD4u;
        goto label_3caad4;
    }
    ctx->pc = 0x3CAACCu;
    {
        const bool branch_taken_0x3caacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3caacc) {
            ctx->pc = 0x3CAAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAACCu;
            // 0x3caad0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAC04u;
            goto label_3cac04;
        }
    }
    ctx->pc = 0x3CAAD4u;
label_3caad4:
    // 0x3caad4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3caad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3caad8:
    // 0x3caad8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3caad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3caadc:
    // 0x3caadc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3caadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3caae0:
    // 0x3caae0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3caae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3caae4:
    // 0x3caae4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3caae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3caae8:
    // 0x3caae8: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x3caae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3caaec:
    // 0x3caaec: 0x40f809  jalr        $v0
label_3caaf0:
    if (ctx->pc == 0x3CAAF0u) {
        ctx->pc = 0x3CAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAECu;
        // 0x3caaf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAAF4u;
        goto label_3caaf4;
    }
    ctx->pc = 0x3CAAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAAF4u);
        ctx->pc = 0x3CAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAECu;
        // 0x3caaf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAAECu, 0x3CAAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAAF4u;
label_3caaf4:
    // 0x3caaf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3caaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3caaf8:
    // 0x3caaf8: 0xc0cdb38  jal         func_336CE0
label_3caafc:
    if (ctx->pc == 0x3CAAFCu) {
        ctx->pc = 0x3CAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAF8u;
        // 0x3caafc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB00u;
        goto label_3cab00;
    }
    ctx->pc = 0x3CAAF8u;
    SET_GPR_U32(ctx, 31, 0x3CAB00u);
    ctx->pc = 0x3CAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAAF8u;
    // 0x3caafc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3CAAF8u, 0x3CAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAB00u;
label_3cab00:
    // 0x3cab00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3cab00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3cab04:
    // 0x3cab04: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x3cab04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_3cab08:
    // 0x3cab08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cab08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cab0c:
    // 0x3cab0c: 0x0  nop
    ctx->pc = 0x3cab0cu;
    // NOP
label_3cab10:
    // 0x3cab10: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3cab10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cab14:
    // 0x3cab14: 0x0  nop
    ctx->pc = 0x3cab14u;
    // NOP
label_3cab18:
    // 0x3cab18: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_3cab1c:
    if (ctx->pc == 0x3CAB1Cu) {
        ctx->pc = 0x3CAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB18u;
        // 0x3cab1c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB20u;
        goto label_3cab20;
    }
    ctx->pc = 0x3CAB18u;
    {
        const bool branch_taken_0x3cab18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cab18) {
            ctx->pc = 0x3CAB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAB18u;
            // 0x3cab1c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAB70u;
            goto label_3cab70;
        }
    }
    ctx->pc = 0x3CAB20u;
label_3cab20:
    // 0x3cab20: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3cab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3cab24:
    // 0x3cab24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cab28:
    // 0x3cab28: 0xc0e947e  jal         func_3A51F8
label_3cab2c:
    if (ctx->pc == 0x3CAB2Cu) {
        ctx->pc = 0x3CAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB28u;
        // 0x3cab2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB30u;
        goto label_3cab30;
    }
    ctx->pc = 0x3CAB28u;
    SET_GPR_U32(ctx, 31, 0x3CAB30u);
    ctx->pc = 0x3CAB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAB28u;
    // 0x3cab2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3CAB28u, 0x3CAB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAB30u;
label_3cab30:
    // 0x3cab30: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3cab34:
    if (ctx->pc == 0x3CAB34u) {
        ctx->pc = 0x3CAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB30u;
        // 0x3cab34: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB38u;
        goto label_3cab38;
    }
    ctx->pc = 0x3CAB30u;
    {
        const bool branch_taken_0x3cab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cab30) {
            ctx->pc = 0x3CAB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAB30u;
            // 0x3cab34: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAB70u;
            goto label_3cab70;
        }
    }
    ctx->pc = 0x3CAB38u;
label_3cab38:
    // 0x3cab38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3cab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cab3c:
    // 0x3cab3c: 0x84640298  lh          $a0, 0x298($v1)
    ctx->pc = 0x3cab3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 664)));
label_3cab40:
    // 0x3cab40: 0x8c62029c  lw          $v0, 0x29C($v1)
    ctx->pc = 0x3cab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 668)));
label_3cab44:
    // 0x3cab44: 0x40f809  jalr        $v0
label_3cab48:
    if (ctx->pc == 0x3CAB48u) {
        ctx->pc = 0x3CAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB44u;
        // 0x3cab48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB4Cu;
        goto label_3cab4c;
    }
    ctx->pc = 0x3CAB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAB4Cu);
        ctx->pc = 0x3CAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB44u;
        // 0x3cab48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAB44u, 0x3CAB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAB4Cu;
label_3cab4c:
    // 0x3cab4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3cab50:
    if (ctx->pc == 0x3CAB50u) {
        ctx->pc = 0x3CAB54u;
        goto label_3cab54;
    }
    ctx->pc = 0x3CAB4Cu;
    {
        const bool branch_taken_0x3cab4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cab4c) {
            ctx->pc = 0x3CAB70u;
            goto label_3cab70;
        }
    }
    ctx->pc = 0x3CAB54u;
label_3cab54:
    // 0x3cab54: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3cab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3cab58:
    // 0x3cab58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cab58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cab5c:
    // 0x3cab5c: 0x0  nop
    ctx->pc = 0x3cab5cu;
    // NOP
label_3cab60:
    // 0x3cab60: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cab60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cab64:
    // 0x3cab64: 0x0  nop
    ctx->pc = 0x3cab64u;
    // NOP
label_3cab68:
    // 0x3cab68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3cab6c:
    if (ctx->pc == 0x3CAB6Cu) {
        ctx->pc = 0x3CAB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB68u;
        // 0x3cab6c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB70u;
        goto label_3cab70;
    }
    ctx->pc = 0x3CAB68u;
    {
        const bool branch_taken_0x3cab68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cab68) {
            ctx->pc = 0x3CAB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAB68u;
            // 0x3cab6c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAB70u;
            goto label_3cab70;
        }
    }
    ctx->pc = 0x3CAB70u;
label_3cab70:
    // 0x3cab70: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_3cab74:
    if (ctx->pc == 0x3CAB74u) {
        ctx->pc = 0x3CAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB70u;
        // 0x3cab74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB78u;
        goto label_3cab78;
    }
    ctx->pc = 0x3CAB70u;
    {
        const bool branch_taken_0x3cab70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB70u;
        // 0x3cab74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab70) {
            ctx->pc = 0x3CAB94u;
            goto label_3cab94;
        }
    }
    ctx->pc = 0x3CAB78u;
label_3cab78:
    // 0x3cab78: 0xc0e858c  jal         func_3A1630
label_3cab7c:
    if (ctx->pc == 0x3CAB7Cu) {
        ctx->pc = 0x3CAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB78u;
        // 0x3cab7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB80u;
        goto label_3cab80;
    }
    ctx->pc = 0x3CAB78u;
    SET_GPR_U32(ctx, 31, 0x3CAB80u);
    ctx->pc = 0x3CAB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAB78u;
    // 0x3cab7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CAB78u, 0x3CAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAB80u;
label_3cab80:
    // 0x3cab80: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3cab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cab84:
    // 0x3cab84: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3cab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3cab88:
    // 0x3cab88: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3cab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3cab8c:
    // 0x3cab8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3cab8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3cab90:
    // 0x3cab90: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x3cab90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_3cab94:
    // 0x3cab94: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x3cab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_3cab98:
    // 0x3cab98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cab98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cab9c:
    // 0x3cab9c: 0x0  nop
    ctx->pc = 0x3cab9cu;
    // NOP
label_3caba0:
    // 0x3caba0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3caba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3caba4:
    // 0x3caba4: 0x0  nop
    ctx->pc = 0x3caba4u;
    // NOP
label_3caba8:
    // 0x3caba8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3cabac:
    if (ctx->pc == 0x3CABACu) {
        ctx->pc = 0x3CABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABA8u;
        // 0x3cabac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABB0u;
        goto label_3cabb0;
    }
    ctx->pc = 0x3CABA8u;
    {
        const bool branch_taken_0x3caba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABA8u;
        // 0x3cabac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caba8) {
            ctx->pc = 0x3CABCCu;
            goto label_3cabcc;
        }
    }
    ctx->pc = 0x3CABB0u;
label_3cabb0:
    // 0x3cabb0: 0xc0e858c  jal         func_3A1630
label_3cabb4:
    if (ctx->pc == 0x3CABB4u) {
        ctx->pc = 0x3CABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABB0u;
        // 0x3cabb4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABB8u;
        goto label_3cabb8;
    }
    ctx->pc = 0x3CABB0u;
    SET_GPR_U32(ctx, 31, 0x3CABB8u);
    ctx->pc = 0x3CABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CABB0u;
    // 0x3cabb4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CABB0u, 0x3CABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABB8u;
label_3cabb8:
    // 0x3cabb8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3cabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cabbc:
    // 0x3cabbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3cabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3cabc0:
    // 0x3cabc0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3cabc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3cabc4:
    // 0x3cabc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3cabc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3cabc8:
    // 0x3cabc8: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x3cabc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_3cabcc:
    // 0x3cabcc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3cabccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cabd0:
    // 0x3cabd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3cabd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cabd4:
    // 0x3cabd4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3cabd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3cabd8:
    // 0x3cabd8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3cabdc:
    if (ctx->pc == 0x3CABDCu) {
        ctx->pc = 0x3CABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABD8u;
        // 0x3cabdc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABE0u;
        goto label_3cabe0;
    }
    ctx->pc = 0x3CABD8u;
    {
        const bool branch_taken_0x3cabd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABD8u;
        // 0x3cabdc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cabd8) {
            ctx->pc = 0x3CAC18u;
            goto label_3cac18;
        }
    }
    ctx->pc = 0x3CABE0u;
label_3cabe0:
    // 0x3cabe0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3cabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cabe4:
    // 0x3cabe4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3cabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3cabe8:
    // 0x3cabe8: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3cabe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3cabec:
    // 0x3cabec: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3cabecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3cabf0:
    // 0x3cabf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3cabf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3cabf4:
    // 0x3cabf4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3cabf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3cabf8:
    // 0x3cabf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3cabfc:
    if (ctx->pc == 0x3CABFCu) {
        ctx->pc = 0x3CABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABF8u;
        // 0x3cabfc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC00u;
        goto label_3cac00;
    }
    ctx->pc = 0x3CABF8u;
    {
        const bool branch_taken_0x3cabf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABF8u;
        // 0x3cabfc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cabf8) {
            ctx->pc = 0x3CAC18u;
            goto label_3cac18;
        }
    }
    ctx->pc = 0x3CAC00u;
label_3cac00:
    // 0x3cac00: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3cac00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3cac04:
    // 0x3cac04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cac08:
    // 0x3cac08: 0x8c8344cc  lw          $v1, 0x44CC($a0)
    ctx->pc = 0x3cac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17612)));
label_3cac0c:
    // 0x3cac0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3cac10:
    // 0x3cac10: 0x10000003  b           . + 4 + (0x3 << 2)
label_3cac14:
    if (ctx->pc == 0x3CAC14u) {
        ctx->pc = 0x3CAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC10u;
        // 0x3cac14: 0xac8344cc  sw          $v1, 0x44CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC18u;
        goto label_3cac18;
    }
    ctx->pc = 0x3CAC10u;
    {
        const bool branch_taken_0x3cac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC10u;
        // 0x3cac14: 0xac8344cc  sw          $v1, 0x44CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cac10) {
            ctx->pc = 0x3CAC20u;
            goto label_3cac20;
        }
    }
    ctx->pc = 0x3CAC18u;
label_3cac18:
    // 0x3cac18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cac18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cac1c:
    // 0x3cac1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3cac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3cac20:
    // 0x3cac20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3cac20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cac24:
    // 0x3cac24: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3cac24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cac28:
    // 0x3cac28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3cac28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cac2c:
    // 0x3cac2c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3cac2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cac30:
    // 0x3cac30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cac30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cac34:
    // 0x3cac34: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3cac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cac38:
    // 0x3cac38: 0x3e00008  jr          $ra
label_3cac3c:
    if (ctx->pc == 0x3CAC3Cu) {
        ctx->pc = 0x3CAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC38u;
        // 0x3cac3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC40u;
        goto label_fallthrough_0x3cac38;
    }
    ctx->pc = 0x3CAC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC38u;
        // 0x3cac3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cac38:
    ctx->pc = 0x3CAC40u;
}
