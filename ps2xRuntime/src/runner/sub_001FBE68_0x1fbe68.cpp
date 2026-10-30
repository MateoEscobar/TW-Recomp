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

// Function: sub_001FBE68
// Address: 0x1fbe68 - 0x1fc078
void sub_001FBE68_0x1fbe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBE68_0x1fbe68");
#endif

    switch (ctx->pc) {
        case 0x1fbe68u: goto label_1fbe68;
        case 0x1fbe6cu: goto label_1fbe6c;
        case 0x1fbe70u: goto label_1fbe70;
        case 0x1fbe74u: goto label_1fbe74;
        case 0x1fbe78u: goto label_1fbe78;
        case 0x1fbe7cu: goto label_1fbe7c;
        case 0x1fbe80u: goto label_1fbe80;
        case 0x1fbe84u: goto label_1fbe84;
        case 0x1fbe88u: goto label_1fbe88;
        case 0x1fbe8cu: goto label_1fbe8c;
        case 0x1fbe90u: goto label_1fbe90;
        case 0x1fbe94u: goto label_1fbe94;
        case 0x1fbe98u: goto label_1fbe98;
        case 0x1fbe9cu: goto label_1fbe9c;
        case 0x1fbea0u: goto label_1fbea0;
        case 0x1fbea4u: goto label_1fbea4;
        case 0x1fbea8u: goto label_1fbea8;
        case 0x1fbeacu: goto label_1fbeac;
        case 0x1fbeb0u: goto label_1fbeb0;
        case 0x1fbeb4u: goto label_1fbeb4;
        case 0x1fbeb8u: goto label_1fbeb8;
        case 0x1fbebcu: goto label_1fbebc;
        case 0x1fbec0u: goto label_1fbec0;
        case 0x1fbec4u: goto label_1fbec4;
        case 0x1fbec8u: goto label_1fbec8;
        case 0x1fbeccu: goto label_1fbecc;
        case 0x1fbed0u: goto label_1fbed0;
        case 0x1fbed4u: goto label_1fbed4;
        case 0x1fbed8u: goto label_1fbed8;
        case 0x1fbedcu: goto label_1fbedc;
        case 0x1fbee0u: goto label_1fbee0;
        case 0x1fbee4u: goto label_1fbee4;
        case 0x1fbee8u: goto label_1fbee8;
        case 0x1fbeecu: goto label_1fbeec;
        case 0x1fbef0u: goto label_1fbef0;
        case 0x1fbef4u: goto label_1fbef4;
        case 0x1fbef8u: goto label_1fbef8;
        case 0x1fbefcu: goto label_1fbefc;
        case 0x1fbf00u: goto label_1fbf00;
        case 0x1fbf04u: goto label_1fbf04;
        case 0x1fbf08u: goto label_1fbf08;
        case 0x1fbf0cu: goto label_1fbf0c;
        case 0x1fbf10u: goto label_1fbf10;
        case 0x1fbf14u: goto label_1fbf14;
        case 0x1fbf18u: goto label_1fbf18;
        case 0x1fbf1cu: goto label_1fbf1c;
        case 0x1fbf20u: goto label_1fbf20;
        case 0x1fbf24u: goto label_1fbf24;
        case 0x1fbf28u: goto label_1fbf28;
        case 0x1fbf2cu: goto label_1fbf2c;
        case 0x1fbf30u: goto label_1fbf30;
        case 0x1fbf34u: goto label_1fbf34;
        case 0x1fbf38u: goto label_1fbf38;
        case 0x1fbf3cu: goto label_1fbf3c;
        case 0x1fbf40u: goto label_1fbf40;
        case 0x1fbf44u: goto label_1fbf44;
        case 0x1fbf48u: goto label_1fbf48;
        case 0x1fbf4cu: goto label_1fbf4c;
        case 0x1fbf50u: goto label_1fbf50;
        case 0x1fbf54u: goto label_1fbf54;
        case 0x1fbf58u: goto label_1fbf58;
        case 0x1fbf5cu: goto label_1fbf5c;
        case 0x1fbf60u: goto label_1fbf60;
        case 0x1fbf64u: goto label_1fbf64;
        case 0x1fbf68u: goto label_1fbf68;
        case 0x1fbf6cu: goto label_1fbf6c;
        case 0x1fbf70u: goto label_1fbf70;
        case 0x1fbf74u: goto label_1fbf74;
        case 0x1fbf78u: goto label_1fbf78;
        case 0x1fbf7cu: goto label_1fbf7c;
        case 0x1fbf80u: goto label_1fbf80;
        case 0x1fbf84u: goto label_1fbf84;
        case 0x1fbf88u: goto label_1fbf88;
        case 0x1fbf8cu: goto label_1fbf8c;
        case 0x1fbf90u: goto label_1fbf90;
        case 0x1fbf94u: goto label_1fbf94;
        case 0x1fbf98u: goto label_1fbf98;
        case 0x1fbf9cu: goto label_1fbf9c;
        case 0x1fbfa0u: goto label_1fbfa0;
        case 0x1fbfa4u: goto label_1fbfa4;
        case 0x1fbfa8u: goto label_1fbfa8;
        case 0x1fbfacu: goto label_1fbfac;
        case 0x1fbfb0u: goto label_1fbfb0;
        case 0x1fbfb4u: goto label_1fbfb4;
        case 0x1fbfb8u: goto label_1fbfb8;
        case 0x1fbfbcu: goto label_1fbfbc;
        case 0x1fbfc0u: goto label_1fbfc0;
        case 0x1fbfc4u: goto label_1fbfc4;
        case 0x1fbfc8u: goto label_1fbfc8;
        case 0x1fbfccu: goto label_1fbfcc;
        case 0x1fbfd0u: goto label_1fbfd0;
        case 0x1fbfd4u: goto label_1fbfd4;
        case 0x1fbfd8u: goto label_1fbfd8;
        case 0x1fbfdcu: goto label_1fbfdc;
        case 0x1fbfe0u: goto label_1fbfe0;
        case 0x1fbfe4u: goto label_1fbfe4;
        case 0x1fbfe8u: goto label_1fbfe8;
        case 0x1fbfecu: goto label_1fbfec;
        case 0x1fbff0u: goto label_1fbff0;
        case 0x1fbff4u: goto label_1fbff4;
        case 0x1fbff8u: goto label_1fbff8;
        case 0x1fbffcu: goto label_1fbffc;
        case 0x1fc000u: goto label_1fc000;
        case 0x1fc004u: goto label_1fc004;
        case 0x1fc008u: goto label_1fc008;
        case 0x1fc00cu: goto label_1fc00c;
        case 0x1fc010u: goto label_1fc010;
        case 0x1fc014u: goto label_1fc014;
        case 0x1fc018u: goto label_1fc018;
        case 0x1fc01cu: goto label_1fc01c;
        case 0x1fc020u: goto label_1fc020;
        case 0x1fc024u: goto label_1fc024;
        case 0x1fc028u: goto label_1fc028;
        case 0x1fc02cu: goto label_1fc02c;
        case 0x1fc030u: goto label_1fc030;
        case 0x1fc034u: goto label_1fc034;
        case 0x1fc038u: goto label_1fc038;
        case 0x1fc03cu: goto label_1fc03c;
        case 0x1fc040u: goto label_1fc040;
        case 0x1fc044u: goto label_1fc044;
        case 0x1fc048u: goto label_1fc048;
        case 0x1fc04cu: goto label_1fc04c;
        case 0x1fc050u: goto label_1fc050;
        case 0x1fc054u: goto label_1fc054;
        case 0x1fc058u: goto label_1fc058;
        case 0x1fc05cu: goto label_1fc05c;
        case 0x1fc060u: goto label_1fc060;
        case 0x1fc064u: goto label_1fc064;
        case 0x1fc068u: goto label_1fc068;
        case 0x1fc06cu: goto label_1fc06c;
        case 0x1fc070u: goto label_1fc070;
        case 0x1fc074u: goto label_1fc074;
        default: break;
    }

    ctx->pc = 0x1fbe68u;

