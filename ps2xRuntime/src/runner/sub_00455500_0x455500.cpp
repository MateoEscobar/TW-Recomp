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

// Function: sub_00455500
// Address: 0x455500 - 0x4556f0
void sub_00455500_0x455500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455500_0x455500");
#endif

    ctx->pc = 0x455500u;

    // 0x455500: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x455500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x455504: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x455504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x455508: 0x24420960  addiu       $v0, $v0, 0x960
    ctx->pc = 0x455508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x45550c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x455510: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x455510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x455514: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x455514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x455518: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x455518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x45551c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x45551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x455520: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x455520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x455524: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x455524u;
    {
        const bool branch_taken_0x455524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455524u;
        // 0x455528: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455524) {
            ctx->pc = 0x45554Cu;
            goto label_45554c;
        }
    }
    ctx->pc = 0x45552Cu;
    // 0x45552c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x455530: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x455530u;
    {
        const bool branch_taken_0x455530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455530) {
            ctx->pc = 0x455534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x455530u;
            // 0x455534: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x455544u;
            goto label_455544;
        }
    }
    ctx->pc = 0x455538u;
    // 0x455538: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x455538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45553c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x45553Cu;
    {
        const bool branch_taken_0x45553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45553Cu;
        // 0x455540: 0x2442ceb0  addiu       $v0, $v0, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45553c) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x455544u;
label_455544:
    // 0x455544: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x455544u;
    {
        const bool branch_taken_0x455544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455544u;
        // 0x455548: 0x2442c6b8  addiu       $v0, $v0, -0x3948 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455544) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x45554Cu;
label_45554c:
    // 0x45554c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x45554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x455550: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x455550u;
    {
        const bool branch_taken_0x455550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455550u;
        // 0x455554: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455550) {
            ctx->pc = 0x45556Cu;
            goto label_45556c;
        }
    }
    ctx->pc = 0x455558u;
    // 0x455558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x455558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45555c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x45555Cu;
    {
        const bool branch_taken_0x45555c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45555Cu;
        // 0x455560: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45555c) {
            ctx->pc = 0x4555FCu;
            goto label_4555fc;
        }
    }
    ctx->pc = 0x455564u;
    // 0x455564: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x455564u;
    {
        const bool branch_taken_0x455564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455564u;
        // 0x455568: 0x24425e68  addiu       $v0, $v0, 0x5E68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455564) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x45556Cu;
label_45556c:
    // 0x45556c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x45556cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x455570: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x455570u;
    {
        const bool branch_taken_0x455570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455570u;
        // 0x455574: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x455570) {
            ctx->pc = 0x4555C0u;
            goto label_4555c0;
        }
    }
    ctx->pc = 0x455578u;
    // 0x455578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x455578u;
    {
        const bool branch_taken_0x455578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455578u;
        // 0x45557c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455578) {
            ctx->pc = 0x4555A0u;
            goto label_4555a0;
        }
    }
    ctx->pc = 0x455580u;
    // 0x455580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x455580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x455584: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x455584u;
    {
        const bool branch_taken_0x455584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455584) {
            ctx->pc = 0x455588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x455584u;
            // 0x455588: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x455598u;
            goto label_455598;
        }
    }
    ctx->pc = 0x45558Cu;
    // 0x45558c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x455590: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x455590u;
    {
        const bool branch_taken_0x455590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455590u;
        // 0x455594: 0x2442b3f0  addiu       $v0, $v0, -0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455590) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x455598u;
label_455598:
    // 0x455598: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x455598u;
    {
        const bool branch_taken_0x455598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455598u;
        // 0x45559c: 0x24428320  addiu       $v0, $v0, -0x7CE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455598) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x4555A0u;
label_4555a0:
    // 0x4555a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4555a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4555a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4555A4u;
    {
        const bool branch_taken_0x4555a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4555a4) {
            ctx->pc = 0x4555A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4555A4u;
            // 0x4555a8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4555B8u;
            goto label_4555b8;
        }
    }
    ctx->pc = 0x4555ACu;
    // 0x4555ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x4555acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x4555b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4555B0u;
    {
        const bool branch_taken_0x4555b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4555B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4555B0u;
        // 0x4555b4: 0x24429520  addiu       $v0, $v0, -0x6AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4555b0) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x4555B8u;
label_4555b8:
    // 0x4555b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4555B8u;
    {
        const bool branch_taken_0x4555b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4555BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4555B8u;
        // 0x4555bc: 0x24426680  addiu       $v0, $v0, 0x6680 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4555b8) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x4555C0u;
label_4555c0:
    // 0x4555c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4555C0u;
    {
        const bool branch_taken_0x4555c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4555C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4555C0u;
        // 0x4555c4: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4555c0) {
            ctx->pc = 0x4555E8u;
            goto label_4555e8;
        }
    }
    ctx->pc = 0x4555C8u;
    // 0x4555c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4555c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4555cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4555CCu;
    {
        const bool branch_taken_0x4555cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4555cc) {
            ctx->pc = 0x4555D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4555CCu;
            // 0x4555d0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4555E0u;
            goto label_4555e0;
        }
    }
    ctx->pc = 0x4555D4u;
    // 0x4555d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x4555d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x4555d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4555D8u;
    {
        const bool branch_taken_0x4555d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4555DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4555D8u;
        // 0x4555dc: 0x2442a6e0  addiu       $v0, $v0, -0x5920 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4555d8) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x4555E0u;
label_4555e0:
    // 0x4555e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4555E0u;
    {
        const bool branch_taken_0x4555e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4555E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4555E0u;
        // 0x4555e4: 0x24427688  addiu       $v0, $v0, 0x7688 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4555e0) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x4555E8u;
label_4555e8:
    // 0x4555e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4555e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4555ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4555ECu;
    {
        const bool branch_taken_0x4555ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4555F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4555ECu;
        // 0x4555f0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4555ec) {
            ctx->pc = 0x4555FCu;
            goto label_4555fc;
        }
    }
    ctx->pc = 0x4555F4u;
    // 0x4555f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4555F4u;
    {
        const bool branch_taken_0x4555f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4555F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4555F4u;
        // 0x4555f8: 0x24425e68  addiu       $v0, $v0, 0x5E68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4555f4) {
            ctx->pc = 0x455604u;
            goto label_455604;
        }
    }
    ctx->pc = 0x4555FCu;
label_4555fc:
    // 0x4555fc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x4555fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x455600: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x455600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_455604:
    // 0x455604: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x455604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x455608: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x455608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x45560c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x45560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x455610: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x455610u;
    {
        const bool branch_taken_0x455610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455610u;
        // 0x455614: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455610) {
            ctx->pc = 0x455624u;
            goto label_455624;
        }
    }
    ctx->pc = 0x455618u;
    // 0x455618: 0x2442dee0  addiu       $v0, $v0, -0x2120
    ctx->pc = 0x455618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958816));
    // 0x45561c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x45561Cu;
    {
        const bool branch_taken_0x45561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45561Cu;
        // 0x455620: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45561c) {
            ctx->pc = 0x455678u;
            goto label_455678;
        }
    }
    ctx->pc = 0x455624u;
