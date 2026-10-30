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

// Function: sub_0040B168
// Address: 0x40b168 - 0x40b2c0
void sub_0040B168_0x40b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B168_0x40b168");
#endif

    switch (ctx->pc) {
        case 0x40b184u: goto label_40b184;
        case 0x40b194u: goto label_40b194;
        case 0x40b1a8u: goto label_40b1a8;
        case 0x40b1b4u: goto label_40b1b4;
        case 0x40b1c0u: goto label_40b1c0;
        case 0x40b1d0u: goto label_40b1d0;
        case 0x40b1dcu: goto label_40b1dc;
        case 0x40b1ecu: goto label_40b1ec;
        case 0x40b20cu: goto label_40b20c;
        case 0x40b220u: goto label_40b220;
        case 0x40b22cu: goto label_40b22c;
        case 0x40b240u: goto label_40b240;
        case 0x40b250u: goto label_40b250;
        case 0x40b25cu: goto label_40b25c;
        case 0x40b268u: goto label_40b268;
        case 0x40b274u: goto label_40b274;
        case 0x40b280u: goto label_40b280;
        case 0x40b28cu: goto label_40b28c;
        case 0x40b298u: goto label_40b298;
        case 0x40b2a4u: goto label_40b2a4;
        default: break;
    }

    ctx->pc = 0x40b168u;

    // 0x40b168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40b16c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40b170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40b174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40b174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40b178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b17c: 0xc1029f6  jal         func_40A7D8
    ctx->pc = 0x40B17Cu;
    SET_GPR_U32(ctx, 31, 0x40B184u);
    ctx->pc = 0x40B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B17Cu;
    // 0x40b180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A7D8u, 0x40B17Cu, 0x40B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B184u;
label_40b184:
    // 0x40b184: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x40b184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b18c: 0xc0c8d5a  jal         func_323568
    ctx->pc = 0x40B18Cu;
    SET_GPR_U32(ctx, 31, 0x40B194u);
    ctx->pc = 0x40B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B18Cu;
    // 0x40b190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323568u, 0x40B18Cu, 0x40B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B194u;
label_40b194:
    // 0x40b194: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x40B194u;
    {
        const bool branch_taken_0x40b194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B194u;
        // 0x40b198: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b194) {
            ctx->pc = 0x40B1F4u;
            goto label_40b1f4;
        }
    }
    ctx->pc = 0x40B19Cu;
    // 0x40b19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b1a0: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40B1A0u;
    SET_GPR_U32(ctx, 31, 0x40B1A8u);
    ctx->pc = 0x40B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B1A0u;
    // 0x40b1a4: 0x24a58318  addiu       $a1, $a1, -0x7CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40B1A0u, 0x40B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B1A8u;
label_40b1a8:
    // 0x40b1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b1ac: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40B1ACu;
    SET_GPR_U32(ctx, 31, 0x40B1B4u);
    ctx->pc = 0x40B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B1ACu;
    // 0x40b1b0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40B1ACu, 0x40B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B1B4u;
label_40b1b4:
    // 0x40b1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b1b8: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B1B8u;
    SET_GPR_U32(ctx, 31, 0x40B1C0u);
    ctx->pc = 0x40B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B1B8u;
    // 0x40b1bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B1B8u, 0x40B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B1C0u;
label_40b1c0:
    // 0x40b1c0: 0x1051000c  beq         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x40B1C0u;
    {
        const bool branch_taken_0x40b1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B1C0u;
        // 0x40b1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b1c0) {
            ctx->pc = 0x40B1F4u;
            goto label_40b1f4;
        }
    }
    ctx->pc = 0x40B1C8u;
    // 0x40b1c8: 0xc0c8cf8  jal         func_3233E0
    ctx->pc = 0x40B1C8u;
    SET_GPR_U32(ctx, 31, 0x40B1D0u);
    ctx->pc = 0x40B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B1C8u;
    // 0x40b1cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3233E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3233E0u, 0x40B1C8u, 0x40B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B1D0u;
label_40b1d0:
    // 0x40b1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b1d4: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40B1D4u;
    SET_GPR_U32(ctx, 31, 0x40B1DCu);
    ctx->pc = 0x40B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B1D4u;
    // 0x40b1d8: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40B1D4u, 0x40B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B1DCu;
label_40b1dc:
    // 0x40b1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b1e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x40b1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40b1e4: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40B1E4u;
    SET_GPR_U32(ctx, 31, 0x40B1ECu);
    ctx->pc = 0x40B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B1E4u;
    // 0x40b1e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40B1E4u, 0x40B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B1ECu;
