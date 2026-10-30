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

// Function: sub_0011DE58
// Address: 0x11de58 - 0x11e0a8
void sub_0011DE58_0x11de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DE58_0x11de58");
#endif

    switch (ctx->pc) {
        case 0x11dec8u: goto label_11dec8;
        case 0x11df04u: goto label_11df04;
        case 0x11df14u: goto label_11df14;
        case 0x11df38u: goto label_11df38;
        case 0x11df40u: goto label_11df40;
        case 0x11df50u: goto label_11df50;
        case 0x11df80u: goto label_11df80;
        case 0x11dfa4u: goto label_11dfa4;
        case 0x11dfb4u: goto label_11dfb4;
        case 0x11dfc0u: goto label_11dfc0;
        case 0x11dfe8u: goto label_11dfe8;
        case 0x11dff0u: goto label_11dff0;
        case 0x11e000u: goto label_11e000;
        case 0x11e00cu: goto label_11e00c;
        default: break;
    }

    ctx->pc = 0x11de58u;

    // 0x11de58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11de58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11de5c: 0x2c82000e  sltiu       $v0, $a0, 0xE
    ctx->pc = 0x11de5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x11de60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11de64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11de64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11de68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11de68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11de70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11de70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de74: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x11DE74u;
    {
        const bool branch_taken_0x11de74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE74u;
        // 0x11de78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de74) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DE7Cu;
    // 0x11de7c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x11de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x11de80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11de80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11de84: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x11de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x11de88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11de88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11de8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11de90: 0x800008  jr          $a0
    ctx->pc = 0x11DE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DE98u: goto label_11de98;
            case 0x11DEE8u: goto label_11dee8;
            case 0x11DEF4u: goto label_11def4;
            case 0x11DF74u: goto label_11df74;
            case 0x11DF88u: goto label_11df88;
            case 0x11DF94u: goto label_11df94;
            case 0x11E02Cu: goto label_11e02c;
            case 0x11E038u: goto label_11e038;
            case 0x11E044u: goto label_11e044;
            case 0x11E050u: goto label_11e050;
            case 0x11E05Cu: goto label_11e05c;
            case 0x11E070u: goto label_11e070;
            case 0x11E07Cu: goto label_11e07c;
            case 0x11E088u: goto label_11e088;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DE90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11DE98u;
label_11de98:
    // 0x11de98: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DE98u;
    {
        const bool branch_taken_0x11de98 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE98u;
        // 0x11de9c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de98) {
            ctx->pc = 0x11DEB4u;
            goto label_11deb4;
        }
    }
    ctx->pc = 0x11DEA0u;
    // 0x11dea0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11dea4: 0x2442b1b8  addiu       $v0, $v0, -0x4E48
    ctx->pc = 0x11dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947256));
    // 0x11dea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11deac: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x11DEACu;
    {
        const bool branch_taken_0x11deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEACu;
        // 0x11deb0: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deac) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DEB4u;
label_11deb4:
    // 0x11deb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11deb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11debc: 0x2442b1b8  addiu       $v0, $v0, -0x4E48
    ctx->pc = 0x11debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947256));
    // 0x11dec0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x11dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11dec4: 0x0  nop
    ctx->pc = 0x11dec4u;
    // NOP
label_11dec8:
    // 0x11dec8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x11dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x11decc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11deccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11ded0: 0x0  nop
    ctx->pc = 0x11ded0u;
    // NOP
    // 0x11ded4: 0x0  nop
    ctx->pc = 0x11ded4u;
    // NOP
    // 0x11ded8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11DED8u;
    {
        const bool branch_taken_0x11ded8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DED8u;
        // 0x11dedc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ded8) {
            ctx->pc = 0x11DEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dec8;
        }
    }
    ctx->pc = 0x11DEE0u;
    // 0x11dee0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x11DEE0u;
    {
        const bool branch_taken_0x11dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEE0u;
        // 0x11dee4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dee0) {
            ctx->pc = 0x11E094u;
            goto label_11e094;
        }
    }
    ctx->pc = 0x11DEE8u;
label_11dee8:
    // 0x11dee8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11deec: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x11DEECu;
    {
        const bool branch_taken_0x11deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEECu;
        // 0x11def0: 0xac51b1cc  sw          $s1, -0x4E34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947276), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deec) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DEF4u;
label_11def4:
    // 0x11def4: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DEF4u;
    {
        const bool branch_taken_0x11def4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEF4u;
        // 0x11def8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11def4) {
            ctx->pc = 0x11DF1Cu;
            goto label_11df1c;
        }
    }
    ctx->pc = 0x11DEFCu;
    // 0x11defc: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11DEFCu;
    SET_GPR_U32(ctx, 31, 0x11DF04u);
    ctx->pc = 0x11DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DEFCu;
    // 0x11df00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11DEFCu, 0x11DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF04u;
