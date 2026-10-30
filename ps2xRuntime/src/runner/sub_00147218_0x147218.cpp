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

// Function: sub_00147218
// Address: 0x147218 - 0x147430
void sub_00147218_0x147218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147218_0x147218");
#endif

    switch (ctx->pc) {
        case 0x147248u: goto label_147248;
        case 0x147254u: goto label_147254;
        case 0x147288u: goto label_147288;
        case 0x1472c0u: goto label_1472c0;
        case 0x1472f8u: goto label_1472f8;
        case 0x147330u: goto label_147330;
        case 0x147368u: goto label_147368;
        case 0x1473a0u: goto label_1473a0;
        case 0x1473d8u: goto label_1473d8;
        case 0x147410u: goto label_147410;
        default: break;
    }

    ctx->pc = 0x147218u;

    // 0x147218: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x147218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14721c: 0x2c420039  sltiu       $v0, $v0, 0x39
    ctx->pc = 0x14721cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x147220: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x147220u;
    {
        const bool branch_taken_0x147220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147220u;
        // 0x147224: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147220) {
            ctx->pc = 0x147428u;
            goto label_147428;
        }
    }
    ctx->pc = 0x147228u;
    // 0x147228: 0x8c45b740  lw          $a1, -0x48C0($v0)
    ctx->pc = 0x147228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948672)));
    // 0x14722c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x14722Cu;
    {
        const bool branch_taken_0x14722c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14722Cu;
        // 0x147230: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14722c) {
            ctx->pc = 0x147268u;
            goto label_147268;
        }
    }
    ctx->pc = 0x147234u;
    // 0x147234: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147238: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x147238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14723c: 0x2442dd10  addiu       $v0, $v0, -0x22F0
    ctx->pc = 0x14723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
    // 0x147240: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x147240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x147244: 0x0  nop
    ctx->pc = 0x147244u;
    // NOP
label_147248:
    // 0x147248: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14724c: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14724Cu;
    {
        const bool branch_taken_0x14724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x147250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14724Cu;
        // 0x147250: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14724c) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x147254u;
label_147254:
    // 0x147254: 0x3e00008  jr          $ra
    ctx->pc = 0x147254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147254u;
        // 0x147258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14725Cu;
label_14725c:
    // 0x14725c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x14725cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147260: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x147260u;
    {
        const bool branch_taken_0x147260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147260u;
        // 0x147264: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147260) {
            ctx->pc = 0x147248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147248;
        }
    }
    ctx->pc = 0x147268u;
label_147268:
    // 0x147268: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14726c: 0x8c45b744  lw          $a1, -0x48BC($v0)
    ctx->pc = 0x14726cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B744u));
    // 0x147270: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x147270u;
    {
        const bool branch_taken_0x147270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147270u;
        // 0x147274: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147270) {
            ctx->pc = 0x1472A0u;
            goto label_1472a0;
        }
    }
    ctx->pc = 0x147278u;
    // 0x147278: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14727c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14727cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147280: 0x2442ddd0  addiu       $v0, $v0, -0x2230
    ctx->pc = 0x147280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
    // 0x147284: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x147284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_147288:
    // 0x147288: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14728c: 0x1044fff1  beq         $v0, $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x14728Cu;
    {
        const bool branch_taken_0x14728c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x147290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14728Cu;
        // 0x147290: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14728c) {
            ctx->pc = 0x147254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147254;
        }
    }
    ctx->pc = 0x147294u;
    // 0x147294: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x147294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147298: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147298u;
    {
        const bool branch_taken_0x147298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147298u;
        // 0x14729c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147298) {
            ctx->pc = 0x147288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147288;
        }
    }
    ctx->pc = 0x1472A0u;
