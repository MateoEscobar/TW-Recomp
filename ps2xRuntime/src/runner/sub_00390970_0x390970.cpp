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

// Function: sub_00390970
// Address: 0x390970 - 0x390a10
void sub_00390970_0x390970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390970_0x390970");
#endif

    switch (ctx->pc) {
        case 0x390970u: goto label_390970;
        case 0x390974u: goto label_390974;
        case 0x390978u: goto label_390978;
        case 0x39097cu: goto label_39097c;
        case 0x390980u: goto label_390980;
        case 0x390984u: goto label_390984;
        case 0x390988u: goto label_390988;
        case 0x39098cu: goto label_39098c;
        case 0x390990u: goto label_390990;
        case 0x390994u: goto label_390994;
        case 0x390998u: goto label_390998;
        case 0x39099cu: goto label_39099c;
        case 0x3909a0u: goto label_3909a0;
        case 0x3909a4u: goto label_3909a4;
        case 0x3909a8u: goto label_3909a8;
        case 0x3909acu: goto label_3909ac;
        case 0x3909b0u: goto label_3909b0;
        case 0x3909b4u: goto label_3909b4;
        case 0x3909b8u: goto label_3909b8;
        case 0x3909bcu: goto label_3909bc;
        case 0x3909c0u: goto label_3909c0;
        case 0x3909c4u: goto label_3909c4;
        case 0x3909c8u: goto label_3909c8;
        case 0x3909ccu: goto label_3909cc;
        case 0x3909d0u: goto label_3909d0;
        case 0x3909d4u: goto label_3909d4;
        case 0x3909d8u: goto label_3909d8;
        case 0x3909dcu: goto label_3909dc;
        case 0x3909e0u: goto label_3909e0;
        case 0x3909e4u: goto label_3909e4;
        case 0x3909e8u: goto label_3909e8;
        case 0x3909ecu: goto label_3909ec;
        case 0x3909f0u: goto label_3909f0;
        case 0x3909f4u: goto label_3909f4;
        case 0x3909f8u: goto label_3909f8;
        case 0x3909fcu: goto label_3909fc;
        case 0x390a00u: goto label_390a00;
        case 0x390a04u: goto label_390a04;
        case 0x390a08u: goto label_390a08;
        case 0x390a0cu: goto label_390a0c;
        default: break;
    }

    ctx->pc = 0x390970u;

label_390970:
    // 0x390970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x390970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_390974:
    // 0x390974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x390974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_390978:
    // 0x390978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39097c:
    // 0x39097c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39097cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390980:
    // 0x390980: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x390980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_390984:
    // 0x390984: 0x84440140  lh          $a0, 0x140($v0)
    ctx->pc = 0x390984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 320)));
label_390988:
    // 0x390988: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x390988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_39098c:
    // 0x39098c: 0x60f809  jalr        $v1
label_390990:
    if (ctx->pc == 0x390990u) {
        ctx->pc = 0x390990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39098Cu;
        // 0x390990: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390994u;
        goto label_390994;
    }
    ctx->pc = 0x39098Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390994u);
        ctx->pc = 0x390990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39098Cu;
        // 0x390990: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39098Cu, 0x390994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390994u;
label_390994:
    // 0x390994: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x390994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390998:
    // 0x390998: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x390998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_39099c:
    // 0x39099c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3909a0:
    // 0x3909a0: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3909a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3909a4:
    // 0x3909a4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_3909a8:
    if (ctx->pc == 0x3909A8u) {
        ctx->pc = 0x3909A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909A4u;
        // 0x3909a8: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3909ACu;
        goto label_3909ac;
    }
    ctx->pc = 0x3909A4u;
    {
        const bool branch_taken_0x3909a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909A4u;
        // 0x3909a8: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909a4) {
            ctx->pc = 0x3909F0u;
            goto label_3909f0;
        }
    }
    ctx->pc = 0x3909ACu;
label_3909ac:
    // 0x3909ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3909acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3909b0:
    // 0x3909b0: 0x40f809  jalr        $v0
