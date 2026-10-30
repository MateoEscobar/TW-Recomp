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

// Function: sub_00215490
// Address: 0x215490 - 0x2155a8
void sub_00215490_0x215490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215490_0x215490");
#endif

    ctx->pc = 0x215490u;

    // 0x215490: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x215490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x215494: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x215494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x215498: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x215498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21549c: 0x8cc2489c  lw          $v0, 0x489C($a2)
    ctx->pc = 0x21549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
    // 0x2154a0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2154a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2154a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2154a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2154a8: 0x8c4514d8  lw          $a1, 0x14D8($v0)
    ctx->pc = 0x2154a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2154ac: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2154ACu;
    {
        const bool branch_taken_0x2154ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2154B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154ACu;
        // 0x2154b0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154ac) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154B4u;
    // 0x2154b4: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2154B4u;
    {
        const bool branch_taken_0x2154b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154B4u;
        // 0x2154b8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154b4) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154BCu;
    // 0x2154bc: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2154BCu;
    {
        const bool branch_taken_0x2154bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154BCu;
        // 0x2154c0: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154bc) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154C4u;
    // 0x2154c4: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2154C4u;
    {
        const bool branch_taken_0x2154c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154C4u;
        // 0x2154c8: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154c4) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154CCu;
    // 0x2154cc: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2154CCu;
    {
        const bool branch_taken_0x2154cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154CCu;
        // 0x2154d0: 0x24020053  addiu       $v0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154cc) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154D4u;
    // 0x2154d4: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2154D4u;
    {
        const bool branch_taken_0x2154d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154D4u;
        // 0x2154d8: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154d4) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154DCu;
    // 0x2154dc: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2154DCu;
    {
        const bool branch_taken_0x2154dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154DCu;
        // 0x2154e0: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154dc) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154E4u;
    // 0x2154e4: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2154E4u;
    {
        const bool branch_taken_0x2154e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154E4u;
        // 0x2154e8: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154e4) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154ECu;
    // 0x2154ec: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2154ECu;
    {
        const bool branch_taken_0x2154ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154ECu;
        // 0x2154f0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154ec) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154F4u;
    // 0x2154f4: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2154F4u;
    {
        const bool branch_taken_0x2154f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2154F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F4u;
        // 0x2154f8: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f4) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x2154FCu;
    // 0x2154fc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2154FCu;
    {
        const bool branch_taken_0x2154fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154FCu;
        // 0x215500: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154fc) {
            ctx->pc = 0x21550Cu;
            goto label_21550c;
        }
    }
    ctx->pc = 0x215504u;
    // 0x215504: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215504u;
    {
        const bool branch_taken_0x215504 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x215508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215504u;
        // 0x215508: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215504) {
            ctx->pc = 0x215514u;
            goto label_215514;
        }
    }
    ctx->pc = 0x21550Cu;
label_21550c:
    // 0x21550c: 0x3e00008  jr          $ra
    ctx->pc = 0x21550Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21550Cu;
        // 0x215510: 0x8c82006c  lw          $v0, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21550Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215514u;
label_215514:
    // 0x215514: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x215514u;
    {
        const bool branch_taken_0x215514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215514u;
        // 0x215518: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215514) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x21551Cu;
    // 0x21551c: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21551Cu;
    {
        const bool branch_taken_0x21551c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21551Cu;
        // 0x215520: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21551c) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x215524u;
    // 0x215524: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x215524u;
    {
        const bool branch_taken_0x215524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215524u;
        // 0x215528: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215524) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x21552Cu;
    // 0x21552c: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21552Cu;
    {
        const bool branch_taken_0x21552c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21552Cu;
        // 0x215530: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21552c) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x215534u;
    // 0x215534: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x215534u;
    {
        const bool branch_taken_0x215534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215534u;
        // 0x215538: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215534) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x21553Cu;
    // 0x21553c: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21553Cu;
    {
        const bool branch_taken_0x21553c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21553Cu;
        // 0x215540: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21553c) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x215544u;
    // 0x215544: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x215544u;
    {
        const bool branch_taken_0x215544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215544u;
        // 0x215548: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215544) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x21554Cu;
    // 0x21554c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21554Cu;
    {
        const bool branch_taken_0x21554c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21554Cu;
        // 0x215550: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21554c) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x215554u;
    // 0x215554: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215554u;
    {
        const bool branch_taken_0x215554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215554u;
        // 0x215558: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215554) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x21555Cu;
    // 0x21555c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21555Cu;
    {
        const bool branch_taken_0x21555c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21555Cu;
        // 0x215560: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21555c) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x215564u;
    // 0x215564: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215564u;
    {
        const bool branch_taken_0x215564 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215564u;
        // 0x215568: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215564) {
            ctx->pc = 0x215574u;
            goto label_215574;
        }
    }
    ctx->pc = 0x21556Cu;
    // 0x21556c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21556Cu;
    {
        const bool branch_taken_0x21556c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x215570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21556Cu;
        // 0x215570: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21556c) {
            ctx->pc = 0x21557Cu;
            goto label_21557c;
        }
    }
    ctx->pc = 0x215574u;
label_215574:
    // 0x215574: 0x3e00008  jr          $ra
    ctx->pc = 0x215574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215574u;
        // 0x215578: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21557Cu;
label_21557c:
    // 0x21557c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21557Cu;
    {
        const bool branch_taken_0x21557c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21557Cu;
        // 0x215580: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21557c) {
            ctx->pc = 0x215594u;
            goto label_215594;
        }
    }
    ctx->pc = 0x215584u;
    // 0x215584: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215584u;
    {
        const bool branch_taken_0x215584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x215588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215584u;
        // 0x215588: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215584) {
            ctx->pc = 0x215594u;
            goto label_215594;
        }
    }
    ctx->pc = 0x21558Cu;
    // 0x21558c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21558Cu;
    {
        const bool branch_taken_0x21558c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x21558c) {
            ctx->pc = 0x21559Cu;
            goto label_21559c;
        }
    }
    ctx->pc = 0x215594u;
label_215594:
    // 0x215594: 0x3e00008  jr          $ra
    ctx->pc = 0x215594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215594u;
        // 0x215598: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21559Cu;
label_21559c:
    // 0x21559c: 0x3e00008  jr          $ra
    ctx->pc = 0x21559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2155A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21559Cu;
        // 0x2155a0: 0x8c82006c  lw          $v0, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21559Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2155A4u;
    // 0x2155a4: 0x0  nop
    ctx->pc = 0x2155a4u;
    // NOP
    ctx->pc = 0x2155a8u;
}
