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

// Function: sub_001AAE58
// Address: 0x1aae58 - 0x1aaf28
void sub_001AAE58_0x1aae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAE58_0x1aae58");
#endif

    switch (ctx->pc) {
        case 0x1aae58u: goto label_1aae58;
        case 0x1aae5cu: goto label_1aae5c;
        case 0x1aae60u: goto label_1aae60;
        case 0x1aae64u: goto label_1aae64;
        case 0x1aae68u: goto label_1aae68;
        case 0x1aae6cu: goto label_1aae6c;
        case 0x1aae70u: goto label_1aae70;
        case 0x1aae74u: goto label_1aae74;
        case 0x1aae78u: goto label_1aae78;
        case 0x1aae7cu: goto label_1aae7c;
        case 0x1aae80u: goto label_1aae80;
        case 0x1aae84u: goto label_1aae84;
        case 0x1aae88u: goto label_1aae88;
        case 0x1aae8cu: goto label_1aae8c;
        case 0x1aae90u: goto label_1aae90;
        case 0x1aae94u: goto label_1aae94;
        case 0x1aae98u: goto label_1aae98;
        case 0x1aae9cu: goto label_1aae9c;
        case 0x1aaea0u: goto label_1aaea0;
        case 0x1aaea4u: goto label_1aaea4;
        case 0x1aaea8u: goto label_1aaea8;
        case 0x1aaeacu: goto label_1aaeac;
        case 0x1aaeb0u: goto label_1aaeb0;
        case 0x1aaeb4u: goto label_1aaeb4;
        case 0x1aaeb8u: goto label_1aaeb8;
        case 0x1aaebcu: goto label_1aaebc;
        case 0x1aaec0u: goto label_1aaec0;
        case 0x1aaec4u: goto label_1aaec4;
        case 0x1aaec8u: goto label_1aaec8;
        case 0x1aaeccu: goto label_1aaecc;
        case 0x1aaed0u: goto label_1aaed0;
        case 0x1aaed4u: goto label_1aaed4;
        case 0x1aaed8u: goto label_1aaed8;
        case 0x1aaedcu: goto label_1aaedc;
        case 0x1aaee0u: goto label_1aaee0;
        case 0x1aaee4u: goto label_1aaee4;
        case 0x1aaee8u: goto label_1aaee8;
        case 0x1aaeecu: goto label_1aaeec;
        case 0x1aaef0u: goto label_1aaef0;
        case 0x1aaef4u: goto label_1aaef4;
        case 0x1aaef8u: goto label_1aaef8;
        case 0x1aaefcu: goto label_1aaefc;
        case 0x1aaf00u: goto label_1aaf00;
        case 0x1aaf04u: goto label_1aaf04;
        case 0x1aaf08u: goto label_1aaf08;
        case 0x1aaf0cu: goto label_1aaf0c;
        case 0x1aaf10u: goto label_1aaf10;
        case 0x1aaf14u: goto label_1aaf14;
        case 0x1aaf18u: goto label_1aaf18;
        case 0x1aaf1cu: goto label_1aaf1c;
        case 0x1aaf20u: goto label_1aaf20;
        case 0x1aaf24u: goto label_1aaf24;
        default: break;
    }

    ctx->pc = 0x1aae58u;

label_1aae58:
    // 0x1aae58: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1aae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1aae5c:
    // 0x1aae5c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1aae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1aae60:
    // 0x1aae60: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1aae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_1aae64:
    // 0x1aae64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aae64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aae68:
    // 0x1aae68: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1aae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1aae6c:
    // 0x1aae6c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1aae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_1aae70:
    // 0x1aae70: 0xc06ab7c  jal         func_1AADF0
label_1aae74:
    if (ctx->pc == 0x1AAE74u) {
        ctx->pc = 0x1AAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE70u;
        // 0x1aae74: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE78u;
        goto label_1aae78;
    }
    ctx->pc = 0x1AAE70u;
    SET_GPR_U32(ctx, 31, 0x1AAE78u);
    ctx->pc = 0x1AAE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE70u;
    // 0x1aae74: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADF0u, 0x1AAE70u, 0x1AAE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE78u;
label_1aae78:
    // 0x1aae78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aae78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aae7c:
    // 0x1aae7c: 0x8e020420  lw          $v0, 0x420($s0)
    ctx->pc = 0x1aae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
label_1aae80:
    // 0x1aae80: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_1aae84:
    if (ctx->pc == 0x1AAE84u) {
        ctx->pc = 0x1AAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE80u;
        // 0x1aae84: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE88u;
        goto label_1aae88;
    }
    ctx->pc = 0x1AAE80u;
    {
        const bool branch_taken_0x1aae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE80u;
        // 0x1aae84: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae80) {
            ctx->pc = 0x1AAE9Cu;
            goto label_1aae9c;
        }
    }
    ctx->pc = 0x1AAE88u;
label_1aae88:
    // 0x1aae88: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1aae88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1aae8c:
    // 0x1aae8c: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1aae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1aae90:
    // 0x1aae90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1aae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1aae94:
    // 0x1aae94: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1aae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aae98:
    // 0x1aae98: 0xac60411c  sw          $zero, 0x411C($v1)
    ctx->pc = 0x1aae98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16668), GPR_U32(ctx, 0));
label_1aae9c:
    // 0x1aae9c: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
label_1aaea0:
    if (ctx->pc == 0x1AAEA0u) {
        ctx->pc = 0x1AAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE9Cu;
        // 0x1aaea0: 0xae110420  sw          $s1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEA4u;
        goto label_1aaea4;
    }
    ctx->pc = 0x1AAE9Cu;
    {
        const bool branch_taken_0x1aae9c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1AAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE9Cu;
        // 0x1aaea0: 0xae110420  sw          $s1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae9c) {
            ctx->pc = 0x1AAEC4u;
            goto label_1aaec4;
        }
    }
    ctx->pc = 0x1AAEA4u;