label_1fbe68:
    // 0x1fbe68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fbe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1fbe6c:
    // 0x1fbe6c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fbe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1fbe70:
    // 0x1fbe70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1fbe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1fbe74:
    // 0x1fbe74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fbe74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe78:
    // 0x1fbe78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1fbe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1fbe7c:
    // 0x1fbe7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fbe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fbe80:
    // 0x1fbe80: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1fbe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1fbe84:
    // 0x1fbe84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fbe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fbe88:
    // 0x1fbe88: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1fbe88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1fbe8c:
    // 0x1fbe8c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1fbe8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1fbe90:
    // 0x1fbe90: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1fbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1fbe94:
    // 0x1fbe94: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_1fbe98:
    if (ctx->pc == 0x1FBE98u) {
        ctx->pc = 0x1FBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE94u;
        // 0x1fbe98: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE9Cu;
        goto label_1fbe9c;
    }
    ctx->pc = 0x1FBE94u;
    {
        const bool branch_taken_0x1fbe94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE94u;
        // 0x1fbe98: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe94) {
            ctx->pc = 0x1FC050u;
            goto label_1fc050;
        }
    }
    ctx->pc = 0x1FBE9Cu;
label_1fbe9c:
    // 0x1fbe9c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1fbe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1fbea0:
    // 0x1fbea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbea4:
    // 0x1fbea4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fbea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fbea8:
    // 0x1fbea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fbea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fbeac:
    // 0x1fbeac: 0xc06ba26  jal         func_1AE898