label_11df04:
    // 0x11df04: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x11DF04u;
    {
        const bool branch_taken_0x11df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF04u;
        // 0x11df08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df04) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DF0Cu;
    // 0x11df0c: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11DF0Cu;
    SET_GPR_U32(ctx, 31, 0x11DF14u);
    ctx->pc = 0x11DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF0Cu;
    // 0x11df10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11DF0Cu, 0x11DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF14u;
label_11df14:
    // 0x11df14: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x11DF14u;
    {
        const bool branch_taken_0x11df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF14u;
        // 0x11df18: 0xa05103e6  sb          $s1, 0x3E6($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 998), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df14) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DF1Cu;
label_11df1c:
    // 0x11df1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11df20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11df20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df24: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11df24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11df28: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11df28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11df2c: 0x18600058  blez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x11DF2Cu;
    {
        const bool branch_taken_0x11df2c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF2Cu;
        // 0x11df30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df2c) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DF34u;
    // 0x11df34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11df34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11df38:
    // 0x11df38: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11DF38u;
    SET_GPR_U32(ctx, 31, 0x11DF40u);
    ctx->pc = 0x11DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF38u;
    // 0x11df3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11DF38u, 0x11DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF40u;
label_11df40:
    // 0x11df40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF40u;
    {
        const bool branch_taken_0x11df40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF40u;
        // 0x11df44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df40) {
            ctx->pc = 0x11DF54u;
            goto label_11df54;
        }
    }
    ctx->pc = 0x11DF48u;
    // 0x11df48: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11DF48u;
    SET_GPR_U32(ctx, 31, 0x11DF50u);
    ctx->pc = 0x11DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF48u;
    // 0x11df4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11DF48u, 0x11DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF50u;
label_11df50:
    // 0x11df50: 0xa05103e6  sb          $s1, 0x3E6($v0)
    ctx->pc = 0x11df50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 998), (uint8_t)GPR_U32(ctx, 17));
label_11df54:
    // 0x11df54: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x11df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x11df58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11df58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11df5c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11df5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11df60: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11df60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11df64: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11DF64u;
    {
        const bool branch_taken_0x11df64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF64u;
        // 0x11df68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df64) {
            ctx->pc = 0x11DF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11df38;
        }
    }
    ctx->pc = 0x11DF6Cu;
    // 0x11df6c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x11DF6Cu;
    {
        const bool branch_taken_0x11df6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF6Cu;
        // 0x11df70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df6c) {
            ctx->pc = 0x11E094u;
            goto label_11e094;
        }
    }
    ctx->pc = 0x11DF74u;
label_11df74:
    // 0x11df74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11df78: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x11DF78u;
    SET_GPR_U32(ctx, 31, 0x11DF80u);
    ctx->pc = 0x11DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF78u;
    // 0x11df7c: 0xac51b1c0  sw          $s1, -0x4E40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x11DF78u, 0x11DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF80u;
label_11df80:
    // 0x11df80: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x11DF80u;
    {
        const bool branch_taken_0x11df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF80u;
        // 0x11df84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df80) {
            ctx->pc = 0x11E094u;
            goto label_11e094;
        }
    }
    ctx->pc = 0x11DF88u;
label_11df88:
    // 0x11df88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11df88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11df8c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x11DF8Cu;
    {
        const bool branch_taken_0x11df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF8Cu;
        // 0x11df90: 0xac51b1c8  sw          $s1, -0x4E38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947272), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df8c) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DF94u;
label_11df94:
    // 0x11df94: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x11DF94u;
    {
        const bool branch_taken_0x11df94 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF94u;
        // 0x11df98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df94) {
            ctx->pc = 0x11DFC8u;
            goto label_11dfc8;
        }
    }
    ctx->pc = 0x11DF9Cu;
    // 0x11df9c: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11DF9Cu;
    SET_GPR_U32(ctx, 31, 0x11DFA4u);
    ctx->pc = 0x11DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF9Cu;
    // 0x11dfa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11DF9Cu, 0x11DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFA4u;
label_11dfa4:
    // 0x11dfa4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x11DFA4u;
    {
        const bool branch_taken_0x11dfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFA4u;
        // 0x11dfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfa4) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DFACu;
    // 0x11dfac: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11DFACu;
    SET_GPR_U32(ctx, 31, 0x11DFB4u);
    ctx->pc = 0x11DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFACu;
    // 0x11dfb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11DFACu, 0x11DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFB4u;
label_11dfb4:
    // 0x11dfb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11dfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfb8: 0xc049a8c  jal         func_126A30
    ctx->pc = 0x11DFB8u;
    SET_GPR_U32(ctx, 31, 0x11DFC0u);
    ctx->pc = 0x11DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFB8u;
    // 0x11dfbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A30u, 0x11DFB8u, 0x11DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFC0u;
label_11dfc0:
    // 0x11dfc0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11DFC0u;
    {
        const bool branch_taken_0x11dfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFC0u;
        // 0x11dfc4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfc0) {
            ctx->pc = 0x11E094u;
            goto label_11e094;
        }
    }
    ctx->pc = 0x11DFC8u;
