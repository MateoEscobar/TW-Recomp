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

// Function: sub_00449238
// Address: 0x449238 - 0x449568
void sub_00449238_0x449238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449238_0x449238");
#endif

    switch (ctx->pc) {
        case 0x44927cu: goto label_44927c;
        case 0x449288u: goto label_449288;
        case 0x4492bcu: goto label_4492bc;
        case 0x449308u: goto label_449308;
        case 0x44932cu: goto label_44932c;
        case 0x4493a0u: goto label_4493a0;
        case 0x4493d0u: goto label_4493d0;
        case 0x449404u: goto label_449404;
        case 0x44942cu: goto label_44942c;
        case 0x449458u: goto label_449458;
        case 0x449490u: goto label_449490;
        case 0x4494bcu: goto label_4494bc;
        case 0x4494e8u: goto label_4494e8;
        case 0x449514u: goto label_449514;
        default: break;
    }

    ctx->pc = 0x449238u;

    // 0x449238: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x449238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x44923c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x44923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x449240: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x449240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x449244: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x449244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x449248: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x449248u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44924c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44924cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449250: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x449250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x449254: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x449254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x449258: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x449258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x44925c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x44925cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449260: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x449260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x449264: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x449264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x449268: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x449268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x44926c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x44926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x449270: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x449270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x449274: 0xc112e2e  jal         func_44B8B8
    ctx->pc = 0x449274u;
    SET_GPR_U32(ctx, 31, 0x44927Cu);
    ctx->pc = 0x449278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449274u;
    // 0x449278: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B8B8u, 0x449274u, 0x44927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44927Cu;
label_44927c:
    // 0x44927c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x44927Cu;
    {
        const bool branch_taken_0x44927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44927Cu;
        // 0x449280: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44927c) {
            ctx->pc = 0x449540u;
            goto label_449540;
        }
    }
    ctx->pc = 0x449284u;
    // 0x449284: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x449284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_449288:
    // 0x449288: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x449288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44928c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x44928cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x449290: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x449290u;
    {
        const bool branch_taken_0x449290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449290) {
            ctx->pc = 0x449294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449290u;
            // 0x449294: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4492A0u;
            goto label_4492a0;
        }
    }
    ctx->pc = 0x449298u;
    // 0x449298: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x449298u;
    {
        const bool branch_taken_0x449298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449298u;
        // 0x44929c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449298) {
            ctx->pc = 0x44953Cu;
            goto label_44953c;
        }
    }
    ctx->pc = 0x4492A0u;
label_4492a0:
    // 0x4492a0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x4492a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x4492a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4492a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4492a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4492a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4492ac: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x4492acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4492b0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x4492b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4492b4: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x4492B4u;
    SET_GPR_U32(ctx, 31, 0x4492BCu);
    ctx->pc = 0x4492B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4492B4u;
    // 0x4492b8: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x4492B4u, 0x4492BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4492BCu;
label_4492bc:
    // 0x4492bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4492bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4492c0: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x4492c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x4492c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4492c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x10000000
    // 0x4492c8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x4492C8u;
    {
        const bool branch_taken_0x4492c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4492CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4492C8u;
        // 0x4492cc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4492c8) {
            ctx->pc = 0x449354u;
            goto label_449354;
        }
    }
    ctx->pc = 0x4492D0u;
    // 0x4492d0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x4492d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x4492d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4492d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x4492d8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x4492d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x4492dc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x4492DCu;
    {
        const bool branch_taken_0x4492dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4492E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4492DCu;
        // 0x4492e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4492dc) {
            ctx->pc = 0x449358u;
            goto label_449358;
        }
    }
    ctx->pc = 0x4492E4u;
    // 0x4492e4: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x4492e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x4492e8: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x4492e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x4492ec: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x4492ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x4492f0: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x4492f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x4492f4: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x4492f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x4492f8: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x4492f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x4492fc: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x4492fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x449300: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x449300u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x449304: 0x0  nop
    ctx->pc = 0x449304u;
    // NOP
