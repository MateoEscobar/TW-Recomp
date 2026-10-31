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

// Function: sub_003AE880
// Address: 0x3ae880 - 0x3ae990
void sub_003AE880_0x3ae880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE880_0x3ae880");
#endif

    switch (ctx->pc) {
        case 0x3ae880u: goto label_3ae880;
        case 0x3ae884u: goto label_3ae884;
        case 0x3ae888u: goto label_3ae888;
        case 0x3ae88cu: goto label_3ae88c;
        case 0x3ae890u: goto label_3ae890;
        case 0x3ae894u: goto label_3ae894;
        case 0x3ae898u: goto label_3ae898;
        case 0x3ae89cu: goto label_3ae89c;
        case 0x3ae8a0u: goto label_3ae8a0;
        case 0x3ae8a4u: goto label_3ae8a4;
        case 0x3ae8a8u: goto label_3ae8a8;
        case 0x3ae8acu: goto label_3ae8ac;
        case 0x3ae8b0u: goto label_3ae8b0;
        case 0x3ae8b4u: goto label_3ae8b4;
        case 0x3ae8b8u: goto label_3ae8b8;
        case 0x3ae8bcu: goto label_3ae8bc;
        case 0x3ae8c0u: goto label_3ae8c0;
        case 0x3ae8c4u: goto label_3ae8c4;
        case 0x3ae8c8u: goto label_3ae8c8;
        case 0x3ae8ccu: goto label_3ae8cc;
        case 0x3ae8d0u: goto label_3ae8d0;
        case 0x3ae8d4u: goto label_3ae8d4;
        case 0x3ae8d8u: goto label_3ae8d8;
        case 0x3ae8dcu: goto label_3ae8dc;
        case 0x3ae8e0u: goto label_3ae8e0;
        case 0x3ae8e4u: goto label_3ae8e4;
        case 0x3ae8e8u: goto label_3ae8e8;
        case 0x3ae8ecu: goto label_3ae8ec;
        case 0x3ae8f0u: goto label_3ae8f0;
        case 0x3ae8f4u: goto label_3ae8f4;
        case 0x3ae8f8u: goto label_3ae8f8;
        case 0x3ae8fcu: goto label_3ae8fc;
        case 0x3ae900u: goto label_3ae900;
        case 0x3ae904u: goto label_3ae904;
        case 0x3ae908u: goto label_3ae908;
        case 0x3ae90cu: goto label_3ae90c;
        case 0x3ae910u: goto label_3ae910;
        case 0x3ae914u: goto label_3ae914;
        case 0x3ae918u: goto label_3ae918;
        case 0x3ae91cu: goto label_3ae91c;
        case 0x3ae920u: goto label_3ae920;
        case 0x3ae924u: goto label_3ae924;
        case 0x3ae928u: goto label_3ae928;
        case 0x3ae92cu: goto label_3ae92c;
        case 0x3ae930u: goto label_3ae930;
        case 0x3ae934u: goto label_3ae934;
        case 0x3ae938u: goto label_3ae938;
        case 0x3ae93cu: goto label_3ae93c;
        case 0x3ae940u: goto label_3ae940;
        case 0x3ae944u: goto label_3ae944;
        case 0x3ae948u: goto label_3ae948;
        case 0x3ae94cu: goto label_3ae94c;
        case 0x3ae950u: goto label_3ae950;
        case 0x3ae954u: goto label_3ae954;
        case 0x3ae958u: goto label_3ae958;
        case 0x3ae95cu: goto label_3ae95c;
        case 0x3ae960u: goto label_3ae960;
        case 0x3ae964u: goto label_3ae964;
        case 0x3ae968u: goto label_3ae968;
        case 0x3ae96cu: goto label_3ae96c;
        case 0x3ae970u: goto label_3ae970;
        case 0x3ae974u: goto label_3ae974;
        case 0x3ae978u: goto label_3ae978;
        case 0x3ae97cu: goto label_3ae97c;
        case 0x3ae980u: goto label_3ae980;
        case 0x3ae984u: goto label_3ae984;
        case 0x3ae988u: goto label_3ae988;
        case 0x3ae98cu: goto label_3ae98c;
        default: break;
    }

    ctx->pc = 0x3ae880u;

