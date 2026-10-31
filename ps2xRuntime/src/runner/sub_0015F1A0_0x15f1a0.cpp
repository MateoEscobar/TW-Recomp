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

// Function: sub_0015F1A0
// Address: 0x15f1a0 - 0x15f220
void sub_0015F1A0_0x15f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F1A0_0x15f1a0");
#endif

    switch (ctx->pc) {
        case 0x15f1a0u: goto label_15f1a0;
        case 0x15f1a4u: goto label_15f1a4;
        case 0x15f1a8u: goto label_15f1a8;
        case 0x15f1acu: goto label_15f1ac;
        case 0x15f1b0u: goto label_15f1b0;
        case 0x15f1b4u: goto label_15f1b4;
        case 0x15f1b8u: goto label_15f1b8;
        case 0x15f1bcu: goto label_15f1bc;
        case 0x15f1c0u: goto label_15f1c0;
        case 0x15f1c4u: goto label_15f1c4;
        case 0x15f1c8u: goto label_15f1c8;
        case 0x15f1ccu: goto label_15f1cc;
        case 0x15f1d0u: goto label_15f1d0;
        case 0x15f1d4u: goto label_15f1d4;
        case 0x15f1d8u: goto label_15f1d8;
        case 0x15f1dcu: goto label_15f1dc;
        case 0x15f1e0u: goto label_15f1e0;
        case 0x15f1e4u: goto label_15f1e4;
        case 0x15f1e8u: goto label_15f1e8;
        case 0x15f1ecu: goto label_15f1ec;
        case 0x15f1f0u: goto label_15f1f0;
        case 0x15f1f4u: goto label_15f1f4;
        case 0x15f1f8u: goto label_15f1f8;
        case 0x15f1fcu: goto label_15f1fc;
        case 0x15f200u: goto label_15f200;
        case 0x15f204u: goto label_15f204;
        case 0x15f208u: goto label_15f208;
        case 0x15f20cu: goto label_15f20c;
        case 0x15f210u: goto label_15f210;
        case 0x15f214u: goto label_15f214;
        case 0x15f218u: goto label_15f218;
        case 0x15f21cu: goto label_15f21c;
        default: break;
    }

    ctx->pc = 0x15f1a0u;

label_15f1a0:
    // 0x15f1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15f1a4:
    // 0x15f1a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f1a8:
    // 0x15f1a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15f1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15f1ac:
    // 0x15f1ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15f1b0:
    // 0x15f1b0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15f1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15f1b4:
    // 0x15f1b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15f1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f1b8:
    // 0x15f1b8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x15f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15f1bc:
    // 0x15f1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15f1c0:
    // 0x15f1c0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_15f1c4:
    // 0x15f1c4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x15f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_15f1c8:
    // 0x15f1c8: 0xc04456a  jal         func_1115A8
label_15f1cc:
    if (ctx->pc == 0x15F1CCu) {
        ctx->pc = 0x15F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1C8u;
        // 0x15f1cc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1D0u;
        goto label_15f1d0;
    }
    ctx->pc = 0x15F1C8u;
    SET_GPR_U32(ctx, 31, 0x15F1D0u);
    ctx->pc = 0x15F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F1C8u;
    // 0x15f1cc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A8u, 0x15F1C8u, 0x15F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1D0u;
label_15f1d0:
    // 0x15f1d0: 0xc044152  jal         func_110548
label_15f1d4:
    if (ctx->pc == 0x15F1D4u) {
        ctx->pc = 0x15F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1D0u;
        // 0x15f1d4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1D8u;
        goto label_15f1d8;
    }
    ctx->pc = 0x15F1D0u;
    SET_GPR_U32(ctx, 31, 0x15F1D8u);
    ctx->pc = 0x15F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F1D0u;
    // 0x15f1d4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110548u, 0x15F1D0u, 0x15F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1D8u;
label_15f1d8:
    // 0x15f1d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f1dc:
    // 0x15f1dc: 0x8c46ee94  lw          $a2, -0x116C($v0)
    ctx->pc = 0x15f1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962836)));
label_15f1e0:
    // 0x15f1e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15f1e4:
    // 0x15f1e4: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x15f1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15f1e8:
    // 0x15f1e8: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x15f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15f1ec:
    // 0x15f1ec: 0xa0f809  jalr        $a1
label_15f1f0:
    if (ctx->pc == 0x15F1F0u) {
        ctx->pc = 0x15F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1ECu;
        // 0x15f1f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1F4u;
        goto label_15f1f4;
    }
    ctx->pc = 0x15F1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15F1F4u);
        ctx->pc = 0x15F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1ECu;
        // 0x15f1f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F1ECu, 0x15F1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F1F4u;
label_15f1f4:
    // 0x15f1f4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x15f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_15f1f8:
    // 0x15f1f8: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_15f1fc:
    // 0x15f1fc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_15f200:
    // 0x15f200: 0x60f809  jalr        $v1
label_15f204:
    if (ctx->pc == 0x15F204u) {
        ctx->pc = 0x15F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F200u;
        // 0x15f204: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F208u;
        goto label_15f208;
    }
    ctx->pc = 0x15F200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F208u);
        ctx->pc = 0x15F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F200u;
        // 0x15f204: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F200u, 0x15F208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F208u;
label_15f208:
    // 0x15f208: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15f208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f20c:
    // 0x15f20c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15f210:
    // 0x15f210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f214:
    // 0x15f214: 0x3e00008  jr          $ra
label_15f218:
    if (ctx->pc == 0x15F218u) {
        ctx->pc = 0x15F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F214u;
        // 0x15f218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F21Cu;
        goto label_15f21c;
    }
    ctx->pc = 0x15F214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F214u;
        // 0x15f218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F21Cu;
label_15f21c:
    // 0x15f21c: 0x0  nop
    ctx->pc = 0x15f21cu;
    // NOP
    ctx->pc = 0x15f220u;
}