label_1472a0:
    // 0x1472a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1472a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1472a4: 0x8c45b748  lw          $a1, -0x48B8($v0)
    ctx->pc = 0x1472a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B748u));
    // 0x1472a8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1472A8u;
    {
        const bool branch_taken_0x1472a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472A8u;
        // 0x1472ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472a8) {
            ctx->pc = 0x1472D8u;
            goto label_1472d8;
        }
    }
    ctx->pc = 0x1472B0u;
    // 0x1472b0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1472b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1472b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1472b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472b8: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1472b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x1472bc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1472bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1472c0:
    // 0x1472c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1472c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1472c4: 0x1044ffe3  beq         $v0, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1472C4u;
    {
        const bool branch_taken_0x1472c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1472C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472C4u;
        // 0x1472c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472c4) {
            ctx->pc = 0x147254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147254;
        }
    }
    ctx->pc = 0x1472CCu;
    // 0x1472cc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1472ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1472d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1472D0u;
    {
        const bool branch_taken_0x1472d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1472D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472D0u;
        // 0x1472d4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472d0) {
            ctx->pc = 0x1472C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1472c0;
        }
    }
    ctx->pc = 0x1472D8u;
label_1472d8:
    // 0x1472d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1472d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1472dc: 0x8c45b74c  lw          $a1, -0x48B4($v0)
    ctx->pc = 0x1472dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B74Cu));
    // 0x1472e0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1472E0u;
    {
        const bool branch_taken_0x1472e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472E0u;
        // 0x1472e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472e0) {
            ctx->pc = 0x147310u;
            goto label_147310;
        }
    }
    ctx->pc = 0x1472E8u;
    // 0x1472e8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1472e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1472ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1472ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472f0: 0x2442def0  addiu       $v0, $v0, -0x2110
    ctx->pc = 0x1472f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
    // 0x1472f4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1472f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1472f8:
    // 0x1472f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1472f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1472fc: 0x1044ffd5  beq         $v0, $a0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1472FCu;
    {
        const bool branch_taken_0x1472fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x147300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472FCu;
        // 0x147300: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472fc) {
            ctx->pc = 0x147254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147254;
        }
    }
    ctx->pc = 0x147304u;
    // 0x147304: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x147304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147308: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147308u;
    {
        const bool branch_taken_0x147308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147308u;
        // 0x14730c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147308) {
            ctx->pc = 0x1472F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1472f8;
        }
    }
    ctx->pc = 0x147310u;
label_147310:
    // 0x147310: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x147314: 0x8c45b750  lw          $a1, -0x48B0($v0)
    ctx->pc = 0x147314u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B750u));
    // 0x147318: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x147318u;
    {
        const bool branch_taken_0x147318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147318u;
        // 0x14731c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147318) {
            ctx->pc = 0x147348u;
            goto label_147348;
        }
    }
    ctx->pc = 0x147320u;
    // 0x147320: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147324: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x147324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147328: 0x2442df50  addiu       $v0, $v0, -0x20B0
    ctx->pc = 0x147328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x14732c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x14732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_147330:
    // 0x147330: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x147334: 0x1044ffc7  beq         $v0, $a0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x147334u;
    {
        const bool branch_taken_0x147334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x147338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147334u;
        // 0x147338: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147334) {
            ctx->pc = 0x147254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147254;
        }
    }
    ctx->pc = 0x14733Cu;
    // 0x14733c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x14733cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147340: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147340u;
    {
        const bool branch_taken_0x147340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147340u;
        // 0x147344: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147340) {
            ctx->pc = 0x147330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147330;
        }
    }
    ctx->pc = 0x147348u;
label_147348:
    // 0x147348: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14734c: 0x8c45b754  lw          $a1, -0x48AC($v0)
    ctx->pc = 0x14734cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B754u));
    // 0x147350: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x147350u;
    {
        const bool branch_taken_0x147350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147350u;
        // 0x147354: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147350) {
            ctx->pc = 0x147380u;
            goto label_147380;
        }
    }
    ctx->pc = 0x147358u;
    // 0x147358: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14735c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14735cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147360: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x147360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x147364: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x147364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_147368:
    // 0x147368: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14736c: 0x1044ffb9  beq         $v0, $a0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x14736Cu;
    {
        const bool branch_taken_0x14736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x147370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14736Cu;
        // 0x147370: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14736c) {
            ctx->pc = 0x147254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147254;
        }
    }
    ctx->pc = 0x147374u;
    // 0x147374: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x147374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147378: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147378u;
    {
        const bool branch_taken_0x147378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147378u;
        // 0x14737c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147378) {
            ctx->pc = 0x147368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147368;
        }
    }
    ctx->pc = 0x147380u;
