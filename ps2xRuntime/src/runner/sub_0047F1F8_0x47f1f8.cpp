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

// Function: sub_0047F1F8
// Address: 0x47f1f8 - 0x47f2a8
void sub_0047F1F8_0x47f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F1F8_0x47f1f8");
#endif

    switch (ctx->pc) {
        case 0x47f1f8u: goto label_47f1f8;
        case 0x47f1fcu: goto label_47f1fc;
        case 0x47f200u: goto label_47f200;
        case 0x47f204u: goto label_47f204;
        case 0x47f208u: goto label_47f208;
        case 0x47f20cu: goto label_47f20c;
        case 0x47f210u: goto label_47f210;
        case 0x47f214u: goto label_47f214;
        case 0x47f218u: goto label_47f218;
        case 0x47f21cu: goto label_47f21c;
        case 0x47f220u: goto label_47f220;
        case 0x47f224u: goto label_47f224;
        case 0x47f228u: goto label_47f228;
        case 0x47f22cu: goto label_47f22c;
        case 0x47f230u: goto label_47f230;
        case 0x47f234u: goto label_47f234;
        case 0x47f238u: goto label_47f238;
        case 0x47f23cu: goto label_47f23c;
        case 0x47f240u: goto label_47f240;
        case 0x47f244u: goto label_47f244;
        case 0x47f248u: goto label_47f248;
        case 0x47f24cu: goto label_47f24c;
        case 0x47f250u: goto label_47f250;
        case 0x47f254u: goto label_47f254;
        case 0x47f258u: goto label_47f258;
        case 0x47f25cu: goto label_47f25c;
        case 0x47f260u: goto label_47f260;
        case 0x47f264u: goto label_47f264;
        case 0x47f268u: goto label_47f268;
        case 0x47f26cu: goto label_47f26c;
        case 0x47f270u: goto label_47f270;
        case 0x47f274u: goto label_47f274;
        case 0x47f278u: goto label_47f278;
        case 0x47f27cu: goto label_47f27c;
        case 0x47f280u: goto label_47f280;
        case 0x47f284u: goto label_47f284;
        case 0x47f288u: goto label_47f288;
        case 0x47f28cu: goto label_47f28c;
        case 0x47f290u: goto label_47f290;
        case 0x47f294u: goto label_47f294;
        case 0x47f298u: goto label_47f298;
        case 0x47f29cu: goto label_47f29c;
        case 0x47f2a0u: goto label_47f2a0;
        case 0x47f2a4u: goto label_47f2a4;
        default: break;
    }

    ctx->pc = 0x47f1f8u;

label_47f1f8:
    // 0x47f1f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47f1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47f1fc:
    // 0x47f1fc: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x47f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
label_47f200:
    // 0x47f200: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x47f200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_47f204:
    // 0x47f204: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47f204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47f208:
    // 0x47f208: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_47f20c:
    // 0x47f20c: 0x2454ad18  addiu       $s4, $v0, -0x52E8
    ctx->pc = 0x47f20cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47f210:
    // 0x47f210: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47f210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_47f214:
    // 0x47f214: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x47f214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_47f218:
    // 0x47f218: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47f21c:
    // 0x47f21c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47f21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f220:
    // 0x47f220: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x47f220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_47f224:
    // 0x47f224: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x47f224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47f228:
    // 0x47f228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47f228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47f22c:
    // 0x47f22c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x47f22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_47f230:
    // 0x47f230: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x47f230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47f234:
    // 0x47f234: 0x34a50404  ori         $a1, $a1, 0x404
    ctx->pc = 0x47f234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
label_47f238:
    // 0x47f238: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x47f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_47f23c:
    // 0x47f23c: 0x40f809  jalr        $v0
label_47f240:
    if (ctx->pc == 0x47F240u) {
        ctx->pc = 0x47F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F23Cu;
        // 0x47f240: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F244u;
        goto label_47f244;
    }
    ctx->pc = 0x47F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F244u);
        ctx->pc = 0x47F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F23Cu;
        // 0x47f240: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F23Cu, 0x47F244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F244u;
label_47f244:
    // 0x47f244: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x47f244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f248:
    // 0x47f248: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47f248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f24c:
    // 0x47f24c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x47f24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47f250:
    // 0x47f250: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x47f250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f254:
    // 0x47f254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47f254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47f258:
    // 0x47f258: 0xc11fabe  jal         func_47EAF8
label_47f25c:
    if (ctx->pc == 0x47F25Cu) {
        ctx->pc = 0x47F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F258u;
        // 0x47f25c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F260u;
        goto label_47f260;
    }
    ctx->pc = 0x47F258u;
    SET_GPR_U32(ctx, 31, 0x47F260u);
    ctx->pc = 0x47F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F258u;
    // 0x47f25c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EAF8u, 0x47F258u, 0x47F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F260u;
label_47f260:
    // 0x47f260: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_47f264:
    if (ctx->pc == 0x47F264u) {
        ctx->pc = 0x47F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F260u;
        // 0x47f264: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F268u;
        goto label_47f268;
    }
    ctx->pc = 0x47F260u;
    {
        const bool branch_taken_0x47f260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F260u;
        // 0x47f264: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f260) {
            ctx->pc = 0x47F288u;
            goto label_47f288;
        }
    }
    ctx->pc = 0x47F268u;
label_47f268:
    // 0x47f268: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x47f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
label_47f26c:
    // 0x47f26c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47f26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47f270:
    // 0x47f270: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x47f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_47f274:
    // 0x47f274: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47f274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f278:
    // 0x47f278: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x47f278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_47f27c:
    // 0x47f27c: 0x40f809  jalr        $v0
label_47f280:
    if (ctx->pc == 0x47F280u) {
        ctx->pc = 0x47F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F27Cu;
        // 0x47f280: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F284u;
        goto label_47f284;
    }
    ctx->pc = 0x47F27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F284u);
        ctx->pc = 0x47F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F27Cu;
        // 0x47f280: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F27Cu, 0x47F284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F284u;
label_47f284:
    // 0x47f284: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47f284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47f288:
    // 0x47f288: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x47f288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47f28c:
    // 0x47f28c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47f28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47f290:
    // 0x47f290: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47f290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f294:
    // 0x47f294: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x47f294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f298:
    // 0x47f298: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x47f298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f29c:
    // 0x47f29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47f29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47f2a0:
    // 0x47f2a0: 0x3e00008  jr          $ra
label_47f2a4:
    if (ctx->pc == 0x47F2A4u) {
        ctx->pc = 0x47F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2A0u;
        // 0x47f2a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F2A8u;
        goto label_fallthrough_0x47f2a0;
    }
    ctx->pc = 0x47F2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F2A0u;
        // 0x47f2a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47f2a0:
    ctx->pc = 0x47F2A8u;
}