label_40b1ec:
    // 0x40b1ec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x40B1ECu;
    {
        const bool branch_taken_0x40b1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B1ECu;
        // 0x40b1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b1ec) {
            ctx->pc = 0x40B2A8u;
            goto label_40b2a8;
        }
    }
    ctx->pc = 0x40B1F4u;
label_40b1f4:
    // 0x40b1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b1f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b1fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x40b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40b200: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x40b200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40b204: 0xc102bbc  jal         func_40AEF0
    ctx->pc = 0x40B204u;
    SET_GPR_U32(ctx, 31, 0x40B20Cu);
    ctx->pc = 0x40B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B204u;
    // 0x40b208: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AEF0u, 0x40B204u, 0x40B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B20Cu;
label_40b20c:
    // 0x40b20c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x40B20Cu;
    {
        const bool branch_taken_0x40b20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B20Cu;
        // 0x40b210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b20c) {
            ctx->pc = 0x40B2A8u;
            goto label_40b2a8;
        }
    }
    ctx->pc = 0x40B214u;
    // 0x40b214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b218: 0xc1029dc  jal         func_40A770
    ctx->pc = 0x40B218u;
    SET_GPR_U32(ctx, 31, 0x40B220u);
    ctx->pc = 0x40B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B218u;
    // 0x40b21c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A770u, 0x40B218u, 0x40B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B220u;
label_40b220:
    // 0x40b220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b224: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B224u;
    SET_GPR_U32(ctx, 31, 0x40B22Cu);
    ctx->pc = 0x40B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B224u;
    // 0x40b228: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B224u, 0x40B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B22Cu;
label_40b22c:
    // 0x40b22c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b230: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x40B230u;
    {
        const bool branch_taken_0x40b230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B230u;
        // 0x40b234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b230) {
            ctx->pc = 0x40B284u;
            goto label_40b284;
        }
    }
    ctx->pc = 0x40B238u;
    // 0x40b238: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x40B238u;
    SET_GPR_U32(ctx, 31, 0x40B240u);
    ctx->pc = 0x40B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B238u;
    // 0x40b23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x40B238u, 0x40B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B240u;
label_40b240:
    // 0x40b240: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40b240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40b244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b248: 0xc102866  jal         func_40A198
    ctx->pc = 0x40B248u;
    SET_GPR_U32(ctx, 31, 0x40B250u);
    ctx->pc = 0x40B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B248u;
    // 0x40b24c: 0x24a58238  addiu       $a1, $a1, -0x7DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40B248u, 0x40B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B250u;
label_40b250:
    // 0x40b250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b254: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B254u;
    SET_GPR_U32(ctx, 31, 0x40B25Cu);
    ctx->pc = 0x40B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B254u;
    // 0x40b258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B254u, 0x40B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B25Cu;
label_40b25c:
    // 0x40b25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b260: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B260u;
    SET_GPR_U32(ctx, 31, 0x40B268u);
    ctx->pc = 0x40B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B260u;
    // 0x40b264: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B260u, 0x40B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B268u;
label_40b268:
    // 0x40b268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b26c: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x40B26Cu;
    SET_GPR_U32(ctx, 31, 0x40B274u);
    ctx->pc = 0x40B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B26Cu;
    // 0x40b270: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x40B26Cu, 0x40B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B274u;
label_40b274:
    // 0x40b274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b278: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40B278u;
    SET_GPR_U32(ctx, 31, 0x40B280u);
    ctx->pc = 0x40B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B278u;
    // 0x40b27c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40B278u, 0x40B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B280u;
label_40b280:
    // 0x40b280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40b284:
    // 0x40b284: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B284u;
    SET_GPR_U32(ctx, 31, 0x40B28Cu);
    ctx->pc = 0x40B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B284u;
    // 0x40b288: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B284u, 0x40B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B28Cu;
label_40b28c:
    // 0x40b28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b290: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B290u;
    SET_GPR_U32(ctx, 31, 0x40B298u);
    ctx->pc = 0x40B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B290u;
    // 0x40b294: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B290u, 0x40B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B298u;
label_40b298:
    // 0x40b298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b29c: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x40B29Cu;
    SET_GPR_U32(ctx, 31, 0x40B2A4u);
    ctx->pc = 0x40B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B29Cu;
    // 0x40b2a0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x40B29Cu, 0x40B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B2A4u;
label_40b2a4:
    // 0x40b2a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b2a8:
    // 0x40b2a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40b2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b2ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40b2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x40B2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B2B4u;
        // 0x40b2b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B2BCu;
    // 0x40b2bc: 0x0  nop
    ctx->pc = 0x40b2bcu;
    // NOP
    ctx->pc = 0x40b2c0u;
}
