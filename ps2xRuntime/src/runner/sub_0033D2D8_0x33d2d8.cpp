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

// Function: sub_0033D2D8
// Address: 0x33d2d8 - 0x33d340
void sub_0033D2D8_0x33d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D2D8_0x33d2d8");
#endif

    switch (ctx->pc) {
        case 0x33d2d8u: goto label_33d2d8;
        case 0x33d2dcu: goto label_33d2dc;
        case 0x33d2e0u: goto label_33d2e0;
        case 0x33d2e4u: goto label_33d2e4;
        case 0x33d2e8u: goto label_33d2e8;
        case 0x33d2ecu: goto label_33d2ec;
        case 0x33d2f0u: goto label_33d2f0;
        case 0x33d2f4u: goto label_33d2f4;
        case 0x33d2f8u: goto label_33d2f8;
        case 0x33d2fcu: goto label_33d2fc;
        case 0x33d300u: goto label_33d300;
        case 0x33d304u: goto label_33d304;
        case 0x33d308u: goto label_33d308;
        case 0x33d30cu: goto label_33d30c;
        case 0x33d310u: goto label_33d310;
        case 0x33d314u: goto label_33d314;
        case 0x33d318u: goto label_33d318;
        case 0x33d31cu: goto label_33d31c;
        case 0x33d320u: goto label_33d320;
        case 0x33d324u: goto label_33d324;
        case 0x33d328u: goto label_33d328;
        case 0x33d32cu: goto label_33d32c;
        case 0x33d330u: goto label_33d330;
        case 0x33d334u: goto label_33d334;
        case 0x33d338u: goto label_33d338;
        case 0x33d33cu: goto label_33d33c;
        default: break;
    }

    ctx->pc = 0x33d2d8u;

label_33d2d8:
    // 0x33d2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33d2dc:
    // 0x33d2dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33d2e0:
    // 0x33d2e0: 0x91020030  lbu         $v0, 0x30($t0)
    ctx->pc = 0x33d2e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 48)));
label_33d2e4:
    // 0x33d2e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33d2e8:
    // 0x33d2e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33d2ec:
    // 0x33d2ec: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x33d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_33d2f0:
    // 0x33d2f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_33d2f4:
    if (ctx->pc == 0x33D2F4u) {
        ctx->pc = 0x33D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2F0u;
        // 0x33d2f4: 0x8cea0044  lw          $t2, 0x44($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D2F8u;
        goto label_33d2f8;
    }
    ctx->pc = 0x33D2F0u;
    {
        const bool branch_taken_0x33d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d2f0) {
            ctx->pc = 0x33D2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D2F0u;
            // 0x33d2f4: 0x8cea0044  lw          $t2, 0x44($a3) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D300u;
            goto label_33d300;
        }
    }
    ctx->pc = 0x33D2F8u;
label_33d2f8:
    // 0x33d2f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_33d2fc:
    if (ctx->pc == 0x33D2FCu) {
        ctx->pc = 0x33D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2F8u;
        // 0x33d2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D300u;
        goto label_33d300;
    }
    ctx->pc = 0x33D2F8u;
    {
        const bool branch_taken_0x33d2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2F8u;
        // 0x33d2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d2f8) {
            ctx->pc = 0x33D328u;
            goto label_33d328;
        }
    }
    ctx->pc = 0x33D300u;
label_33d300:
    // 0x33d300: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d304:
    // 0x33d304: 0x3c01bf26  lui         $at, 0xBF26
    ctx->pc = 0x33d304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48934 << 16));
label_33d308:
    // 0x33d308: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x33d308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_33d30c:
    // 0x33d30c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x33d30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33d310:
    // 0x33d310: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33d310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d314:
    // 0x33d314: 0xa513a  dsrl        $t2, $t2, 4
    ctx->pc = 0x33d314u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 4);
label_33d318:
    // 0x33d318: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x33d318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33d31c:
    // 0x33d31c: 0x40f809  jalr        $v0
label_33d320:
    if (ctx->pc == 0x33D320u) {
        ctx->pc = 0x33D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D31Cu;
        // 0x33d320: 0x314a0004  andi        $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D324u;
        goto label_33d324;
    }
    ctx->pc = 0x33D31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33D324u);
        ctx->pc = 0x33D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D31Cu;
        // 0x33d320: 0x314a0004  andi        $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D31Cu, 0x33D324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D324u;
label_33d324:
    // 0x33d324: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33d324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33d328:
    // 0x33d328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d32c:
    // 0x33d32c: 0x3e00008  jr          $ra
label_33d330:
    if (ctx->pc == 0x33D330u) {
        ctx->pc = 0x33D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D32Cu;
        // 0x33d330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D334u;
        goto label_33d334;
    }
    ctx->pc = 0x33D32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D32Cu;
        // 0x33d330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D334u;
label_33d334:
    // 0x33d334: 0x0  nop
    ctx->pc = 0x33d334u;
    // NOP
label_33d338:
    // 0x33d338: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x33d338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_33d33c:
    // 0x33d33c: 0x0  nop
    ctx->pc = 0x33d33cu;
    // NOP
    ctx->pc = 0x33d340u;
}
