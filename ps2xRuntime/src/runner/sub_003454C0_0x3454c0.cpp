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

// Function: sub_003454C0
// Address: 0x3454c0 - 0x345588
void sub_003454C0_0x3454c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003454C0_0x3454c0");
#endif

    switch (ctx->pc) {
        case 0x34552cu: goto label_34552c;
        default: break;
    }

    ctx->pc = 0x3454c0u;

    // 0x3454c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3454c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3454c4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x3454c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454c8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3454c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3454cc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3454ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3454d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3454d4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3454d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454d8: 0x27a90064  addiu       $t1, $sp, 0x64
    ctx->pc = 0x3454d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x3454dc: 0x27aa0068  addiu       $t2, $sp, 0x68
    ctx->pc = 0x3454dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x3454e0: 0xc4ec0040  lwc1        $f12, 0x40($a3)
    ctx->pc = 0x3454e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3454e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3454e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3454e8: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x3454e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x3454ec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3454ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3454f0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3454f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3454f4: 0x25650040  addiu       $a1, $t3, 0x40
    ctx->pc = 0x3454f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x3454f8: 0x25640050  addiu       $a0, $t3, 0x50
    ctx->pc = 0x3454f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
    // 0x3454fc: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x3454fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x345500: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x345500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x345504: 0x250816c0  addiu       $t0, $t0, 0x16C0
    ctx->pc = 0x345504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5824));
    // 0x345508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x345508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34550c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34550cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x345510: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x345510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x345514: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x345514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x345518: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x345518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34551c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x34551cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x345520: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x345520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x345524: 0xc0d2efa  jal         func_34BBE8
    ctx->pc = 0x345524u;
    SET_GPR_U32(ctx, 31, 0x34552Cu);
    ctx->pc = 0x345528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345524u;
    // 0x345528: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BBE8u, 0x345524u, 0x34552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34552Cu;
label_34552c:
    // 0x34552c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34552Cu;
    {
        const bool branch_taken_0x34552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34552Cu;
        // 0x345530: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34552c) {
            ctx->pc = 0x34553Cu;
            goto label_34553c;
        }
    }
    ctx->pc = 0x345534u;
    // 0x345534: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x345534u;
    {
        const bool branch_taken_0x345534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345534u;
        // 0x345538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345534) {
            ctx->pc = 0x345578u;
            goto label_345578;
        }
    }
    ctx->pc = 0x34553Cu;
label_34553c:
    // 0x34553c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345540: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x345540u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345544: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x345544u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345548: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x345548u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34554c: 0x7ba70050  lq          $a3, 0x50($sp)
    ctx->pc = 0x34554cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x345550: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x345550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x345554: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x345554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x345558: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x345558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x34555c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x34555cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x345560: 0x7e040090  sq          $a0, 0x90($s0)
    ctx->pc = 0x345560u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 4));
    // 0x345564: 0x7e050020  sq          $a1, 0x20($s0)
    ctx->pc = 0x345564u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 5));
    // 0x345568: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x345568u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
    // 0x34556c: 0x7e070050  sq          $a3, 0x50($s0)
    ctx->pc = 0x34556cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 7));
    // 0x345570: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x345570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x345574: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x345574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_345578:
    // 0x345578: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x345578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34557c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x34557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x345580: 0x3e00008  jr          $ra
    ctx->pc = 0x345580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345580u;
        // 0x345584: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345588u;
}