label_455624:
    // 0x455624: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x455624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x455628: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x455628u;
    {
        const bool branch_taken_0x455628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455628u;
        // 0x45562c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455628) {
            ctx->pc = 0x45563Cu;
            goto label_45563c;
        }
    }
    ctx->pc = 0x455630u;
    // 0x455630: 0x2442e818  addiu       $v0, $v0, -0x17E8
    ctx->pc = 0x455630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961176));
    // 0x455634: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x455634u;
    {
        const bool branch_taken_0x455634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455634u;
        // 0x455638: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455634) {
            ctx->pc = 0x455678u;
            goto label_455678;
        }
    }
    ctx->pc = 0x45563Cu;
label_45563c:
    // 0x45563c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x45563cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x455640: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x455640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x455644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x455644u;
    {
        const bool branch_taken_0x455644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455644u;
        // 0x455648: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455644) {
            ctx->pc = 0x455658u;
            goto label_455658;
        }
    }
    ctx->pc = 0x45564Cu;
    // 0x45564c: 0x2442e8c8  addiu       $v0, $v0, -0x1738
    ctx->pc = 0x45564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961352));
    // 0x455650: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x455650u;
    {
        const bool branch_taken_0x455650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455650u;
        // 0x455654: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455650) {
            ctx->pc = 0x455678u;
            goto label_455678;
        }
    }
    ctx->pc = 0x455658u;
