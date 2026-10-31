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

// Function: sub_004B01D8
// Address: 0x4b01d8 - 0x4b0228
void sub_004B01D8_0x4b01d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B01D8_0x4b01d8");
#endif

    switch (ctx->pc) {
        case 0x4b01d8u: goto label_4b01d8;
        case 0x4b01dcu: goto label_4b01dc;
        case 0x4b01e0u: goto label_4b01e0;
        case 0x4b01e4u: goto label_4b01e4;
        case 0x4b01e8u: goto label_4b01e8;
        case 0x4b01ecu: goto label_4b01ec;
        case 0x4b01f0u: goto label_4b01f0;
        case 0x4b01f4u: goto label_4b01f4;
        case 0x4b01f8u: goto label_4b01f8;
        case 0x4b01fcu: goto label_4b01fc;
        case 0x4b0200u: goto label_4b0200;
        case 0x4b0204u: goto label_4b0204;
        case 0x4b0208u: goto label_4b0208;
        case 0x4b020cu: goto label_4b020c;
        case 0x4b0210u: goto label_4b0210;
        case 0x4b0214u: goto label_4b0214;
        case 0x4b0218u: goto label_4b0218;
        case 0x4b021cu: goto label_4b021c;
        case 0x4b0220u: goto label_4b0220;
        case 0x4b0224u: goto label_4b0224;
        default: break;
    }

    ctx->pc = 0x4b01d8u;

label_4b01d8:
    // 0x4b01d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b01d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b01dc:
    // 0x4b01dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b01dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b01e0:
    // 0x4b01e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b01e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b01e4:
    // 0x4b01e4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4b01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4b01e8:
    // 0x4b01e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_4b01ec:
    if (ctx->pc == 0x4B01ECu) {
        ctx->pc = 0x4B01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01E8u;
        // 0x4b01ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B01F0u;
        goto label_4b01f0;
    }
    ctx->pc = 0x4B01E8u;
    {
        const bool branch_taken_0x4b01e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01E8u;
        // 0x4b01ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b01e8) {
            ctx->pc = 0x4B0218u;
            goto label_4b0218;
        }
    }
    ctx->pc = 0x4B01F0u;
label_4b01f0:
    // 0x4b01f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4b01f4:
    // 0x4b01f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4b01f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4b01f8:
    // 0x4b01f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b01f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b01fc:
    // 0x4b01fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4b0200:
    if (ctx->pc == 0x4B0200u) {
        ctx->pc = 0x4B0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01FCu;
        // 0x4b0200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0204u;
        goto label_4b0204;
    }
    ctx->pc = 0x4B01FCu;
    {
        const bool branch_taken_0x4b01fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01FCu;
        // 0x4b0200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b01fc) {
            ctx->pc = 0x4B0218u;
            goto label_4b0218;
        }
    }
    ctx->pc = 0x4B0204u;
label_4b0204:
    // 0x4b0204: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x4b0204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_4b0208:
    // 0x4b0208: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x4b0208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_4b020c:
    // 0x4b020c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x4b020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_4b0210:
    // 0x4b0210: 0x40f809  jalr        $v0
label_4b0214:
    if (ctx->pc == 0x4B0214u) {
        ctx->pc = 0x4B0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0210u;
        // 0x4b0214: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0218u;
        goto label_4b0218;
    }
    ctx->pc = 0x4B0210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B0218u);
        ctx->pc = 0x4B0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0210u;
        // 0x4b0214: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0210u, 0x4B0218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B0218u;
label_4b0218:
    // 0x4b0218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b021c:
    // 0x4b021c: 0x3e00008  jr          $ra
label_4b0220:
    if (ctx->pc == 0x4B0220u) {
        ctx->pc = 0x4B0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B021Cu;
        // 0x4b0220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0224u;
        goto label_4b0224;
    }
    ctx->pc = 0x4B021Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B021Cu;
        // 0x4b0220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B021Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0224u;
label_4b0224:
    // 0x4b0224: 0x0  nop
    ctx->pc = 0x4b0224u;
    // NOP
    ctx->pc = 0x4b0228u;
}
