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

// Function: sub_00452730
// Address: 0x452730 - 0x452830
void sub_00452730_0x452730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452730_0x452730");
#endif

    switch (ctx->pc) {
        case 0x45276cu: goto label_45276c;
        case 0x452774u: goto label_452774;
        default: break;
    }

    ctx->pc = 0x452730u;

    // 0x452730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x452730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x452734: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x452734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x452738: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x452738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x45273c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x45273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x452740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x452740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452744: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x452744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x452748: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x452748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45274c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452750: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x452750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x452754: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x452754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x452758: 0x8cd2004c  lw          $s2, 0x4C($a2)
    ctx->pc = 0x452758u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x45275c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45275Cu;
    {
        const bool branch_taken_0x45275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x452760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45275Cu;
        // 0x452760: 0x8e5300e4  lw          $s3, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45275c) {
            ctx->pc = 0x45276Cu;
            goto label_45276c;
        }
    }
    ctx->pc = 0x452764u;
    // 0x452764: 0xc113b66  jal         func_44ED98
    ctx->pc = 0x452764u;
    SET_GPR_U32(ctx, 31, 0x45276Cu);
    ctx->pc = 0x452768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452764u;
    // 0x452768: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44ED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44ED98u, 0x452764u, 0x45276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45276Cu;
label_45276c:
    // 0x45276c: 0xc123508  jal         func_48D420
    ctx->pc = 0x45276Cu;
    SET_GPR_U32(ctx, 31, 0x452774u);
    ctx->pc = 0x48D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D420u, 0x45276Cu, 0x452774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452774u;
label_452774:
    // 0x452774: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x452774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x452778: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x452778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x45277c: 0x2633818  mult        $a3, $s3, $v1
    ctx->pc = 0x45277cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x452780: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x452780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x452784: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x452784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x452788: 0x32234004  andi        $v1, $s1, 0x4004
    ctx->pc = 0x452788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16388);
    // 0x45278c: 0x32242002  andi        $a0, $s1, 0x2002
    ctx->pc = 0x45278cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8194);
    // 0x452790: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x452790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x452794: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x452794u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x452798: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x452798u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x45279c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4527a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4527a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4527a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4527a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4527a8: 0x2473021  addu        $a2, $s2, $a3
    ctx->pc = 0x4527a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x4527ac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4527acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4527b0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x4527b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4527b4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4527b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x4527b8: 0x8cc20140  lw          $v0, 0x140($a2)
    ctx->pc = 0x4527b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
    // 0x4527bc: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x4527bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x4527c0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4527C0u;
    {
        const bool branch_taken_0x4527c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4527C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4527C0u;
        // 0x4527c4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4527c0) {
            ctx->pc = 0x4527DCu;
            goto label_4527dc;
        }
    }
    ctx->pc = 0x4527C8u;
    // 0x4527c8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4527c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4527cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4527ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4527d0: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x4527d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x4527d4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x4527d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x4527d8: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x4527d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_4527dc:
    // 0x4527dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4527dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4527e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4527E0u;
    {
        const bool branch_taken_0x4527e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4527E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4527E0u;
        // 0x4527e4: 0x2471021  addu        $v0, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4527e0) {
            ctx->pc = 0x4527F4u;
            goto label_4527f4;
        }
    }
    ctx->pc = 0x4527E8u;
    // 0x4527e8: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x4527e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x4527ec: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x4527ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x4527f0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x4527f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_4527f4:
    // 0x4527f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4527f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4527f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4527F8u;
    {
        const bool branch_taken_0x4527f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4527FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4527F8u;
        // 0x4527fc: 0x2471021  addu        $v0, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4527f8) {
            ctx->pc = 0x452810u;
            goto label_452810;
        }
    }
    ctx->pc = 0x452800u;
    // 0x452800: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x452800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x452804: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x452804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x452808: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x452808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x45280c: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x45280cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_452810:
    // 0x452810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x452810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452814: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x452814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x452818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x452818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45281c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x45281cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452824: 0x3e00008  jr          $ra
    ctx->pc = 0x452824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452824u;
        // 0x452828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45282Cu;
    // 0x45282c: 0x0  nop
    ctx->pc = 0x45282cu;
    // NOP
    ctx->pc = 0x452830u;
}