label_11dfc8:
    // 0x11dfc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11dfcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11dfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfd0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x11dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11dfd4: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x11dfd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11dfd8: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x11DFD8u;
    {
        const bool branch_taken_0x11dfd8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFD8u;
        // 0x11dfdc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfd8) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11DFE0u;
    // 0x11dfe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfe4: 0x0  nop
    ctx->pc = 0x11dfe4u;
    // NOP
label_11dfe8:
    // 0x11dfe8: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11DFE8u;
    SET_GPR_U32(ctx, 31, 0x11DFF0u);
    ctx->pc = 0x11DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFE8u;
    // 0x11dfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11DFE8u, 0x11DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFF0u;
label_11dff0:
    // 0x11dff0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DFF0u;
    {
        const bool branch_taken_0x11dff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFF0u;
        // 0x11dff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dff0) {
            ctx->pc = 0x11E00Cu;
            goto label_11e00c;
        }
    }
    ctx->pc = 0x11DFF8u;
    // 0x11dff8: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11DFF8u;
    SET_GPR_U32(ctx, 31, 0x11E000u);
    ctx->pc = 0x11DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFF8u;
    // 0x11dffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11DFF8u, 0x11E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E000u;
label_11e000:
    // 0x11e000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e004: 0xc049a8c  jal         func_126A30
    ctx->pc = 0x11E004u;
    SET_GPR_U32(ctx, 31, 0x11E00Cu);
    ctx->pc = 0x11E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E004u;
    // 0x11e008: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A30u, 0x11E004u, 0x11E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E00Cu;
label_11e00c:
    // 0x11e00c: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x11e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x11e010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11e010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11e014: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11e014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11e018: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11e018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11e01c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11E01Cu;
    {
        const bool branch_taken_0x11e01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E01Cu;
        // 0x11e020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e01c) {
            ctx->pc = 0x11DFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dfe8;
        }
    }
    ctx->pc = 0x11E024u;
    // 0x11e024: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x11E024u;
    {
        const bool branch_taken_0x11e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E024u;
        // 0x11e028: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e024) {
            ctx->pc = 0x11E094u;
            goto label_11e094;
        }
    }
    ctx->pc = 0x11E02Cu;
label_11e02c:
    // 0x11e02c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e030: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11E030u;
    {
        const bool branch_taken_0x11e030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E030u;
        // 0x11e034: 0xac51b1d0  sw          $s1, -0x4E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947280), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e030) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E038u;
label_11e038:
    // 0x11e038: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e03c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11E03Cu;
    {
        const bool branch_taken_0x11e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E03Cu;
        // 0x11e040: 0xac51b2ac  sw          $s1, -0x4D54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947500), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e03c) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E044u;
label_11e044:
    // 0x11e044: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e048: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11E048u;
    {
        const bool branch_taken_0x11e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E048u;
        // 0x11e04c: 0xac51b2b0  sw          $s1, -0x4D50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947504), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e048) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E050u;
label_11e050:
    // 0x11e050: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e054: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11E054u;
    {
        const bool branch_taken_0x11e054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E054u;
        // 0x11e058: 0xac51b1d4  sw          $s1, -0x4E2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947284), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e054) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E05Cu;
label_11e05c:
    // 0x11e05c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e060: 0x2443b248  addiu       $v1, $v0, -0x4DB8
    ctx->pc = 0x11e060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947400));
    // 0x11e064: 0xa051b248  sb          $s1, -0x4DB8($v0)
    ctx->pc = 0x11e064u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x50B248u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50B248u, _value); } while (0);
    // 0x11e068: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11E068u;
    {
        const bool branch_taken_0x11e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E068u;
        // 0x11e06c: 0xa0710001  sb          $s1, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e068) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E070u;
label_11e070:
    // 0x11e070: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e074: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11E074u;
    {
        const bool branch_taken_0x11e074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E074u;
        // 0x11e078: 0xa451b23c  sh          $s1, -0x4DC4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294947388), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e074) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E07Cu;
label_11e07c:
    // 0x11e07c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E080u;
    {
        const bool branch_taken_0x11e080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E080u;
        // 0x11e084: 0xac51b2b4  sw          $s1, -0x4D4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947508), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e080) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E088u;
label_11e088:
    // 0x11e088: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11e08c: 0xac51b1e0  sw          $s1, -0x4E20($v0)
    ctx->pc = 0x11e08cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x50B1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B1E0u, _value); } while (0);
label_11e090:
    // 0x11e090: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11e090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11e094:
    // 0x11e094: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11e094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e098: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11e098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0A0u;
        // 0x11e0a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E0A8u;
}