label_3ae880:
    // 0x3ae880: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3ae880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3ae884:
    // 0x3ae884: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3ae884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3ae888:
    // 0x3ae888: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3ae888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3ae88c:
    // 0x3ae88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae890:
    // 0x3ae890: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3ae890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3ae894:
    // 0x3ae894: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ae894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae898:
    // 0x3ae898: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ae898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ae89c:
    // 0x3ae89c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ae89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ae8a0:
    // 0x3ae8a0: 0x40f809  jalr        $v0
label_3ae8a4:
    if (ctx->pc == 0x3AE8A4u) {
        ctx->pc = 0x3AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8A0u;
        // 0x3ae8a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE8A8u;
        goto label_3ae8a8;
    }
    ctx->pc = 0x3AE8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE8A8u);
        ctx->pc = 0x3AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8A0u;
        // 0x3ae8a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE8A0u, 0x3AE8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE8A8u;
label_3ae8a8:
    // 0x3ae8a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ae8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae8ac:
    // 0x3ae8ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ae8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ae8b0:
    // 0x3ae8b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ae8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ae8b4:
    // 0x3ae8b4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ae8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ae8b8:
    // 0x3ae8b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ae8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ae8bc:
    // 0x3ae8bc: 0x0  nop
    ctx->pc = 0x3ae8bcu;
    // NOP
label_3ae8c0:
    // 0x3ae8c0: 0x0  nop
    ctx->pc = 0x3ae8c0u;
    // NOP
label_3ae8c4:
    // 0x3ae8c4: 0x0  nop
    ctx->pc = 0x3ae8c4u;
    // NOP
label_3ae8c8:
    // 0x3ae8c8: 0x0  nop
    ctx->pc = 0x3ae8c8u;
    // NOP
label_3ae8cc:
    // 0x3ae8cc: 0x0  nop
    ctx->pc = 0x3ae8ccu;
    // NOP
label_3ae8d0:
    // 0x3ae8d0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ae8d4:
    if (ctx->pc == 0x3AE8D4u) {
        ctx->pc = 0x3AE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8D0u;
        // 0x3ae8d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE8D8u;
        goto label_3ae8d8;
    }
    ctx->pc = 0x3AE8D0u;
    {
        const bool branch_taken_0x3ae8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8D0u;
        // 0x3ae8d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae8d0) {
            ctx->pc = 0x3AE8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae8c0;
        }
    }
    ctx->pc = 0x3AE8D8u;
label_3ae8d8:
    // 0x3ae8d8: 0xc138ddc  jal         func_4E3770
label_3ae8dc:
    if (ctx->pc == 0x3AE8DCu) {
        ctx->pc = 0x3AE8E0u;
        goto label_3ae8e0;
    }
    ctx->pc = 0x3AE8D8u;
    SET_GPR_U32(ctx, 31, 0x3AE8E0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AE8D8u, 0x3AE8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE8E0u;
label_3ae8e0:
    // 0x3ae8e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae8e4:
    // 0x3ae8e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ae8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ae8e8:
    // 0x3ae8e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_3ae8ec:
    if (ctx->pc == 0x3AE8ECu) {
        ctx->pc = 0x3AE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8E8u;
        // 0x3ae8ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE8F0u;
        goto label_3ae8f0;
    }
    ctx->pc = 0x3AE8E8u;
    {
        const bool branch_taken_0x3ae8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8E8u;
        // 0x3ae8ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae8e8) {
            ctx->pc = 0x3AE918u;
            goto label_3ae918;
        }
    }
    ctx->pc = 0x3AE8F0u;
label_3ae8f0:
    // 0x3ae8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ae8f4:
    // 0x3ae8f4: 0xc0e858c  jal         func_3A1630
label_3ae8f8:
    if (ctx->pc == 0x3AE8F8u) {
        ctx->pc = 0x3AE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8F4u;
        // 0x3ae8f8: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE8FCu;
        goto label_3ae8fc;
    }
    ctx->pc = 0x3AE8F4u;
    SET_GPR_U32(ctx, 31, 0x3AE8FCu);
    ctx->pc = 0x3AE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE8F4u;
    // 0x3ae8f8: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AE8F4u, 0x3AE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE8FCu;
label_3ae8fc:
    // 0x3ae8fc: 0x3c013e66  lui         $at, 0x3E66
    ctx->pc = 0x3ae8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15974 << 16));
label_3ae900:
    // 0x3ae900: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3ae900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3ae904:
    // 0x3ae904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae908:
    // 0x3ae908: 0x0  nop
    ctx->pc = 0x3ae908u;
    // NOP
