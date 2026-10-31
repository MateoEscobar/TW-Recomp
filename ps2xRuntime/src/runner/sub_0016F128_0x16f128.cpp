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

// Function: sub_0016F128
// Address: 0x16f128 - 0x16f260
void sub_0016F128_0x16f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F128_0x16f128");
#endif

    switch (ctx->pc) {
        case 0x16f174u: goto label_16f174;
        case 0x16f188u: goto label_16f188;
        case 0x16f1c8u: goto label_16f1c8;
        case 0x16f1e8u: goto label_16f1e8;
        case 0x16f1f8u: goto label_16f1f8;
        case 0x16f204u: goto label_16f204;
        case 0x16f218u: goto label_16f218;
        default: break;
    }

    ctx->pc = 0x16f128u;

    // 0x16f128: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16f128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16f12c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16f130: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16f130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x16f134: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16f134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x16f138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f13c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x16f13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x16f140: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16f140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f144: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x16f144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x16f148: 0x245691e0  addiu       $s6, $v0, -0x6E20
    ctx->pc = 0x16f148u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
    // 0x16f14c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x16f150: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x16f150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f154: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16f154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16f158: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16f158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f15c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x16f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x16f160: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x16f160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16f168: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16f168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f16c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x16F16Cu;
    SET_GPR_U32(ctx, 31, 0x16F174u);
    ctx->pc = 0x16F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F16Cu;
    // 0x16f170: 0x26120050  addiu       $s2, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x16F16Cu, 0x16F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F174u;
label_16f174:
    // 0x16f174: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x16f174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x16f178: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f17c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16f17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f180: 0xc137950  jal         func_4DE540
    ctx->pc = 0x16F180u;
    SET_GPR_U32(ctx, 31, 0x16F188u);
    ctx->pc = 0x16F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F180u;
    // 0x16f184: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE540u, 0x16F180u, 0x16F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F188u;
label_16f188:
    // 0x16f188: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16f18c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f190: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F190u;
    {
        const bool branch_taken_0x16f190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F190u;
        // 0x16f194: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f190) {
            ctx->pc = 0x16F1B4u;
            goto label_16f1b4;
        }
    }
    ctx->pc = 0x16F198u;
    // 0x16f198: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x16f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x16f19c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16f1a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16f1a4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16f1a8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f1ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16F1ACu;
    {
        const bool branch_taken_0x16f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1ACu;
        // 0x16f1b0: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1ac) {
            ctx->pc = 0x16F238u;
            goto label_16f238;
        }
    }
    ctx->pc = 0x16F1B4u;
label_16f1b4:
    // 0x16f1b4: 0x16600020  bnez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x16F1B4u;
    {
        const bool branch_taken_0x16f1b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1B4u;
        // 0x16f1b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1b4) {
            ctx->pc = 0x16F238u;
            goto label_16f238;
        }
    }
    ctx->pc = 0x16F1BCu;
    // 0x16f1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1c0: 0xc061668  jal         func_1859A0
    ctx->pc = 0x16F1C0u;
    SET_GPR_U32(ctx, 31, 0x16F1C8u);
    ctx->pc = 0x16F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F1C0u;
    // 0x16f1c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x16F1C0u, 0x16F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F1C8u;
label_16f1c8:
    // 0x16f1c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F1C8u;
    {
        const bool branch_taken_0x16f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1C8u;
        // 0x16f1cc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1c8) {
            ctx->pc = 0x16F1ECu;
            goto label_16f1ec;
        }
    }
    ctx->pc = 0x16F1D0u;
    // 0x16f1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1d4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x16f1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1d8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x16f1d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x16f1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16f1e0: 0xc061eaa  jal         func_187AA8
    ctx->pc = 0x16F1E0u;
    SET_GPR_U32(ctx, 31, 0x16F1E8u);
    ctx->pc = 0x16F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F1E0u;
    // 0x16f1e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x16F1E0u, 0x16F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F1E8u;
label_16f1e8:
    // 0x16f1e8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16f1ec:
    // 0x16f1ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f1f0: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x16F1F0u;
    SET_GPR_U32(ctx, 31, 0x16F1F8u);
    ctx->pc = 0x16F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F1F0u;
    // 0x16f1f4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x16F1F0u, 0x16F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F1F8u;
label_16f1f8:
    // 0x16f1f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1fc: 0xc050fda  jal         func_143F68
    ctx->pc = 0x16F1FCu;
    SET_GPR_U32(ctx, 31, 0x16F204u);
    ctx->pc = 0x16F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F1FCu;
    // 0x16f200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x16F1FCu, 0x16F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F204u;
label_16f204:
    // 0x16f204: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x16f204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x16f208: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16f208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16f20c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16f20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f210: 0xc137950  jal         func_4DE540
    ctx->pc = 0x16F210u;
    SET_GPR_U32(ctx, 31, 0x16F218u);
    ctx->pc = 0x16F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F210u;
    // 0x16f214: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE540u, 0x16F210u, 0x16F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F218u;
label_16f218:
    // 0x16f218: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f21c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x16f220: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x16f220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x16f224: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16f228: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f22c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x16f230: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f234: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x16f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16f238:
    // 0x16f238: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16f238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16f23c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16f23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16f240: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16f240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f244: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x16f244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f248: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16f248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f24c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16f24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f250: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16f250u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f254: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16f254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f258: 0x3e00008  jr          $ra
    ctx->pc = 0x16F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F258u;
        // 0x16f25c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F260u;
}
