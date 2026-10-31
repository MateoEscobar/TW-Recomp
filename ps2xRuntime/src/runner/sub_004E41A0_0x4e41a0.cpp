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

// Function: sub_004E41A0
// Address: 0x4e41a0 - 0x4e4228
void sub_004E41A0_0x4e41a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E41A0_0x4e41a0");
#endif

    switch (ctx->pc) {
        case 0x4e41a0u: goto label_4e41a0;
        case 0x4e41a4u: goto label_4e41a4;
        case 0x4e41a8u: goto label_4e41a8;
        case 0x4e41acu: goto label_4e41ac;
        case 0x4e41b0u: goto label_4e41b0;
        case 0x4e41b4u: goto label_4e41b4;
        case 0x4e41b8u: goto label_4e41b8;
        case 0x4e41bcu: goto label_4e41bc;
        case 0x4e41c0u: goto label_4e41c0;
        case 0x4e41c4u: goto label_4e41c4;
        case 0x4e41c8u: goto label_4e41c8;
        case 0x4e41ccu: goto label_4e41cc;
        case 0x4e41d0u: goto label_4e41d0;
        case 0x4e41d4u: goto label_4e41d4;
        case 0x4e41d8u: goto label_4e41d8;
        case 0x4e41dcu: goto label_4e41dc;
        case 0x4e41e0u: goto label_4e41e0;
        case 0x4e41e4u: goto label_4e41e4;
        case 0x4e41e8u: goto label_4e41e8;
        case 0x4e41ecu: goto label_4e41ec;
        case 0x4e41f0u: goto label_4e41f0;
        case 0x4e41f4u: goto label_4e41f4;
        case 0x4e41f8u: goto label_4e41f8;
        case 0x4e41fcu: goto label_4e41fc;
        case 0x4e4200u: goto label_4e4200;
        case 0x4e4204u: goto label_4e4204;
        case 0x4e4208u: goto label_4e4208;
        case 0x4e420cu: goto label_4e420c;
        case 0x4e4210u: goto label_4e4210;
        case 0x4e4214u: goto label_4e4214;
        case 0x4e4218u: goto label_4e4218;
        case 0x4e421cu: goto label_4e421c;
        case 0x4e4220u: goto label_4e4220;
        case 0x4e4224u: goto label_4e4224;
        default: break;
    }

    ctx->pc = 0x4e41a0u;

label_4e41a0:
    // 0x4e41a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e41a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e41a4:
    // 0x4e41a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e41a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e41a8:
    // 0x4e41a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e41a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e41ac:
    // 0x4e41ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e41acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e41b0:
    // 0x4e41b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e41b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e41b4:
    // 0x4e41b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e41b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e41b8:
    // 0x4e41b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e41b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e41bc:
    // 0x4e41bc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e41c0:
    if (ctx->pc == 0x4E41C0u) {
        ctx->pc = 0x4E41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E41BCu;
        // 0x4e41c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E41C4u;
        goto label_4e41c4;
    }
    ctx->pc = 0x4E41BCu;
    {
        const bool branch_taken_0x4e41bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E41BCu;
        // 0x4e41c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e41bc) {
            ctx->pc = 0x4E4204u;
            goto label_4e4204;
        }
    }
    ctx->pc = 0x4E41C4u;
label_4e41c4:
    // 0x4e41c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e41c8:
    // 0x4e41c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e41c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e41cc:
    // 0x4e41cc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e41ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e41d0:
    // 0x4e41d0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e41d4:
    // 0x4e41d4: 0x60f809  jalr        $v1
label_4e41d8:
    if (ctx->pc == 0x4E41D8u) {
        ctx->pc = 0x4E41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E41D4u;
        // 0x4e41d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E41DCu;
        goto label_4e41dc;
    }
    ctx->pc = 0x4E41D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E41DCu);
        ctx->pc = 0x4E41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E41D4u;
        // 0x4e41d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E41D4u, 0x4E41DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E41DCu;
label_4e41dc:
    // 0x4e41dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e41e0:
    // 0x4e41e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e41e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e41e4:
    // 0x4e41e4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e41e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e41e8:
    // 0x4e41e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e41e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e41ec:
    // 0x4e41ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e41ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e41f0:
    // 0x4e41f0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e41f4:
    // 0x4e41f4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e41f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e41f8:
    // 0x4e41f8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e41fc:
    // 0x4e41fc: 0x60f809  jalr        $v1
label_4e4200:
    if (ctx->pc == 0x4E4200u) {
        ctx->pc = 0x4E4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E41FCu;
        // 0x4e4200: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4204u;
        goto label_4e4204;
    }
    ctx->pc = 0x4E41FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4204u);
        ctx->pc = 0x4E4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E41FCu;
        // 0x4e4200: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E41FCu, 0x4E4204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4204u;
label_4e4204:
    // 0x4e4204: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e4204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4208:
    // 0x4e4208: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e4208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e420c:
    // 0x4e420c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e420cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4210:
    // 0x4e4210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4214:
    // 0x4e4214: 0x3e00008  jr          $ra
label_4e4218:
    if (ctx->pc == 0x4E4218u) {
        ctx->pc = 0x4E4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4214u;
        // 0x4e4218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E421Cu;
        goto label_4e421c;
    }
    ctx->pc = 0x4E4214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4214u;
        // 0x4e4218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E421Cu;
label_4e421c:
    // 0x4e421c: 0x0  nop
    ctx->pc = 0x4e421cu;
    // NOP
label_4e4220:
    // 0x4e4220: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x4e4220u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_4e4224:
    // 0x4e4224: 0x0  nop
    ctx->pc = 0x4e4224u;
    // NOP
    ctx->pc = 0x4e4228u;
}