label_455658:
    // 0x455658: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x455658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x45565c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x455660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x455660u;
    {
        const bool branch_taken_0x455660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455660u;
        // 0x455664: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455660) {
            ctx->pc = 0x455674u;
            goto label_455674;
        }
    }
    ctx->pc = 0x455668u;
    // 0x455668: 0x2442e9a0  addiu       $v0, $v0, -0x1660
    ctx->pc = 0x455668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
    // 0x45566c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45566Cu;
    {
        const bool branch_taken_0x45566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45566Cu;
        // 0x455670: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45566c) {
            ctx->pc = 0x455678u;
            goto label_455678;
        }
    }
    ctx->pc = 0x455674u;
label_455674:
    // 0x455674: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x455674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_455678:
    // 0x455678: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x455678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x45567c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x45567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x455680: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x455680u;
    {
        const bool branch_taken_0x455680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455680u;
        // 0x455684: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455680) {
            ctx->pc = 0x455690u;
            goto label_455690;
        }
    }
    ctx->pc = 0x455688u;
    // 0x455688: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x455688u;
    {
        const bool branch_taken_0x455688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455688u;
        // 0x45568c: 0x2442d6e8  addiu       $v0, $v0, -0x2918 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455688) {
            ctx->pc = 0x4556C4u;
            goto label_4556c4;
        }
    }
    ctx->pc = 0x455690u;
label_455690:
    // 0x455690: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x455690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x455694: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x455694u;
    {
        const bool branch_taken_0x455694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455694u;
        // 0x455698: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455694) {
            ctx->pc = 0x4556A4u;
            goto label_4556a4;
        }
    }
    ctx->pc = 0x45569Cu;
    // 0x45569c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x45569Cu;
    {
        const bool branch_taken_0x45569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4556A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45569Cu;
        // 0x4556a0: 0x2442e658  addiu       $v0, $v0, -0x19A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45569c) {
            ctx->pc = 0x4556C4u;
            goto label_4556c4;
        }
    }
    ctx->pc = 0x4556A4u;
label_4556a4:
    // 0x4556a4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4556a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x4556a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4556a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4556ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4556ACu;
    {
        const bool branch_taken_0x4556ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4556B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4556ACu;
        // 0x4556b0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4556ac) {
            ctx->pc = 0x4556BCu;
            goto label_4556bc;
        }
    }
    ctx->pc = 0x4556B4u;
    // 0x4556b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4556B4u;
    {
        const bool branch_taken_0x4556b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4556B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4556B4u;
        // 0x4556b8: 0x2442e6f0  addiu       $v0, $v0, -0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4556b4) {
            ctx->pc = 0x4556C4u;
            goto label_4556c4;
        }
    }
    ctx->pc = 0x4556BCu;
label_4556bc:
    // 0x4556bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x4556bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x4556c0: 0x2442e798  addiu       $v0, $v0, -0x1868
    ctx->pc = 0x4556c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961048));
label_4556c4:
    // 0x4556c4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x4556c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x4556c8: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x4556c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x4556cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4556ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4556d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4556D0u;
    {
        const bool branch_taken_0x4556d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4556D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4556D0u;
        // 0x4556d4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4556d0) {
            ctx->pc = 0x4556E0u;
            goto label_4556e0;
        }
    }
    ctx->pc = 0x4556D8u;
    // 0x4556d8: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x4556d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x4556dc: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x4556dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_4556e0:
    // 0x4556e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x4556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x4556e4: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x4556e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x4556e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4556E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4556ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4556E8u;
        // 0x4556ec: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4556E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4556F0u;
}