label_1fbeb0:
    if (ctx->pc == 0x1FBEB0u) {
        ctx->pc = 0x1FBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEACu;
        // 0x1fbeb0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBEB4u;
        goto label_1fbeb4;
    }
    ctx->pc = 0x1FBEACu;
    SET_GPR_U32(ctx, 31, 0x1FBEB4u);
    ctx->pc = 0x1FBEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBEACu;
    // 0x1fbeb0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1FBEACu, 0x1FBEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEB4u;
label_1fbeb4:
    // 0x1fbeb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fbeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fbeb8:
    // 0x1fbeb8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fbeb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fbebc:
    // 0x1fbebc: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x1fbebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_1fbec0:
    // 0x1fbec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fbec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fbec4:
    // 0x1fbec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbec8:
    // 0x1fbec8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fbec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fbecc:
    // 0x1fbecc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fbeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1fbed0:
    // 0x1fbed0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fbed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fbed4:
    // 0x1fbed4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1fbed4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fbed8:
    // 0x1fbed8: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1fbed8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1fbedc:
    // 0x1fbedc: 0xc048b52  jal         func_122D48
label_1fbee0:
    if (ctx->pc == 0x1FBEE0u) {
        ctx->pc = 0x1FBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEDCu;
        // 0x1fbee0: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBEE4u;
        goto label_1fbee4;
    }
    ctx->pc = 0x1FBEDCu;
    SET_GPR_U32(ctx, 31, 0x1FBEE4u);
    ctx->pc = 0x1FBEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBEDCu;
    // 0x1fbee0: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1FBEDCu, 0x1FBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEE4u;
label_1fbee4:
    // 0x1fbee4: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x1fbee4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1fbee8:
    // 0x1fbee8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1fbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1fbeec:
    // 0x1fbeec: 0x24537ea8  addiu       $s3, $v0, 0x7EA8
    ctx->pc = 0x1fbeecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32424));