label_3909b4:
    if (ctx->pc == 0x3909B4u) {
        ctx->pc = 0x3909B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909B0u;
        // 0x3909b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3909B8u;
        goto label_3909b8;
    }
    ctx->pc = 0x3909B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3909B8u);
        ctx->pc = 0x3909B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909B0u;
        // 0x3909b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3909B0u, 0x3909B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3909B8u;
label_3909b8:
    // 0x3909b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3909b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3909bc:
    // 0x3909bc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_3909c0:
    if (ctx->pc == 0x3909C0u) {
        ctx->pc = 0x3909C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909BCu;
        // 0x3909c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3909C4u;
        goto label_3909c4;
    }
    ctx->pc = 0x3909BCu;
    {
        const bool branch_taken_0x3909bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3909C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909BCu;
        // 0x3909c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909bc) {
            ctx->pc = 0x3909E8u;
            goto label_3909e8;
        }
    }
    ctx->pc = 0x3909C4u;
label_3909c4:
    // 0x3909c4: 0xc0e858c  jal         func_3A1630
label_3909c8:
    if (ctx->pc == 0x3909C8u) {
        ctx->pc = 0x3909C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909C4u;
        // 0x3909c8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3909CCu;
        goto label_3909cc;
    }
    ctx->pc = 0x3909C4u;
    SET_GPR_U32(ctx, 31, 0x3909CCu);
    ctx->pc = 0x3909C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909C4u;
    // 0x3909c8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3909C4u, 0x3909CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909CCu;
label_3909cc:
    // 0x3909cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3909ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3909d0:
    // 0x3909d0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3909d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3909d4:
    // 0x3909d4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3909d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3909d8:
    // 0x3909d8: 0x60f809  jalr        $v1
label_3909dc:
    if (ctx->pc == 0x3909DCu) {
        ctx->pc = 0x3909DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909D8u;
        // 0x3909dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3909E0u;
        goto label_3909e0;
    }
    ctx->pc = 0x3909D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3909E0u);
        ctx->pc = 0x3909DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909D8u;
        // 0x3909dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3909D8u, 0x3909E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3909E0u;
label_3909e0:
    // 0x3909e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3909e4:
    if (ctx->pc == 0x3909E4u) {
        ctx->pc = 0x3909E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909E0u;
        // 0x3909e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3909E8u;
        goto label_3909e8;
    }
    ctx->pc = 0x3909E0u;
    {
        const bool branch_taken_0x3909e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909E0u;
        // 0x3909e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909e0) {
            ctx->pc = 0x3909F4u;
            goto label_3909f4;
        }
    }
    ctx->pc = 0x3909E8u;
label_3909e8:
    // 0x3909e8: 0xc0e85e4  jal         func_3A1790
label_3909ec:
    if (ctx->pc == 0x3909ECu) {
        ctx->pc = 0x3909ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909E8u;
        // 0x3909ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3909F0u;
        goto label_3909f0;
    }
    ctx->pc = 0x3909E8u;
    SET_GPR_U32(ctx, 31, 0x3909F0u);
    ctx->pc = 0x3909ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909E8u;
    // 0x3909ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1790u, 0x3909E8u, 0x3909F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909F0u;
label_3909f0:
    // 0x3909f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3909f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3909f4:
    // 0x3909f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3909f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3909f8:
    // 0x3909f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3909f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3909fc:
    // 0x3909fc: 0x3e00008  jr          $ra
label_390a00:
    if (ctx->pc == 0x390A00u) {
        ctx->pc = 0x390A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909FCu;
        // 0x390a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A04u;
        goto label_390a04;
    }
    ctx->pc = 0x3909FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909FCu;
        // 0x390a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3909FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390A04u;
label_390a04:
    // 0x390a04: 0x0  nop
    ctx->pc = 0x390a04u;
    // NOP
label_390a08:
    // 0x390a08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x390a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_390a0c:
    // 0x390a0c: 0x0  nop
    ctx->pc = 0x390a0cu;
    // NOP
    ctx->pc = 0x390a10u;
}
