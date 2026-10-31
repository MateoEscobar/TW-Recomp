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

// Function: sub_0020A158
// Address: 0x20a158 - 0x20a1f0
void sub_0020A158_0x20a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A158_0x20a158");
#endif

    switch (ctx->pc) {
        case 0x20a158u: goto label_20a158;
        case 0x20a15cu: goto label_20a15c;
        case 0x20a160u: goto label_20a160;
        case 0x20a164u: goto label_20a164;
        case 0x20a168u: goto label_20a168;
        case 0x20a16cu: goto label_20a16c;
        case 0x20a170u: goto label_20a170;
        case 0x20a174u: goto label_20a174;
        case 0x20a178u: goto label_20a178;
        case 0x20a17cu: goto label_20a17c;
        case 0x20a180u: goto label_20a180;
        case 0x20a184u: goto label_20a184;
        case 0x20a188u: goto label_20a188;
        case 0x20a18cu: goto label_20a18c;
        case 0x20a190u: goto label_20a190;
        case 0x20a194u: goto label_20a194;
        case 0x20a198u: goto label_20a198;
        case 0x20a19cu: goto label_20a19c;
        case 0x20a1a0u: goto label_20a1a0;
        case 0x20a1a4u: goto label_20a1a4;
        case 0x20a1a8u: goto label_20a1a8;
        case 0x20a1acu: goto label_20a1ac;
        case 0x20a1b0u: goto label_20a1b0;
        case 0x20a1b4u: goto label_20a1b4;
        case 0x20a1b8u: goto label_20a1b8;
        case 0x20a1bcu: goto label_20a1bc;
        case 0x20a1c0u: goto label_20a1c0;
        case 0x20a1c4u: goto label_20a1c4;
        case 0x20a1c8u: goto label_20a1c8;
        case 0x20a1ccu: goto label_20a1cc;
        case 0x20a1d0u: goto label_20a1d0;
        case 0x20a1d4u: goto label_20a1d4;
        case 0x20a1d8u: goto label_20a1d8;
        case 0x20a1dcu: goto label_20a1dc;
        case 0x20a1e0u: goto label_20a1e0;
        case 0x20a1e4u: goto label_20a1e4;
        case 0x20a1e8u: goto label_20a1e8;
        case 0x20a1ecu: goto label_20a1ec;
        default: break;
    }

    ctx->pc = 0x20a158u;

label_20a158:
    // 0x20a158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20a15c:
    // 0x20a15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20a160:
    // 0x20a160: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20a164:
    // 0x20a164: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a168:
    // 0x20a168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a16c:
    // 0x20a16c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20a170:
    // 0x20a170: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_20a174:
    if (ctx->pc == 0x20A174u) {
        ctx->pc = 0x20A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A170u;
        // 0x20a174: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A178u;
        goto label_20a178;
    }
    ctx->pc = 0x20A170u;
    {
        const bool branch_taken_0x20a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A170u;
        // 0x20a174: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a170) {
            ctx->pc = 0x20A1DCu;
            goto label_20a1dc;
        }
    }
    ctx->pc = 0x20A178u;
label_20a178:
    // 0x20a178: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x20a178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20a17c:
    // 0x20a17c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a180:
    // 0x20a180: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20a180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20a184:
    // 0x20a184: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20a188:
    // 0x20a188: 0x60f809  jalr        $v1
label_20a18c:
    if (ctx->pc == 0x20A18Cu) {
        ctx->pc = 0x20A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A188u;
        // 0x20a18c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A190u;
        goto label_20a190;
    }
    ctx->pc = 0x20A188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A190u);
        ctx->pc = 0x20A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A188u;
        // 0x20a18c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A188u, 0x20A190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A190u;
label_20a190:
    // 0x20a190: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x20a190u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_20a194:
    // 0x20a194: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20a194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20a198:
    // 0x20a198: 0x26108f90  addiu       $s0, $s0, -0x7070
    ctx->pc = 0x20a198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938512));
label_20a19c:
    // 0x20a19c: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x20a19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_20a1a0:
    // 0x20a1a0: 0xc139fe8  jal         func_4E7FA0
label_20a1a4:
    if (ctx->pc == 0x20A1A4u) {
        ctx->pc = 0x20A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1A0u;
        // 0x20a1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1A8u;
        goto label_20a1a8;
    }
    ctx->pc = 0x20A1A0u;
    SET_GPR_U32(ctx, 31, 0x20A1A8u);
    ctx->pc = 0x20A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1A0u;
    // 0x20a1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x20A1A0u, 0x20A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1A8u;
label_20a1a8:
    // 0x20a1a8: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x20a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20a1ac:
    // 0x20a1ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a1b0:
    // 0x20a1b0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20a1b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20a1b4:
    // 0x20a1b4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20a1b8:
    // 0x20a1b8: 0x60f809  jalr        $v1
label_20a1bc:
    if (ctx->pc == 0x20A1BCu) {
        ctx->pc = 0x20A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1B8u;
        // 0x20a1bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1C0u;
        goto label_20a1c0;
    }
    ctx->pc = 0x20A1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A1C0u);
        ctx->pc = 0x20A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1B8u;
        // 0x20a1bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A1B8u, 0x20A1C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A1C0u;
label_20a1c0:
    // 0x20a1c0: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x20a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20a1c4:
    // 0x20a1c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20a1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a1c8:
    // 0x20a1c8: 0xc139fc8  jal         func_4E7F20
label_20a1cc:
    if (ctx->pc == 0x20A1CCu) {
        ctx->pc = 0x20A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1C8u;
        // 0x20a1cc: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1D0u;
        goto label_20a1d0;
    }
    ctx->pc = 0x20A1C8u;
    SET_GPR_U32(ctx, 31, 0x20A1D0u);
    ctx->pc = 0x20A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1C8u;
    // 0x20a1cc: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x20A1C8u, 0x20A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1D0u;
label_20a1d0:
    // 0x20a1d0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20a1d4:
    // 0x20a1d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x20a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_20a1d8:
    // 0x20a1d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20a1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a1dc:
    // 0x20a1dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a1e0:
    // 0x20a1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a1e4:
    // 0x20a1e4: 0x3e00008  jr          $ra
label_20a1e8:
    if (ctx->pc == 0x20A1E8u) {
        ctx->pc = 0x20A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1E4u;
        // 0x20a1e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1ECu;
        goto label_20a1ec;
    }
    ctx->pc = 0x20A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1E4u;
        // 0x20a1e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A1ECu;
label_20a1ec:
    // 0x20a1ec: 0x0  nop
    ctx->pc = 0x20a1ecu;
    // NOP
    ctx->pc = 0x20a1f0u;
}