label_1fbef0:
    // 0x1fbef0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fbef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fbef4:
    // 0x1fbef4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1fbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1fbef8:
    // 0x1fbef8: 0x2409002a  addiu       $t1, $zero, 0x2A
    ctx->pc = 0x1fbef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1fbefc:
    // 0x1fbefc: 0x24a57e90  addiu       $a1, $a1, 0x7E90
    ctx->pc = 0x1fbefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32400));
label_1fbf00:
    // 0x1fbf00: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1fbf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fbf04:
    // 0x1fbf04: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fbf04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fbf08:
    // 0x1fbf08: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fbf08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fbf0c:
    // 0x1fbf0c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fbf10:
    // 0x1fbf10: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fbf10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf14:
    // 0x1fbf14: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fbf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1fbf18:
    // 0x1fbf18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fbf18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf1c:
    // 0x1fbf1c: 0x40f809  jalr        $v0
label_1fbf20:
    if (ctx->pc == 0x1FBF20u) {
        ctx->pc = 0x1FBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF1Cu;
        // 0x1fbf20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF24u;
        goto label_1fbf24;
    }
    ctx->pc = 0x1FBF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FBF24u);
        ctx->pc = 0x1FBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF1Cu;
        // 0x1fbf20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF1Cu, 0x1FBF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBF24u;
label_1fbf24:
    // 0x1fbf24: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1fbf24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf28:
    // 0x1fbf28: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_1fbf2c:
    if (ctx->pc == 0x1FBF2Cu) {
        ctx->pc = 0x1FBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF28u;
        // 0x1fbf2c: 0xae49008c  sw          $t1, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF30u;
        goto label_1fbf30;
    }
    ctx->pc = 0x1FBF28u;
    {
        const bool branch_taken_0x1fbf28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf28) {
            ctx->pc = 0x1FBF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBF28u;
            // 0x1fbf2c: 0xae49008c  sw          $t1, 0x8C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBF40u;
            goto label_1fbf40;
        }
    }
    ctx->pc = 0x1FBF30u;
label_1fbf30:
    // 0x1fbf30: 0xc0705aa  jal         func_1C16A8
label_1fbf34:
    if (ctx->pc == 0x1FBF34u) {
        ctx->pc = 0x1FBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF30u;
        // 0x1fbf34: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF38u;
        goto label_1fbf38;
    }
    ctx->pc = 0x1FBF30u;
    SET_GPR_U32(ctx, 31, 0x1FBF38u);
    ctx->pc = 0x1FBF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF30u;
    // 0x1fbf34: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1FBF30u, 0x1FBF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF38u;
label_1fbf38:
    // 0x1fbf38: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1fbf38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf3c:
    // 0x1fbf3c: 0xae49008c  sw          $t1, 0x8C($s2)
    ctx->pc = 0x1fbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 9));
label_1fbf40:
    // 0x1fbf40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1fbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1fbf44:
    // 0x1fbf44: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1fbf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1fbf48:
    // 0x1fbf48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fbf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf4c:
    // 0x1fbf4c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1fbf50:
    // 0x1fbf50: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1fbf50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fbf54:
    // 0x1fbf54: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1fbf54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fbf58:
    // 0x1fbf58: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1fbf58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1fbf5c:
    // 0x1fbf5c: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1fbf5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1fbf60:
    // 0x1fbf60: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1fbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1fbf64:
    // 0x1fbf64: 0x40f809  jalr        $v0
label_1fbf68:
    if (ctx->pc == 0x1FBF68u) {
        ctx->pc = 0x1FBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF64u;
        // 0x1fbf68: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF6Cu;
        goto label_1fbf6c;
    }
    ctx->pc = 0x1FBF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FBF6Cu);
        ctx->pc = 0x1FBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF64u;
        // 0x1fbf68: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF64u, 0x1FBF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBF6Cu;
label_1fbf6c:
    // 0x1fbf6c: 0x8e51008c  lw          $s1, 0x8C($s2)
    ctx->pc = 0x1fbf6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1fbf70:
    // 0x1fbf70: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x1fbf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1fbf74:
    // 0x1fbf74: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1fbf74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fbf78:
    // 0x1fbf78: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x1fbf78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_1fbf7c:
    // 0x1fbf7c: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x1fbf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_1fbf80:
    // 0x1fbf80: 0xc067b9c  jal         func_19EE70