label_449308:
    // 0x449308: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x449308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x44930c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44930Cu;
    {
        const bool branch_taken_0x44930c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44930c) {
            ctx->pc = 0x449310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44930Cu;
            // 0x449310: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449330u;
            goto label_449330;
        }
    }
    ctx->pc = 0x449314u;
    // 0x449314: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x449314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x449318: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x449318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x44931c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44931Cu;
    {
        const bool branch_taken_0x44931c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44931c) {
            ctx->pc = 0x449320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44931Cu;
            // 0x449320: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449330u;
            goto label_449330;
        }
    }
    ctx->pc = 0x449324u;
    // 0x449324: 0xc1119a0  jal         func_446680
    ctx->pc = 0x449324u;
    SET_GPR_U32(ctx, 31, 0x44932Cu);
    ctx->pc = 0x449328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449324u;
    // 0x449328: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446680u, 0x449324u, 0x44932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44932Cu;
label_44932c:
    // 0x44932c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x44932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_449330:
    // 0x449330: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x449330u;
    {
        const bool branch_taken_0x449330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449330) {
            ctx->pc = 0x449398u;
            goto label_449398;
        }
    }
    ctx->pc = 0x449338u;
    // 0x449338: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x449338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44933c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44933Cu;
    {
        const bool branch_taken_0x44933c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44933Cu;
        // 0x449340: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44933c) {
            ctx->pc = 0x449358u;
            goto label_449358;
        }
    }
    ctx->pc = 0x449344u;
    // 0x449344: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x449344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x449348: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x449348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x44934c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x44934Cu;
    {
        const bool branch_taken_0x44934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44934c) {
            ctx->pc = 0x449308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449308;
        }
    }
    ctx->pc = 0x449354u;
label_449354:
    // 0x449354: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x449354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_449358:
    // 0x449358: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x449358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44935c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x44935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x449360: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x449360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x449364: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x449364u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x449368: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x449368u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x44936c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x44936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x449370: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x449370u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x449374: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x449374u;
    {
        const bool branch_taken_0x449374 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x449378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449374u;
        // 0x449378: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449374) {
            ctx->pc = 0x4493A8u;
            goto label_4493a8;
        }
    }
    ctx->pc = 0x44937Cu;
    // 0x44937c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x44937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x449380: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x449380u;
    {
        const bool branch_taken_0x449380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x449384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449380u;
        // 0x449384: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449380) {
            ctx->pc = 0x449390u;
            goto label_449390;
        }
    }
    ctx->pc = 0x449388u;
    // 0x449388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x449388u;
    {
        const bool branch_taken_0x449388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449388u;
        // 0x44938c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449388) {
            ctx->pc = 0x4493ACu;
            goto label_4493ac;
        }
    }
    ctx->pc = 0x449390u;
label_449390:
    // 0x449390: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x449390u;
    {
        const bool branch_taken_0x449390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449390u;
        // 0x449394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449390) {
            ctx->pc = 0x4493ACu;
            goto label_4493ac;
        }
    }
    ctx->pc = 0x449398u;
label_449398:
    // 0x449398: 0xc111f1c  jal         func_447C70
    ctx->pc = 0x449398u;
    SET_GPR_U32(ctx, 31, 0x4493A0u);
    ctx->pc = 0x447C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447C70u, 0x449398u, 0x4493A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4493A0u;
label_4493a0:
    // 0x4493a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4493A0u;
    {
        const bool branch_taken_0x4493a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4493A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493A0u;
        // 0x4493a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4493a0) {
            ctx->pc = 0x4493D4u;
            goto label_4493d4;
        }
    }
    ctx->pc = 0x4493A8u;
label_4493a8:
    // 0x4493a8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4493a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4493ac:
    // 0x4493ac: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x4493acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x4493b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4493b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4493b4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x4493b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x4493b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4493b8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10000000
    // 0x4493bc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x4493bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x4493c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4493C0u;
    {
        const bool branch_taken_0x4493c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4493C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493C0u;
        // 0x4493c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4493c0) {
            ctx->pc = 0x4493D0u;
            goto label_4493d0;
        }
    }
    ctx->pc = 0x4493C8u;
    // 0x4493c8: 0xc111f44  jal         func_447D10
    ctx->pc = 0x4493C8u;
    SET_GPR_U32(ctx, 31, 0x4493D0u);
    ctx->pc = 0x4493CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4493C8u;
    // 0x4493cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447D10u, 0x4493C8u, 0x4493D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4493D0u;