label_1aaea4:
    // 0x1aaea4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aaea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aaea8:
    // 0x1aaea8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aaea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aaeac:
    // 0x1aaeac: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1aaeacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1aaeb0:
    // 0x1aaeb0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1aaeb4:
    // 0x1aaeb4: 0x60f809  jalr        $v1
label_1aaeb8:
    if (ctx->pc == 0x1AAEB8u) {
        ctx->pc = 0x1AAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEB4u;
        // 0x1aaeb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEBCu;
        goto label_1aaebc;
    }
    ctx->pc = 0x1AAEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AAEBCu);
        ctx->pc = 0x1AAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEB4u;
        // 0x1aaeb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAEB4u, 0x1AAEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAEBCu;
label_1aaebc:
    // 0x1aaebc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1aaec0:
    if (ctx->pc == 0x1AAEC0u) {
        ctx->pc = 0x1AAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEBCu;
        // 0x1aaec0: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEC4u;
        goto label_1aaec4;
    }
    ctx->pc = 0x1AAEBCu;
    {
        const bool branch_taken_0x1aaebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEBCu;
        // 0x1aaec0: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaebc) {
            ctx->pc = 0x1AAEE4u;
            goto label_1aaee4;
        }
    }
    ctx->pc = 0x1AAEC4u;
label_1aaec4:
    // 0x1aaec4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aaec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aaec8:
    // 0x1aaec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aaec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaecc:
    // 0x1aaecc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1aaed0:
    // 0x1aaed0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1aaed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1aaed4:
    // 0x1aaed4: 0x60f809  jalr        $v1
label_1aaed8:
    if (ctx->pc == 0x1AAED8u) {
        ctx->pc = 0x1AAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAED4u;
        // 0x1aaed8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEDCu;
        goto label_1aaedc;
    }
    ctx->pc = 0x1AAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AAEDCu);
        ctx->pc = 0x1AAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAED4u;
        // 0x1aaed8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAED4u, 0x1AAEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAEDCu;
label_1aaedc:
    // 0x1aaedc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1aaee0:
    if (ctx->pc == 0x1AAEE0u) {
        ctx->pc = 0x1AAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEDCu;
        // 0x1aaee0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEE4u;
        goto label_1aaee4;
    }
    ctx->pc = 0x1AAEDCu;
    {
        const bool branch_taken_0x1aaedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEDCu;
        // 0x1aaee0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaedc) {
            ctx->pc = 0x1AAF10u;
            goto label_1aaf10;
        }
    }
    ctx->pc = 0x1AAEE4u;
label_1aaee4:
    // 0x1aaee4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aaee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1aaee8:
    // 0x1aaee8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1aaee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aaeec:
    // 0x1aaeec: 0x24c64298  addiu       $a2, $a2, 0x4298
    ctx->pc = 0x1aaeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17048));
label_1aaef0:
    // 0x1aaef0: 0xc10ca04  jal         func_432810
label_1aaef4:
    if (ctx->pc == 0x1AAEF4u) {
        ctx->pc = 0x1AAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEF0u;
        // 0x1aaef4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEF8u;
        goto label_1aaef8;
    }
    ctx->pc = 0x1AAEF0u;
    SET_GPR_U32(ctx, 31, 0x1AAEF8u);
    ctx->pc = 0x1AAEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEF0u;
    // 0x1aaef4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1AAEF0u, 0x1AAEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAEF8u;
label_1aaef8:
    // 0x1aaef8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1aaef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1aaefc:
    // 0x1aaefc: 0xc073478  jal         func_1CD1E0
label_1aaf00:
    if (ctx->pc == 0x1AAF00u) {
        ctx->pc = 0x1AAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEFCu;
        // 0x1aaf00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF04u;
        goto label_1aaf04;
    }
    ctx->pc = 0x1AAEFCu;
    SET_GPR_U32(ctx, 31, 0x1AAF04u);
    ctx->pc = 0x1AAF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEFCu;
    // 0x1aaf00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1AAEFCu, 0x1AAF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF04u;
label_1aaf04:
    // 0x1aaf04: 0xc06dbd8  jal         func_1B6F60
label_1aaf08:
    if (ctx->pc == 0x1AAF08u) {
        ctx->pc = 0x1AAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF04u;
        // 0x1aaf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF0Cu;
        goto label_1aaf0c;
    }
    ctx->pc = 0x1AAF04u;
    SET_GPR_U32(ctx, 31, 0x1AAF0Cu);
    ctx->pc = 0x1AAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF04u;
    // 0x1aaf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F60u, 0x1AAF04u, 0x1AAF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF0Cu;
label_1aaf0c:
    // 0x1aaf0c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1aaf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1aaf10:
    // 0x1aaf10: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1aaf10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1aaf14:
    // 0x1aaf14: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1aaf14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1aaf18:
    // 0x1aaf18: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1aaf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1aaf1c:
    // 0x1aaf1c: 0x3e00008  jr          $ra
label_1aaf20:
    if (ctx->pc == 0x1AAF20u) {
        ctx->pc = 0x1AAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF1Cu;
        // 0x1aaf20: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF24u;
        goto label_1aaf24;
    }
    ctx->pc = 0x1AAF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF1Cu;
        // 0x1aaf20: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAF24u;
label_1aaf24:
    // 0x1aaf24: 0x0  nop
    ctx->pc = 0x1aaf24u;
    // NOP
    ctx->pc = 0x1aaf28u;
}