label_1fbf84:
    if (ctx->pc == 0x1FBF84u) {
        ctx->pc = 0x1FBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF80u;
        // 0x1fbf84: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF88u;
        goto label_1fbf88;
    }
    ctx->pc = 0x1FBF80u;
    SET_GPR_U32(ctx, 31, 0x1FBF88u);
    ctx->pc = 0x1FBF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF80u;
    // 0x1fbf84: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FBF80u, 0x1FBF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF88u;
label_1fbf88:
    // 0x1fbf88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fbf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fbf8c:
    // 0x1fbf8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fbf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf90:
    // 0x1fbf90: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1fbf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1fbf94:
    // 0x1fbf94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fbf94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1fbf98:
    // 0x1fbf98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fbf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fbf9c:
    // 0x1fbf9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbfa0:
    // 0x1fbfa0: 0x60f809  jalr        $v1
label_1fbfa4:
    if (ctx->pc == 0x1FBFA4u) {
        ctx->pc = 0x1FBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFA0u;
        // 0x1fbfa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBFA8u;
        goto label_1fbfa8;
    }
    ctx->pc = 0x1FBFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBFA8u);
        ctx->pc = 0x1FBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFA0u;
        // 0x1fbfa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBFA0u, 0x1FBFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBFA8u;
label_1fbfa8:
    // 0x1fbfa8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1fbfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1fbfac:
    // 0x1fbfac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fbfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbfb0:
    // 0x1fbfb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fbfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fbfb4:
    // 0x1fbfb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fbfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fbfb8:
    // 0x1fbfb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fbfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fbfbc:
    // 0x1fbfbc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fbfbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fbfc0:
    // 0x1fbfc0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1fbfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fbfc4:
    // 0x1fbfc4: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1fbfc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1fbfc8:
    // 0x1fbfc8: 0xc048b52  jal         func_122D48
label_1fbfcc:
    if (ctx->pc == 0x1FBFCCu) {
        ctx->pc = 0x1FBFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFC8u;
        // 0x1fbfcc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBFD0u;
        goto label_1fbfd0;
    }
    ctx->pc = 0x1FBFC8u;
    SET_GPR_U32(ctx, 31, 0x1FBFD0u);
    ctx->pc = 0x1FBFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBFC8u;
    // 0x1fbfcc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1FBFC8u, 0x1FBFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFD0u;
label_1fbfd0:
    // 0x1fbfd0: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x1fbfd0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_1fbfd4:
    // 0x1fbfd4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fbfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fbfd8:
    // 0x1fbfd8: 0x24a57ee8  addiu       $a1, $a1, 0x7EE8
    ctx->pc = 0x1fbfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32488));
label_1fbfdc:
    // 0x1fbfdc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fbfdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fbfe0:
    // 0x1fbfe0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fbfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fbfe4:
    // 0x1fbfe4: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1fbfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1fbfe8:
    // 0x1fbfe8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fbfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fbfec:
    // 0x1fbfec: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x1fbfecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1fbff0:
    // 0x1fbff0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fbff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fbff4:
    // 0x1fbff4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fbff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbff8:
    // 0x1fbff8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fbffc:
    // 0x1fbffc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fbffcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc000:
    // 0x1fc000: 0x40f809  jalr        $v0
label_1fc004:
    if (ctx->pc == 0x1FC004u) {
        ctx->pc = 0x1FC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC000u;
        // 0x1fc004: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC008u;
        goto label_1fc008;
    }
    ctx->pc = 0x1FC000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC008u);
        ctx->pc = 0x1FC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC000u;
        // 0x1fc004: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC000u, 0x1FC008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC008u;