label_147380:
    // 0x147380: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x147384: 0x8c45b758  lw          $a1, -0x48A8($v0)
    ctx->pc = 0x147384u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B758u));
    // 0x147388: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x147388u;
    {
        const bool branch_taken_0x147388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147388u;
        // 0x14738c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147388) {
            ctx->pc = 0x1473B8u;
            goto label_1473b8;
        }
    }
    ctx->pc = 0x147390u;
    // 0x147390: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147394: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x147394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147398: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x147398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x14739c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x14739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1473a0:
    // 0x1473a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1473a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1473a4: 0x1044ffab  beq         $v0, $a0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1473A4u;
    {
        const bool branch_taken_0x1473a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1473A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473A4u;
        // 0x1473a8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473a4) {
            ctx->pc = 0x147254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147254;
        }
    }
    ctx->pc = 0x1473ACu;
    // 0x1473ac: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1473acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1473b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1473B0u;
    {
        const bool branch_taken_0x1473b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1473B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473B0u;
        // 0x1473b4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473b0) {
            ctx->pc = 0x1473A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1473a0;
        }
    }
    ctx->pc = 0x1473B8u;
label_1473b8:
    // 0x1473b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1473b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1473bc: 0x8c45b75c  lw          $a1, -0x48A4($v0)
    ctx->pc = 0x1473bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B75Cu));
    // 0x1473c0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1473C0u;
    {
        const bool branch_taken_0x1473c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1473C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473C0u;
        // 0x1473c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473c0) {
            ctx->pc = 0x1473F0u;
            goto label_1473f0;
        }
    }
    ctx->pc = 0x1473C8u;
    // 0x1473c8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1473c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1473cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1473ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473d0: 0x2442e070  addiu       $v0, $v0, -0x1F90
    ctx->pc = 0x1473d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959216));
    // 0x1473d4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1473d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1473d8:
    // 0x1473d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1473d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1473dc: 0x1044ff9d  beq         $v0, $a0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1473DCu;
    {
        const bool branch_taken_0x1473dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1473E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473DCu;
        // 0x1473e0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473dc) {
            ctx->pc = 0x147254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147254;
        }
    }
    ctx->pc = 0x1473E4u;
    // 0x1473e4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1473e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1473e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1473E8u;
    {
        const bool branch_taken_0x1473e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1473ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473E8u;
        // 0x1473ec: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473e8) {
            ctx->pc = 0x1473D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1473d8;
        }
    }
    ctx->pc = 0x1473F0u;
label_1473f0:
    // 0x1473f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1473f4: 0x8c45b760  lw          $a1, -0x48A0($v0)
    ctx->pc = 0x1473f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B760u));
    // 0x1473f8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1473F8u;
    {
        const bool branch_taken_0x1473f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1473FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473F8u;
        // 0x1473fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473f8) {
            ctx->pc = 0x147428u;
            goto label_147428;
        }
    }
    ctx->pc = 0x147400u;
    // 0x147400: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147404: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x147404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147408: 0x2442e130  addiu       $v0, $v0, -0x1ED0
    ctx->pc = 0x147408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x14740c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x14740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_147410:
    // 0x147410: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x147414: 0x1044ff8f  beq         $v0, $a0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x147414u;
    {
        const bool branch_taken_0x147414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x147418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147414u;
        // 0x147418: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147414) {
            ctx->pc = 0x147254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147254;
        }
    }
    ctx->pc = 0x14741Cu;
    // 0x14741c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x14741cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147420: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147420u;
    {
        const bool branch_taken_0x147420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147420u;
        // 0x147424: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147420) {
            ctx->pc = 0x147410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147410;
        }
    }
    ctx->pc = 0x147428u;
label_147428:
    // 0x147428: 0x3e00008  jr          $ra
    ctx->pc = 0x147428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147428u;
        // 0x14742c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147430u;
}
