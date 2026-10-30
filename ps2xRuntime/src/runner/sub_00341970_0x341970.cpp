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

// Function: sub_00341970
// Address: 0x341970 - 0x341a00
void sub_00341970_0x341970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341970_0x341970");
#endif

    switch (ctx->pc) {
        case 0x341970u: goto label_341970;
        case 0x341974u: goto label_341974;
        case 0x341978u: goto label_341978;
        case 0x34197cu: goto label_34197c;
        case 0x341980u: goto label_341980;
        case 0x341984u: goto label_341984;
        case 0x341988u: goto label_341988;
        case 0x34198cu: goto label_34198c;
        case 0x341990u: goto label_341990;
        case 0x341994u: goto label_341994;
        case 0x341998u: goto label_341998;
        case 0x34199cu: goto label_34199c;
        case 0x3419a0u: goto label_3419a0;
        case 0x3419a4u: goto label_3419a4;
        case 0x3419a8u: goto label_3419a8;
        case 0x3419acu: goto label_3419ac;
        case 0x3419b0u: goto label_3419b0;
        case 0x3419b4u: goto label_3419b4;
        case 0x3419b8u: goto label_3419b8;
        case 0x3419bcu: goto label_3419bc;
        case 0x3419c0u: goto label_3419c0;
        case 0x3419c4u: goto label_3419c4;
        case 0x3419c8u: goto label_3419c8;
        case 0x3419ccu: goto label_3419cc;
        case 0x3419d0u: goto label_3419d0;
        case 0x3419d4u: goto label_3419d4;
        case 0x3419d8u: goto label_3419d8;
        case 0x3419dcu: goto label_3419dc;
        case 0x3419e0u: goto label_3419e0;
        case 0x3419e4u: goto label_3419e4;
        case 0x3419e8u: goto label_3419e8;
        case 0x3419ecu: goto label_3419ec;
        case 0x3419f0u: goto label_3419f0;
        case 0x3419f4u: goto label_3419f4;
        case 0x3419f8u: goto label_3419f8;
        case 0x3419fcu: goto label_3419fc;
        default: break;
    }

    ctx->pc = 0x341970u;

label_341970:
    // 0x341970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_341974:
    // 0x341974: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x341974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_341978:
    // 0x341978: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x341978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_34197c:
    // 0x34197c: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x34197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
label_341980:
    // 0x341980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341984:
    // 0x341984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_341988:
    // 0x341988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34198c:
    // 0x34198c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34198cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_341990:
    // 0x341990: 0xc0d0456  jal         func_341158
label_341994:
    if (ctx->pc == 0x341994u) {
        ctx->pc = 0x341994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341990u;
        // 0x341994: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341998u;
        goto label_341998;
    }
    ctx->pc = 0x341990u;
    SET_GPR_U32(ctx, 31, 0x341998u);
    ctx->pc = 0x341994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341990u;
    // 0x341994: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x341990u, 0x341998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341998u;
label_341998:
    // 0x341998: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x341998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_34199c:
    // 0x34199c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x34199cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3419a0:
    // 0x3419a0: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x3419a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_3419a4:
    // 0x3419a4: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x3419a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_3419a8:
    // 0x3419a8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x3419a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_3419ac:
    // 0x3419ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3419acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3419b0:
    // 0x3419b0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3419b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_3419b4:
    // 0x3419b4: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3419b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_3419b8:
    // 0x3419b8: 0xa600003c  sh          $zero, 0x3C($s0)
    ctx->pc = 0x3419b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 0));
label_3419bc:
    // 0x3419bc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3419bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_3419c0:
    // 0x3419c0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3419c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3419c4:
    // 0x3419c4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_3419c8:
    if (ctx->pc == 0x3419C8u) {
        ctx->pc = 0x3419C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419C4u;
        // 0x3419c8: 0x7e020050  sq          $v0, 0x50($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3419CCu;
        goto label_3419cc;
    }
    ctx->pc = 0x3419C4u;
    {
        const bool branch_taken_0x3419c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3419C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419C4u;
        // 0x3419c8: 0x7e020050  sq          $v0, 0x50($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419c4) {
            ctx->pc = 0x3419E4u;
            goto label_3419e4;
        }
    }
    ctx->pc = 0x3419CCu;
label_3419cc:
    // 0x3419cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3419ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3419d0:
    // 0x3419d0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3419d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3419d4:
    // 0x3419d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3419d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3419d8:
    // 0x3419d8: 0x40f809  jalr        $v0
label_3419dc:
    if (ctx->pc == 0x3419DCu) {
        ctx->pc = 0x3419DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419D8u;
        // 0x3419dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3419E0u;
        goto label_3419e0;
    }
    ctx->pc = 0x3419D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3419E0u);
        ctx->pc = 0x3419DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419D8u;
        // 0x3419dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3419D8u, 0x3419E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3419E0u;
label_3419e0:
    // 0x3419e0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x3419e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_3419e4:
    // 0x3419e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3419e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3419e8:
    // 0x3419e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3419e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3419ec:
    // 0x3419ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3419ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3419f0:
    // 0x3419f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3419f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3419f4:
    // 0x3419f4: 0x3e00008  jr          $ra
label_3419f8:
    if (ctx->pc == 0x3419F8u) {
        ctx->pc = 0x3419F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419F4u;
        // 0x3419f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3419FCu;
        goto label_3419fc;
    }
    ctx->pc = 0x3419F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3419F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419F4u;
        // 0x3419f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3419F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3419FCu;
label_3419fc:
    // 0x3419fc: 0x0  nop
    ctx->pc = 0x3419fcu;
    // NOP
    ctx->pc = 0x341a00u;
}