label_1fc008:
    // 0x1fc008: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1fc00c:
    if (ctx->pc == 0x1FC00Cu) {
        ctx->pc = 0x1FC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC008u;
        // 0x1fc00c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC010u;
        goto label_1fc010;
    }
    ctx->pc = 0x1FC008u;
    {
        const bool branch_taken_0x1fc008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc008) {
            ctx->pc = 0x1FC00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC008u;
            // 0x1fc00c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC01Cu;
            goto label_1fc01c;
        }
    }
    ctx->pc = 0x1FC010u;
label_1fc010:
    // 0x1fc010: 0xc073a9c  jal         func_1CEA70
label_1fc014:
    if (ctx->pc == 0x1FC014u) {
        ctx->pc = 0x1FC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC010u;
        // 0x1fc014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC018u;
        goto label_1fc018;
    }
    ctx->pc = 0x1FC010u;
    SET_GPR_U32(ctx, 31, 0x1FC018u);
    ctx->pc = 0x1FC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC010u;
    // 0x1fc014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1FC010u, 0x1FC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC018u;
label_1fc018:
    // 0x1fc018: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fc01c:
    // 0x1fc01c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc020:
    // 0x1fc020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc024:
    // 0x1fc024: 0xc073ad0  jal         func_1CEB40
label_1fc028:
    if (ctx->pc == 0x1FC028u) {
        ctx->pc = 0x1FC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC024u;
        // 0x1fc028: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC02Cu;
        goto label_1fc02c;
    }
    ctx->pc = 0x1FC024u;
    SET_GPR_U32(ctx, 31, 0x1FC02Cu);
    ctx->pc = 0x1FC028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC024u;
    // 0x1fc028: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1FC024u, 0x1FC02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC02Cu;
label_1fc02c:
    // 0x1fc02c: 0xc067b9c  jal         func_19EE70
label_1fc030:
    if (ctx->pc == 0x1FC030u) {
        ctx->pc = 0x1FC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC02Cu;
        // 0x1fc030: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC034u;
        goto label_1fc034;
    }
    ctx->pc = 0x1FC02Cu;
    SET_GPR_U32(ctx, 31, 0x1FC034u);
    ctx->pc = 0x1FC030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC02Cu;
    // 0x1fc030: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FC02Cu, 0x1FC034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC034u;
label_1fc034:
    // 0x1fc034: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x1fc034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1fc038:
    // 0x1fc038: 0xc073b0a  jal         func_1CEC28
label_1fc03c:
    if (ctx->pc == 0x1FC03Cu) {
        ctx->pc = 0x1FC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC038u;
        // 0x1fc03c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC040u;
        goto label_1fc040;
    }
    ctx->pc = 0x1FC038u;
    SET_GPR_U32(ctx, 31, 0x1FC040u);
    ctx->pc = 0x1FC03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC038u;
    // 0x1fc03c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1FC038u, 0x1FC040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC040u;
label_1fc040:
    // 0x1fc040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc044:
    // 0x1fc044: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1fc044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1fc048:
    // 0x1fc048: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1fc048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1fc04c:
    // 0x1fc04c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1fc04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fc050:
    // 0x1fc050: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1fc050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fc054:
    // 0x1fc054: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fc054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc058:
    // 0x1fc058: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc05c:
    // 0x1fc05c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1fc05cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc060:
    // 0x1fc060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc064:
    // 0x1fc064: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1fc064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fc068:
    // 0x1fc068: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1fc068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fc06c:
    // 0x1fc06c: 0x3e00008  jr          $ra
label_1fc070:
    if (ctx->pc == 0x1FC070u) {
        ctx->pc = 0x1FC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC06Cu;
        // 0x1fc070: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC074u;
        goto label_1fc074;
    }
    ctx->pc = 0x1FC06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC06Cu;
        // 0x1fc070: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC074u;
label_1fc074:
    // 0x1fc074: 0x0  nop
    ctx->pc = 0x1fc074u;
    // NOP
    ctx->pc = 0x1fc078u;
}