label_4493d0:
    // 0x4493d0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4493d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4493d4:
    // 0x4493d4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4493D4u;
    {
        const bool branch_taken_0x4493d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4493d4) {
            ctx->pc = 0x4493D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4493D4u;
            // 0x4493d8: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4493F0u;
            goto label_4493f0;
        }
    }
    ctx->pc = 0x4493DCu;
    // 0x4493dc: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x4493dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x4493e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4493e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4493e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4493e8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x4493E8u;
    {
        const bool branch_taken_0x4493e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4493ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493E8u;
        // 0x4493ec: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4493e8) {
            ctx->pc = 0x44953Cu;
            goto label_44953c;
        }
    }
    ctx->pc = 0x4493F0u;
label_4493f0:
    // 0x4493f0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4493F0u;
    {
        const bool branch_taken_0x4493f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4493F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4493F0u;
        // 0x4493f4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4493f0) {
            ctx->pc = 0x44943Cu;
            goto label_44943c;
        }
    }
    ctx->pc = 0x4493F8u;
    // 0x4493f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4493f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4493fc: 0xc112974  jal         func_44A5D0
    ctx->pc = 0x4493FCu;
    SET_GPR_U32(ctx, 31, 0x449404u);
    ctx->pc = 0x449400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4493FCu;
    // 0x449400: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x4493FCu, 0x449404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449404u;
label_449404:
    // 0x449404: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x449404u;
    {
        const bool branch_taken_0x449404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449404) {
            ctx->pc = 0x449408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449404u;
            // 0x449408: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44941Cu;
            goto label_44941c;
        }
    }
    ctx->pc = 0x44940Cu;
    // 0x44940c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x44940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x449410: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x449410u;
    {
        const bool branch_taken_0x449410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449410) {
            ctx->pc = 0x449424u;
            goto label_449424;
        }
    }
    ctx->pc = 0x449418u;
    // 0x449418: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x449418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_44941c:
    // 0x44941c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x44941Cu;
    {
        const bool branch_taken_0x44941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44941Cu;
        // 0x449420: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44941c) {
            ctx->pc = 0x44953Cu;
            goto label_44953c;
        }
    }
    ctx->pc = 0x449424u;
label_449424:
    // 0x449424: 0xc112822  jal         func_44A088
    ctx->pc = 0x449424u;
    SET_GPR_U32(ctx, 31, 0x44942Cu);
    ctx->pc = 0x449428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449424u;
    // 0x449428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A088u, 0x449424u, 0x44942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44942Cu;
label_44942c:
    // 0x44942c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x44942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x449430: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x449430u;
    {
        const bool branch_taken_0x449430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x449434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449430u;
        // 0x449434: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449430) {
            ctx->pc = 0x449498u;
            goto label_449498;
        }
    }
    ctx->pc = 0x449438u;
    // 0x449438: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x449438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_44943c:
    // 0x44943c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x44943cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x449440: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x449440u;
    {
        const bool branch_taken_0x449440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449440u;
        // 0x449444: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449440) {
            ctx->pc = 0x449460u;
            goto label_449460;
        }
    }
    ctx->pc = 0x449448u;
    // 0x449448: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x449448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x44944c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449450: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x449450u;
    SET_GPR_U32(ctx, 31, 0x449458u);
    ctx->pc = 0x449454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449450u;
    // 0x449454: 0x24a5e270  addiu       $a1, $a1, -0x1D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x449450u, 0x449458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449458u;
label_449458:
    // 0x449458: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x449458u;
    {
        const bool branch_taken_0x449458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449458u;
        // 0x44945c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449458) {
            ctx->pc = 0x44953Cu;
            goto label_44953c;
        }
    }
    ctx->pc = 0x449460u;
label_449460:
    // 0x449460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x449460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449464: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x449464u;
    {
        const bool branch_taken_0x449464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x449468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449464u;
        // 0x449468: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449464) {
            ctx->pc = 0x4494A4u;
            goto label_4494a4;
        }
    }
    ctx->pc = 0x44946Cu;
    // 0x44946c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x44946cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x449470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449474: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x449474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x449478: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x449478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x44947c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x44947cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x449480: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x449480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449484: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x449484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449488: 0xc1126cc  jal         func_449B30
    ctx->pc = 0x449488u;
    SET_GPR_U32(ctx, 31, 0x449490u);
    ctx->pc = 0x44948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449488u;
    // 0x44948c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449B30u, 0x449488u, 0x449490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449490u;