label_3ae90c:
    // 0x3ae90c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3ae90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3ae910:
    // 0x3ae910: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae914:
    // 0x3ae914: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ae914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ae918:
    // 0x3ae918: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_3ae91c:
    if (ctx->pc == 0x3AE91Cu) {
        ctx->pc = 0x3AE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE918u;
        // 0x3ae91c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE920u;
        goto label_3ae920;
    }
    ctx->pc = 0x3AE918u;
    {
        const bool branch_taken_0x3ae918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ae918) {
            ctx->pc = 0x3AE91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE918u;
            // 0x3ae91c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE948u;
            goto label_3ae948;
        }
    }
    ctx->pc = 0x3AE920u;
label_3ae920:
    // 0x3ae920: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x3ae920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3ae924:
    // 0x3ae924: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ae924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3ae928:
    // 0x3ae928: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3ae928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3ae92c:
    // 0x3ae92c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3ae92cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3ae930:
    // 0x3ae930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae934:
    // 0x3ae934: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3ae934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3ae938:
    // 0x3ae938: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ae938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ae93c:
    // 0x3ae93c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3ae93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3ae940:
    // 0x3ae940: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3ae940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3ae944:
    // 0x3ae944: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae948:
    // 0x3ae948: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ae948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ae94c:
    // 0x3ae94c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_3ae950:
    if (ctx->pc == 0x3AE950u) {
        ctx->pc = 0x3AE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE94Cu;
        // 0x3ae950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE954u;
        goto label_3ae954;
    }
    ctx->pc = 0x3AE94Cu;
    {
        const bool branch_taken_0x3ae94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE94Cu;
        // 0x3ae950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae94c) {
            ctx->pc = 0x3AE978u;
            goto label_3ae978;
        }
    }
    ctx->pc = 0x3AE954u;
label_3ae954:
    // 0x3ae954: 0xc0e9694  jal         func_3A5A50
label_3ae958:
    if (ctx->pc == 0x3AE958u) {
        ctx->pc = 0x3AE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE954u;
        // 0x3ae958: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE95Cu;
        goto label_3ae95c;
    }
    ctx->pc = 0x3AE954u;
    SET_GPR_U32(ctx, 31, 0x3AE95Cu);
    ctx->pc = 0x3AE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE954u;
    // 0x3ae958: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AE954u, 0x3AE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE95Cu;
label_3ae95c:
    // 0x3ae95c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3ae960:
    if (ctx->pc == 0x3AE960u) {
        ctx->pc = 0x3AE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE95Cu;
        // 0x3ae960: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE964u;
        goto label_3ae964;
    }
    ctx->pc = 0x3AE95Cu;
    {
        const bool branch_taken_0x3ae95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae95c) {
            ctx->pc = 0x3AE960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE95Cu;
            // 0x3ae960: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE96Cu;
            goto label_3ae96c;
        }
    }
    ctx->pc = 0x3AE964u;
label_3ae964:
    // 0x3ae964: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ae968:
    if (ctx->pc == 0x3AE968u) {
        ctx->pc = 0x3AE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE964u;
        // 0x3ae968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE96Cu;
        goto label_3ae96c;
    }
    ctx->pc = 0x3AE964u;
    {
        const bool branch_taken_0x3ae964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE964u;
        // 0x3ae968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae964) {
            ctx->pc = 0x3AE978u;
            goto label_3ae978;
        }
    }
    ctx->pc = 0x3AE96Cu;
label_3ae96c:
    // 0x3ae96c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ae96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae970:
    // 0x3ae970: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ae970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ae974:
    // 0x3ae974: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ae974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3ae978:
    // 0x3ae978: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3ae978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ae97c:
    // 0x3ae97c: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3ae97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ae980:
    // 0x3ae980: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3ae980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ae984:
    // 0x3ae984: 0x3e00008  jr          $ra
label_3ae988:
    if (ctx->pc == 0x3AE988u) {
        ctx->pc = 0x3AE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE984u;
        // 0x3ae988: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE98Cu;
        goto label_3ae98c;
    }
    ctx->pc = 0x3AE984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE984u;
        // 0x3ae988: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE98Cu;
label_3ae98c:
    // 0x3ae98c: 0x0  nop
    ctx->pc = 0x3ae98cu;
    // NOP
    ctx->pc = 0x3ae990u;
}