label_449490:
    // 0x449490: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x449490u;
    {
        const bool branch_taken_0x449490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449490u;
        // 0x449494: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449490) {
            ctx->pc = 0x4494C8u;
            goto label_4494c8;
        }
    }
    ctx->pc = 0x449498u;
label_449498:
    // 0x449498: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x449498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x44949c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x44949Cu;
    {
        const bool branch_taken_0x44949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4494A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44949Cu;
        // 0x4494a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44949c) {
            ctx->pc = 0x44953Cu;
            goto label_44953c;
        }
    }
    ctx->pc = 0x4494A4u;
label_4494a4:
    // 0x4494a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4494a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4494a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4494a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4494ac: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x4494acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x4494b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4494b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4494b4: 0xc1129ce  jal         func_44A738
    ctx->pc = 0x4494B4u;
    SET_GPR_U32(ctx, 31, 0x4494BCu);
    ctx->pc = 0x4494B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4494B4u;
    // 0x4494b8: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A738u, 0x4494B4u, 0x4494BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4494BCu;
label_4494bc:
    // 0x4494bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4494BCu;
    {
        const bool branch_taken_0x4494bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4494C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494BCu;
        // 0x4494c0: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494bc) {
            ctx->pc = 0x4494F0u;
            goto label_4494f0;
        }
    }
    ctx->pc = 0x4494C4u;
    // 0x4494c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4494c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4494c8:
    // 0x4494c8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x4494c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4494cc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x4494ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x4494d0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x4494d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4494d4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x4494d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4494d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4494d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4494dc: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x4494dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4494e0: 0xc1121c0  jal         func_448700
    ctx->pc = 0x4494E0u;
    SET_GPR_U32(ctx, 31, 0x4494E8u);
    ctx->pc = 0x4494E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4494E0u;
    // 0x4494e4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448700u, 0x4494E0u, 0x4494E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4494E8u;
label_4494e8:
    // 0x4494e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4494E8u;
    {
        const bool branch_taken_0x4494e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4494ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494E8u;
        // 0x4494ec: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494e8) {
            ctx->pc = 0x4494FCu;
            goto label_4494fc;
        }
    }
    ctx->pc = 0x4494F0u;
label_4494f0:
    // 0x4494f0: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x4494f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x4494f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4494F4u;
    {
        const bool branch_taken_0x4494f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4494F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4494F4u;
        // 0x4494f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494f4) {
            ctx->pc = 0x44953Cu;
            goto label_44953c;
        }
    }
    ctx->pc = 0x4494FCu;
label_4494fc:
    // 0x4494fc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4494FCu;
    {
        const bool branch_taken_0x4494fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4494fc) {
            ctx->pc = 0x449500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4494FCu;
            // 0x449500: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44951Cu;
            goto label_44951c;
        }
    }
    ctx->pc = 0x449504u;
    // 0x449504: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x449504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x449508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44950c: 0xc112376  jal         func_448DD8
    ctx->pc = 0x44950Cu;
    SET_GPR_U32(ctx, 31, 0x449514u);
    ctx->pc = 0x449510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44950Cu;
    // 0x449510: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x448DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448DD8u, 0x44950Cu, 0x449514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449514u;
label_449514:
    // 0x449514: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x449514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x449518: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x449518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_44951c:
    // 0x44951c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x44951cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x449520: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x449520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x449524: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x449524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x449528: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x449528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x44952c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x44952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x449530: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x449530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x449534: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x449534u;
    {
        const bool branch_taken_0x449534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449534u;
        // 0x449538: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449534) {
            ctx->pc = 0x449288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449288;
        }
    }
    ctx->pc = 0x44953Cu;
label_44953c:
    // 0x44953c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x44953cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_449540:
    // 0x449540: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x449540u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x449544: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x449544u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x449548: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x449548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x44954c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x44954cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x449550: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x449550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x449554: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x449554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x449558: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x449558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44955c: 0x3e00008  jr          $ra
    ctx->pc = 0x44955Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44955Cu;
        // 0x449560: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44955Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449564u;
    // 0x449564: 0x0  nop
    ctx->pc = 0x449564u;
    // NOP
    ctx->pc = 0x449568u;
}
