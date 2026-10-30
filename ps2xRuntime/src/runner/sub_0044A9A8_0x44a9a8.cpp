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

// Function: sub_0044A9A8
// Address: 0x44a9a8 - 0x44b818
void sub_0044A9A8_0x44a9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A9A8_0x44a9a8");
#endif

    switch (ctx->pc) {
        case 0x44aa18u: goto label_44aa18;
        case 0x44aaa4u: goto label_44aaa4;
        case 0x44ab28u: goto label_44ab28;
        case 0x44ab4cu: goto label_44ab4c;
        case 0x44aba0u: goto label_44aba0;
        case 0x44abc0u: goto label_44abc0;
        case 0x44abc8u: goto label_44abc8;
        case 0x44ac38u: goto label_44ac38;
        case 0x44ac7cu: goto label_44ac7c;
        case 0x44acf0u: goto label_44acf0;
        case 0x44ad18u: goto label_44ad18;
        case 0x44ad38u: goto label_44ad38;
        case 0x44adc0u: goto label_44adc0;
        case 0x44adecu: goto label_44adec;
        case 0x44ae70u: goto label_44ae70;
        case 0x44ae98u: goto label_44ae98;
        case 0x44aea0u: goto label_44aea0;
        case 0x44af28u: goto label_44af28;
        case 0x44af8cu: goto label_44af8c;
        case 0x44b020u: goto label_44b020;
        case 0x44b048u: goto label_44b048;
        case 0x44b080u: goto label_44b080;
        case 0x44b120u: goto label_44b120;
        case 0x44b144u: goto label_44b144;
        case 0x44b1c0u: goto label_44b1c0;
        case 0x44b1e0u: goto label_44b1e0;
        case 0x44b1e8u: goto label_44b1e8;
        case 0x44b270u: goto label_44b270;
        case 0x44b2b4u: goto label_44b2b4;
        case 0x44b350u: goto label_44b350;
        case 0x44b378u: goto label_44b378;
        case 0x44b398u: goto label_44b398;
        case 0x44b438u: goto label_44b438;
        case 0x44b464u: goto label_44b464;
        case 0x44b510u: goto label_44b510;
        case 0x44b538u: goto label_44b538;
        case 0x44b540u: goto label_44b540;
        case 0x44b5e0u: goto label_44b5e0;
        case 0x44b644u: goto label_44b644;
        case 0x44b700u: goto label_44b700;
        case 0x44b728u: goto label_44b728;
        case 0x44b760u: goto label_44b760;
        default: break;
    }

    ctx->pc = 0x44a9a8u;

    // 0x44a9a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44a9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x44a9ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44a9b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x44a9b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44a9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a9b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44a9bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44a9c0: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x44a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x44a9c4: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x44A9C4u;
    {
        const bool branch_taken_0x44a9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A9C4u;
        // 0x44a9c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a9c4) {
            ctx->pc = 0x44AB10u;
            goto label_44ab10;
        }
    }
    ctx->pc = 0x44A9CCu;
    // 0x44a9cc: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x44a9ccu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x44a9d0: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x44a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x44a9d4: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x44a9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
    // 0x44a9d8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x44a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x44a9dc: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x44a9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44a9e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44a9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x44a9e4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x44a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x44a9e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x44a9e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a9ec: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x44a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x44a9f0: 0x26438a00  addiu       $v1, $s2, -0x7600
    ctx->pc = 0x44a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937088));
    // 0x44a9f4: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x44a9f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x44a9f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44a9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x44a9fc: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x44A9FCu;
    {
        const bool branch_taken_0x44a9fc = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x44AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A9FCu;
        // 0x44aa00: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a9fc) {
            ctx->pc = 0x44AA98u;
            goto label_44aa98;
        }
    }
    ctx->pc = 0x44AA04u;
    // 0x44aa04: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x44aa04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x44aa08: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x44aa08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x44aa0c: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x44aa0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x44aa10: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x44aa10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x44aa14: 0x0  nop
    ctx->pc = 0x44aa14u;
    // NOP
label_44aa18:
    // 0x44aa18: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x44aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x44aa1c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x44aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x44aa20: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x44aa20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44aa24: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x44aa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x44aa28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x44aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44aa2c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x44aa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x44aa30: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x44aa30u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x44aa34: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x44aa34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x44aa38: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x44aa38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x44aa3c: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x44aa3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x44aa40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x44aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x44aa44: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x44aa44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x44aa48: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x44aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x44aa4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x44aa4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x44aa50: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x44aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x44aa54: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x44aa54u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x44aa58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44aa5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44aa60: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x44aa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x44aa64: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x44aa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x44aa68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x44aa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x44aa6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x44aa70: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x44aa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x44aa74: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x44aa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x44aa78: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x44aa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x44aa7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x44aa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x44aa80: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x44aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x44aa84: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x44aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x44aa88: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x44AA88u;
    {
        const bool branch_taken_0x44aa88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AA88u;
        // 0x44aa8c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa88) {
            ctx->pc = 0x44AA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aa18;
        }
    }
    ctx->pc = 0x44AA90u;
    // 0x44aa90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x44AA90u;
    {
        const bool branch_taken_0x44aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44aa90) {
            ctx->pc = 0x44AA9Cu;
            goto label_44aa9c;
        }
    }
    ctx->pc = 0x44AA98u;
label_44aa98:
    // 0x44aa98: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x44aa98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_44aa9c:
    // 0x44aa9c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x44AA9Cu;
    SET_GPR_U32(ctx, 31, 0x44AAA4u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x44AA9Cu, 0x44AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44AAA4u;
label_44aaa4:
    // 0x44aaa4: 0xf  sync
    ctx->pc = 0x44aaa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x44aaa8: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x44aaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x44aaac: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x44aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x44aab0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x44aab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x44aab4: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x44aab4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x44aab8: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x44aab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44aabc: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x44aabcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x44aac0: 0x264a8a00  addiu       $t2, $s2, -0x7600
    ctx->pc = 0x44aac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937088));
    // 0x44aac4: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x44aac4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x44aac8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x44aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44aacc: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x44aaccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x44aad0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x44aad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x44aad4: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x44aad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x44aad8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x44aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44aadc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x44aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x44aae0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x44aae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x44aae4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x44aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x44aae8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x44aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x44aaec: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x44aaecu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x44aaf0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x44aaf0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x44aaf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44AAF4u;
    {
        const bool branch_taken_0x44aaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AAF4u;
        // 0x44aaf8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aaf4) {
            ctx->pc = 0x44AB10u;
            goto label_44ab10;
        }
    }
    ctx->pc = 0x44AAFCu;
    // 0x44aafc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44aafcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44ab00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44ab00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ab04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44ab04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ab08: 0x8110cc4  j           func_443310
    ctx->pc = 0x44AB08u;
    ctx->pc = 0x44AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44AB08u;
    // 0x44ab0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    sub_00443310_0x443310(rdram, ctx, runtime); return;
    ctx->pc = 0x44AB10u;
label_44ab10:
    // 0x44ab10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44ab10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44ab14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44ab14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ab18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44ab18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ab1c: 0x3e00008  jr          $ra
    ctx->pc = 0x44AB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB1Cu;
        // 0x44ab20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44AB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44AB24u;
    // 0x44ab24: 0x0  nop
    ctx->pc = 0x44ab24u;
    // NOP
label_44ab28:
    // 0x44ab28: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44ab28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ab2c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44ab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44ab30: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44ab30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44ab34: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x44ab34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44ab38: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x44ab38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44ab3c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44ab3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44ab40: 0x5180000  mtsab       $t0, 0x0
    ctx->pc = 0x44ab40u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44ab44: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x44ab44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x44ab48: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x44ab48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44ab4c:
    // 0x44ab4c: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x44ab4cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44ab50: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x44ab50u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44ab54: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44ab54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44ab58: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44ab5c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x44ab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x44ab60: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x44ab60u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44ab64: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44ab64u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44ab68: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x44ab68u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44ab6c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x44ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x44ab70: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x44ab70u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x44ab74: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x44AB74u;
    {
        const bool branch_taken_0x44ab74 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB74u;
        // 0x44ab78: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab74) {
            ctx->pc = 0x44AB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ab4c;
        }
    }
    ctx->pc = 0x44AB7Cu;
    // 0x44ab7c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44ab80: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x44ab80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x44ab84: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44ab84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44ab88: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x44ab88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x44ab8c: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x44AB8Cu;
    {
        const bool branch_taken_0x44ab8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AB8Cu;
        // 0x44ab90: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ab8c) {
            ctx->pc = 0x44AB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ab4c;
        }
    }
    ctx->pc = 0x44AB94u;
    // 0x44ab94: 0x3e00008  jr          $ra
    ctx->pc = 0x44AB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44AB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44AB9Cu;
    // 0x44ab9c: 0x0  nop
    ctx->pc = 0x44ab9cu;
    // NOP
label_44aba0:
    // 0x44aba0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x44aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44aba4: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x44aba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44aba8: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x44aba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44abac: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x44abacu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44abb0: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x44abb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44abb4: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x44abb4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x44abb8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x44abb8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44abbc: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x44abbcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44abc0:
    // 0x44abc0: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x44abc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44abc4: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x44abc4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44abc8:
    // 0x44abc8: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x44abc8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44abcc: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x44abccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x44abd0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44abd0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44abd4: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x44abd4u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44abd8: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x44abd8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x44abdc: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x44abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x44abe0: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x44abe0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x44abe4: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x44abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x44abe8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x44abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x44abec: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x44ABECu;
    {
        const bool branch_taken_0x44abec = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x44ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ABECu;
        // 0x44abf0: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44abec) {
            ctx->pc = 0x44ABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44abc8;
        }
    }
    ctx->pc = 0x44ABF4u;
    // 0x44abf4: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x44abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x44abf8: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x44abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x44abfc: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x44abfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44ac00: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x44ac00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x44ac04: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x44AC04u;
    {
        const bool branch_taken_0x44ac04 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC04u;
        // 0x44ac08: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac04) {
            ctx->pc = 0x44ABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44abc8;
        }
    }
    ctx->pc = 0x44AC0Cu;
    // 0x44ac0c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x44ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ac10: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x44ac10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44ac14: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x44ac14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44ac18: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44ac18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44ac1c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x44ac1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x44ac20: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x44ac20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x44ac24: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x44AC24u;
    {
        const bool branch_taken_0x44ac24 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC24u;
        // 0x44ac28: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac24) {
            ctx->pc = 0x44ABC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44abc0;
        }
    }
    ctx->pc = 0x44AC2Cu;
    // 0x44ac2c: 0x3e00008  jr          $ra
    ctx->pc = 0x44AC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44AC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44AC34u;
    // 0x44ac34: 0x0  nop
    ctx->pc = 0x44ac34u;
    // NOP
label_44ac38:
    // 0x44ac38: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44ac38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ac3c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44ac40: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44ac44: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x44ac44u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44ac48: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44ac48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44ac4c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44ac4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44ac50: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44ac50u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44ac54: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44ac54u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44ac58: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x44ac58u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44ac5c: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x44ac5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x44ac60: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x44ac60u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44ac64: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44ac64u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44ac68: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x44ac68u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44ac6c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44ac6cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44ac70: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44ac70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44ac74: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x44AC74u;
    {
        const bool branch_taken_0x44ac74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AC74u;
        // 0x44ac78: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ac74) {
            ctx->pc = 0x44ACCCu;
            goto label_44accc;
        }
    }
    ctx->pc = 0x44AC7Cu;
label_44ac7c:
    // 0x44ac7c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x44ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x44ac80: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x44ac80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x44ac84: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x44ac84u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44ac88: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x44ac88u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44ac8c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x44ac8cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44ac90: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x44ac90u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44ac94: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44ac94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44ac98: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x44ac98u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44ac9c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x44ac9cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x44aca0: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x44aca0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x44aca4: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x44aca4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44aca8: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x44aca8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x44acac: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x44acacu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x44acb0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x44acb0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x44acb4: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x44acb4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x44acb8: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x44acb8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x44acbc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x44acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x44acc0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x44acc0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x44acc4: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x44ACC4u;
    {
        const bool branch_taken_0x44acc4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ACC4u;
        // 0x44acc8: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44acc4) {
            ctx->pc = 0x44AC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ac7c;
        }
    }
    ctx->pc = 0x44ACCCu;
label_44accc:
    // 0x44accc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44acd0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x44acd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x44acd4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44acd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44acd8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x44acd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44acdc: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x44ACDCu;
    {
        const bool branch_taken_0x44acdc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ACDCu;
        // 0x44ace0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44acdc) {
            ctx->pc = 0x44AC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ac7c;
        }
    }
    ctx->pc = 0x44ACE4u;
    // 0x44ace4: 0x3e00008  jr          $ra
    ctx->pc = 0x44ACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ACE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44ACECu;
    // 0x44acec: 0x0  nop
    ctx->pc = 0x44acecu;
    // NOP
label_44acf0:
    // 0x44acf0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44acf0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44acf4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44acf8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44acfc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x44acfcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44ad00: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44ad00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44ad04: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44ad04u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44ad08: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44ad08u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44ad0c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x44ad0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ad10: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x44ad10u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x44ad14: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44ad14u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_44ad18:
    // 0x44ad18: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44ad18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44ad1c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44ad1cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44ad20: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44ad20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44ad24: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44ad24u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44ad28: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44ad28u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44ad2c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x44ad2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x44ad30: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x44AD30u;
    {
        const bool branch_taken_0x44ad30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD30u;
        // 0x44ad34: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad30) {
            ctx->pc = 0x44AD74u;
            goto label_44ad74;
        }
    }
    ctx->pc = 0x44AD38u;
label_44ad38:
    // 0x44ad38: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44ad3c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x44ad3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x44ad40: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44ad40u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44ad44: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44ad44u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44ad48: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44ad48u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44ad4c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44ad4cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44ad50: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x44ad50u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44ad54: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44ad54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44ad58: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x44ad58u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x44ad5c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x44ad5cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44ad60: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x44ad60u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x44ad64: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x44ad64u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44ad68: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x44ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x44ad6c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x44AD6Cu;
    {
        const bool branch_taken_0x44ad6c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD6Cu;
        // 0x44ad70: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad6c) {
            ctx->pc = 0x44AD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ad38;
        }
    }
    ctx->pc = 0x44AD74u;
label_44ad74:
    // 0x44ad74: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x44ad74u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x44ad78: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x44ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x44ad7c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44ad7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44ad80: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x44ad80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x44ad84: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x44ad84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x44ad88: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x44AD88u;
    {
        const bool branch_taken_0x44ad88 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AD88u;
        // 0x44ad8c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad88) {
            ctx->pc = 0x44AD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ad38;
        }
    }
    ctx->pc = 0x44AD90u;
    // 0x44ad90: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44ad90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ad94: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44ad98: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44ad98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44ad9c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x44ad9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x44ada0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x44ada0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x44ada4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x44ada4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x44ada8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x44ada8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x44adac: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x44ADACu;
    {
        const bool branch_taken_0x44adac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ADACu;
        // 0x44adb0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44adac) {
            ctx->pc = 0x44AD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ad18;
        }
    }
    ctx->pc = 0x44ADB4u;
    // 0x44adb4: 0x3e00008  jr          $ra
    ctx->pc = 0x44ADB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ADB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44ADBCu;
    // 0x44adbc: 0x0  nop
    ctx->pc = 0x44adbcu;
    // NOP
label_44adc0:
    // 0x44adc0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44adc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44adc4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44adc8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44adc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44adcc: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x44adccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44add0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44add0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44add4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44add4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44add8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44add8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44addc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44addcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44ade0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x44ade0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ade4: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x44ade4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x44ade8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44ade8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44adec:
    // 0x44adec: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x44adecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44adf0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x44adf0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44adf4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44adf4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44adf8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x44adf8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44adfc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x44adfcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x44ae00: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x44ae00u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44ae04: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44ae04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44ae08: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x44ae08u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44ae0c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44ae0cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44ae10: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x44ae10u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x44ae14: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x44ae14u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x44ae18: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x44ae18u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x44ae1c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x44ae1cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x44ae20: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x44ae20u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x44ae24: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x44ae24u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x44ae28: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x44ae28u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x44ae2c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x44ae2cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x44ae30: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x44ae30u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x44ae34: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x44ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x44ae38: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x44ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x44ae3c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x44ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x44ae40: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x44ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x44ae44: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x44AE44u;
    {
        const bool branch_taken_0x44ae44 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AE44u;
        // 0x44ae48: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ae44) {
            ctx->pc = 0x44ADECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44adec;
        }
    }
    ctx->pc = 0x44AE4Cu;
    // 0x44ae4c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44ae50: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x44ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x44ae54: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44ae54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44ae58: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x44ae58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44ae5c: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x44AE5Cu;
    {
        const bool branch_taken_0x44ae5c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AE5Cu;
        // 0x44ae60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ae5c) {
            ctx->pc = 0x44ADECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44adec;
        }
    }
    ctx->pc = 0x44AE64u;
    // 0x44ae64: 0x3e00008  jr          $ra
    ctx->pc = 0x44AE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44AE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44AE6Cu;
    // 0x44ae6c: 0x0  nop
    ctx->pc = 0x44ae6cu;
    // NOP
label_44ae70:
    // 0x44ae70: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44ae70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44ae74: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44ae78: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44ae7c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x44ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44ae80: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44ae80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44ae84: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44ae84u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44ae88: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44ae88u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44ae8c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x44ae8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ae90: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x44ae90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44ae94: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x44ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_44ae98:
    // 0x44ae98: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44ae98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44ae9c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44ae9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44aea0:
    // 0x44aea0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44aea0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44aea4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44aea4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44aea8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44aea8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44aeac: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44aeacu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44aeb0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44aeb0u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44aeb4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x44aeb4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44aeb8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44aeb8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44aebc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x44aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x44aec0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x44aec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x44aec4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44aec4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44aec8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x44aec8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44aecc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44aeccu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44aed0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x44aed0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44aed4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x44aed4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x44aed8: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x44aed8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44aedc: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x44aedcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x44aee0: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x44AEE0u;
    {
        const bool branch_taken_0x44aee0 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AEE0u;
        // 0x44aee4: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aee0) {
            ctx->pc = 0x44AEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aea0;
        }
    }
    ctx->pc = 0x44AEE8u;
    // 0x44aee8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x44aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x44aeec: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x44aeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x44aef0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44aef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44aef4: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x44aef4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44aef8: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x44AEF8u;
    {
        const bool branch_taken_0x44aef8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AEF8u;
        // 0x44aefc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aef8) {
            ctx->pc = 0x44AEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44aea0;
        }
    }
    ctx->pc = 0x44AF00u;
    // 0x44af00: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44af00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44af04: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44af04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44af08: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44af08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44af0c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x44af0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x44af10: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x44af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x44af14: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x44af14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x44af18: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x44AF18u;
    {
        const bool branch_taken_0x44af18 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x44AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF18u;
        // 0x44af1c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af18) {
            ctx->pc = 0x44AE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44ae98;
        }
    }
    ctx->pc = 0x44AF20u;
    // 0x44af20: 0x3e00008  jr          $ra
    ctx->pc = 0x44AF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44AF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44AF28u;
label_44af28:
    // 0x44af28: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44af28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44af2c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44af30: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44af30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44af34: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x44af34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44af38: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44af38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44af3c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44af3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44af40: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44af40u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44af44: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44af44u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44af48: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x44af48u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x44af4c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x44af4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44af50: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x44af50u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44af54: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x44af54u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44af58: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44af58u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44af5c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x44af5cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44af60: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x44af60u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x44af64: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44af64u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44af68: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x44af68u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44af6c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44af6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44af70: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44af70u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44af74: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x44af74u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44af78: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x44af78u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x44af7c: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x44af7cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x44af80: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x44af80u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x44af84: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x44AF84u;
    {
        const bool branch_taken_0x44af84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AF84u;
        // 0x44af88: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af84) {
            ctx->pc = 0x44B000u;
            goto label_44b000;
        }
    }
    ctx->pc = 0x44AF8Cu;
label_44af8c:
    // 0x44af8c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44af90: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x44af90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x44af94: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x44af94u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44af98: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x44af98u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44af9c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44af9cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44afa0: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x44afa0u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44afa4: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x44afa4u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x44afa8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x44afa8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44afac: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44afacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44afb0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x44afb0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44afb4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44afb4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44afb8: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x44afb8u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x44afbc: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x44afbcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x44afc0: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x44afc0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x44afc4: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x44afc4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x44afc8: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x44afc8u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x44afcc: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x44afccu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x44afd0: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x44afd0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x44afd4: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x44afd4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44afd8: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x44afd8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x44afdc: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x44afdcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x44afe0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x44afe0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x44afe4: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x44afe4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x44afe8: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x44afe8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x44afec: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x44afecu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x44aff0: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x44aff0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x44aff4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x44aff4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x44aff8: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x44AFF8u;
    {
        const bool branch_taken_0x44aff8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44AFF8u;
        // 0x44affc: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aff8) {
            ctx->pc = 0x44AF8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44af8c;
        }
    }
    ctx->pc = 0x44B000u;
label_44b000:
    // 0x44b000: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44b000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44b004: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x44b004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x44b008: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b00c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x44b00cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44b010: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x44B010u;
    {
        const bool branch_taken_0x44b010 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B010u;
        // 0x44b014: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b010) {
            ctx->pc = 0x44AF8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44af8c;
        }
    }
    ctx->pc = 0x44B018u;
    // 0x44b018: 0x3e00008  jr          $ra
    ctx->pc = 0x44B018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B020u;
label_44b020:
    // 0x44b020: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b020u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b024: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b028: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b02c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x44b02cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b030: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b030u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b034: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b034u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b038: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b038u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b03c: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x44b03cu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x44b040: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x44b040u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b044: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x44b044u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44b048:
    // 0x44b048: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b04c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44b04cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b050: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44b050u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b054: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44b054u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b058: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b058u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b05c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44b05cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b060: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x44b060u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44b064: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44b064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44b068: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x44b068u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x44b06c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44b06cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b070: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x44b070u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b074: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44b074u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44b078: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x44B078u;
    {
        const bool branch_taken_0x44b078 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B078u;
        // 0x44b07c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b078) {
            ctx->pc = 0x44B0D4u;
            goto label_44b0d4;
        }
    }
    ctx->pc = 0x44B080u;
label_44b080:
    // 0x44b080: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x44b080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x44b084: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44b084u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b088: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44b088u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b08c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44b08cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b090: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b090u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b094: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44b094u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b098: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x44b098u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44b09c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b09cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b0a0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44b0a4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44b0a4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b0a8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x44b0a8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b0ac: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44b0acu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44b0b0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x44b0b0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b0b4: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x44b0b4u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x44b0b8: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x44b0b8u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b0bc: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x44b0bcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x44b0c0: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x44b0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x44b0c4: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x44b0c4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x44b0c8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x44b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x44b0cc: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x44B0CCu;
    {
        const bool branch_taken_0x44b0cc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B0CCu;
        // 0x44b0d0: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b0cc) {
            ctx->pc = 0x44B080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b080;
        }
    }
    ctx->pc = 0x44B0D4u;
label_44b0d4:
    // 0x44b0d4: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x44b0d4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x44b0d8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x44b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x44b0dc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b0e0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x44b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x44b0e4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x44b0e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x44b0e8: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x44B0E8u;
    {
        const bool branch_taken_0x44b0e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B0E8u;
        // 0x44b0ec: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b0e8) {
            ctx->pc = 0x44B080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b080;
        }
    }
    ctx->pc = 0x44B0F0u;
    // 0x44b0f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b0f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b0f4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b0f8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b0fc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x44b0fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x44b100: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x44b100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x44b104: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x44b104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x44b108: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x44b108u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x44b10c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x44B10Cu;
    {
        const bool branch_taken_0x44b10c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B10Cu;
        // 0x44b110: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b10c) {
            ctx->pc = 0x44B048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b048;
        }
    }
    ctx->pc = 0x44B114u;
    // 0x44b114: 0x3e00008  jr          $ra
    ctx->pc = 0x44B114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B11Cu;
    // 0x44b11c: 0x0  nop
    ctx->pc = 0x44b11cu;
    // NOP
label_44b120:
    // 0x44b120: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b120u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b124: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b128: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b12c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x44b12cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b130: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b130u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b134: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b138: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x44b138u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x44b13c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44b13cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44b140: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b140u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_44b144:
    // 0x44b144: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x44b144u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b148: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x44b148u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b14c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x44b14cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44b150: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x44b150u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44b154: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x44b154u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44b158: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x44b158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x44b15c: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x44b15cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x44b160: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x44b160u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x44b164: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x44b164u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x44b168: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b168u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b16c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b16cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b170: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x44b170u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x44b174: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x44b174u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b178: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x44b178u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x44b17c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x44b17cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b180: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x44b180u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x44b184: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x44b184u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x44b188: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b188u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b18c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x44b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x44b190: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x44b190u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x44b194: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x44B194u;
    {
        const bool branch_taken_0x44b194 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B194u;
        // 0x44b198: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b194) {
            ctx->pc = 0x44B144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b144;
        }
    }
    ctx->pc = 0x44B19Cu;
    // 0x44b19c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44b1a0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x44b1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x44b1a4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b1a8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x44b1a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44b1ac: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x44B1ACu;
    {
        const bool branch_taken_0x44b1ac = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B1ACu;
        // 0x44b1b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b1ac) {
            ctx->pc = 0x44B144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b144;
        }
    }
    ctx->pc = 0x44B1B4u;
    // 0x44b1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x44B1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B1BCu;
    // 0x44b1bc: 0x0  nop
    ctx->pc = 0x44b1bcu;
    // NOP
label_44b1c0:
    // 0x44b1c0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b1c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b1c4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b1c8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b1cc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x44b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b1d0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b1d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b1d4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x44b1d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44b1d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x44b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x44b1dc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b1dcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_44b1e0:
    // 0x44b1e0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b1e4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44b1e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44b1e8:
    // 0x44b1e8: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44b1e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b1ec: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44b1ecu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b1f0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44b1f0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b1f4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44b1f4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b1f8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x44b1f8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44b1fc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b1fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b200: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x44b200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x44b204: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x44b204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x44b208: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x44b208u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x44b20c: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x44b20cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b210: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x44b210u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b214: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x44b214u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x44b218: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x44b218u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x44b21c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x44b21cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b220: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x44b220u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x44b224: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x44B224u;
    {
        const bool branch_taken_0x44b224 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B224u;
        // 0x44b228: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b224) {
            ctx->pc = 0x44B1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b1e8;
        }
    }
    ctx->pc = 0x44B22Cu;
    // 0x44b22c: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x44b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x44b230: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x44b230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x44b234: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b238: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x44b238u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44b23c: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x44B23Cu;
    {
        const bool branch_taken_0x44b23c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B23Cu;
        // 0x44b240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b23c) {
            ctx->pc = 0x44B1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b1e8;
        }
    }
    ctx->pc = 0x44B244u;
    // 0x44b244: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b244u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b248: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b24c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b250: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x44b250u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x44b254: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x44b254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x44b258: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x44b258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x44b25c: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x44B25Cu;
    {
        const bool branch_taken_0x44b25c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B25Cu;
        // 0x44b260: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b25c) {
            ctx->pc = 0x44B1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b1e0;
        }
    }
    ctx->pc = 0x44B264u;
    // 0x44b264: 0x3e00008  jr          $ra
    ctx->pc = 0x44B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B26Cu;
    // 0x44b26c: 0x0  nop
    ctx->pc = 0x44b26cu;
    // NOP
label_44b270:
    // 0x44b270: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b270u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b274: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b278: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b27c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x44b27cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b280: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b280u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b284: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b288: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b288u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b28c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b28cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b290: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x44b290u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b294: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x44b294u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b298: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b298u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b29c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x44b29cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b2a0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x44b2a0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x44b2a4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44b2a4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44b2a8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44b2a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44b2ac: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x44B2ACu;
    {
        const bool branch_taken_0x44b2ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B2ACu;
        // 0x44b2b0: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b2ac) {
            ctx->pc = 0x44B32Cu;
            goto label_44b32c;
        }
    }
    ctx->pc = 0x44B2B4u;
label_44b2b4:
    // 0x44b2b4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44b2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44b2b8: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x44b2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x44b2bc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x44b2bcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b2c0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x44b2c0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b2c4: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x44b2c4u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44b2c8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x44b2c8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44b2cc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b2ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b2d0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x44b2d0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44b2d4: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x44b2d4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x44b2d8: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x44b2d8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x44b2dc: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x44b2dcu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b2e0: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x44b2e0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x44b2e4: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x44b2e4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x44b2e8: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x44b2e8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x44b2ec: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x44b2ecu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x44b2f0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x44b2f0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x44b2f4: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x44b2f4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x44b2f8: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x44b2f8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x44b2fc: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x44b2fcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x44b300: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x44b300u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x44b304: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x44b304u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x44b308: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x44b308u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b30c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x44b30cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x44b310: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x44b310u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x44b314: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x44b314u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x44b318: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x44b318u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b31c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x44b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x44b320: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x44b320u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x44b324: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x44B324u;
    {
        const bool branch_taken_0x44b324 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B324u;
        // 0x44b328: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b324) {
            ctx->pc = 0x44B2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b2b4;
        }
    }
    ctx->pc = 0x44B32Cu;
label_44b32c:
    // 0x44b32c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44b32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44b330: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x44b330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x44b334: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b338: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x44b338u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44b33c: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x44B33Cu;
    {
        const bool branch_taken_0x44b33c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B33Cu;
        // 0x44b340: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b33c) {
            ctx->pc = 0x44B2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b2b4;
        }
    }
    ctx->pc = 0x44B344u;
    // 0x44b344: 0x3e00008  jr          $ra
    ctx->pc = 0x44B344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B34Cu;
    // 0x44b34c: 0x0  nop
    ctx->pc = 0x44b34cu;
    // NOP
label_44b350:
    // 0x44b350: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b350u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b354: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b358: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b35c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x44b35cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b360: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b360u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b364: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b364u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b368: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b368u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b36c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x44b36cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b370: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x44b370u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x44b374: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b374u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_44b378:
    // 0x44b378: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b37c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44b37cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b380: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44b380u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b384: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44b384u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b388: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44b388u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b38c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x44b38cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x44b390: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x44B390u;
    {
        const bool branch_taken_0x44b390 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B390u;
        // 0x44b394: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b390) {
            ctx->pc = 0x44B3ECu;
            goto label_44b3ec;
        }
    }
    ctx->pc = 0x44B398u;
label_44b398:
    // 0x44b398: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44b398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44b39c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x44b39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x44b3a0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44b3a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b3a4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44b3a4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b3a8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44b3a8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b3ac: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44b3acu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b3b0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x44b3b0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44b3b4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b3b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b3b8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x44b3b8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x44b3bc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x44b3bcu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b3c0: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x44b3c0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x44b3c4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x44b3c4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b3c8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x44b3c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x44b3cc: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x44b3ccu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x44b3d0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x44b3d0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b3d4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x44b3d4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x44b3d8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x44b3d8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x44b3dc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x44b3dcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b3e0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x44b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x44b3e4: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x44B3E4u;
    {
        const bool branch_taken_0x44b3e4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B3E4u;
        // 0x44b3e8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b3e4) {
            ctx->pc = 0x44B398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b398;
        }
    }
    ctx->pc = 0x44B3ECu;
label_44b3ec:
    // 0x44b3ec: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x44b3ecu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x44b3f0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x44b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x44b3f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b3f8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x44b3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x44b3fc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x44b3fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x44b400: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x44B400u;
    {
        const bool branch_taken_0x44b400 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B400u;
        // 0x44b404: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b400) {
            ctx->pc = 0x44B398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b398;
        }
    }
    ctx->pc = 0x44B408u;
    // 0x44b408: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b408u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b40c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b410: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b414: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x44b414u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x44b418: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x44b418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x44b41c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x44b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x44b420: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x44b420u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x44b424: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x44B424u;
    {
        const bool branch_taken_0x44b424 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B424u;
        // 0x44b428: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b424) {
            ctx->pc = 0x44B378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b378;
        }
    }
    ctx->pc = 0x44B42Cu;
    // 0x44b42c: 0x3e00008  jr          $ra
    ctx->pc = 0x44B42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B434u;
    // 0x44b434: 0x0  nop
    ctx->pc = 0x44b434u;
    // NOP
label_44b438:
    // 0x44b438: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b438u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b43c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b440: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b444: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x44b444u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b448: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b448u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b44c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b44cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b450: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b450u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b454: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b454u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b458: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x44b458u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b45c: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x44b45cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x44b460: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44b460u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44b464:
    // 0x44b464: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x44b464u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b468: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x44b468u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b46c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b46cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b470: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x44b470u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44b474: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x44b474u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x44b478: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x44b478u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44b47c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b47cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b480: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x44b480u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44b484: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44b484u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b488: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x44b488u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x44b48c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x44b48cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x44b490: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x44b490u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x44b494: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x44b494u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x44b498: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x44b498u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x44b49c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x44b49cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x44b4a0: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x44b4a0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x44b4a4: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x44b4a4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x44b4a8: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x44b4a8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x44b4ac: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x44b4acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x44b4b0: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x44b4b0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x44b4b4: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x44b4b4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x44b4b8: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x44b4b8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x44b4bc: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x44b4bcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x44b4c0: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x44b4c0u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b4c4: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x44b4c4u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x44b4c8: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x44b4c8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x44b4cc: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x44b4ccu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x44b4d0: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x44b4d0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b4d4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x44b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x44b4d8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x44b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x44b4dc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x44b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x44b4e0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x44b4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x44b4e4: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x44B4E4u;
    {
        const bool branch_taken_0x44b4e4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4E4u;
        // 0x44b4e8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b4e4) {
            ctx->pc = 0x44B464u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b464;
        }
    }
    ctx->pc = 0x44B4ECu;
    // 0x44b4ec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44b4f0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x44b4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x44b4f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b4f8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x44b4f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44b4fc: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x44B4FCu;
    {
        const bool branch_taken_0x44b4fc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4FCu;
        // 0x44b500: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b4fc) {
            ctx->pc = 0x44B464u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b464;
        }
    }
    ctx->pc = 0x44B504u;
    // 0x44b504: 0x3e00008  jr          $ra
    ctx->pc = 0x44B504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B50Cu;
    // 0x44b50c: 0x0  nop
    ctx->pc = 0x44b50cu;
    // NOP
label_44b510:
    // 0x44b510: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b510u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b514: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b518: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b51c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x44b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b520: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b520u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b524: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b524u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b528: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b528u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b52c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x44b52cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b530: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x44b530u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44b534: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x44b534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_44b538:
    // 0x44b538: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b53c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44b53cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44b540:
    // 0x44b540: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44b540u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b544: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44b544u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b548: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44b548u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b54c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b54cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b550: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44b550u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b554: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x44b554u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44b558: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b558u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b55c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x44b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x44b560: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x44b560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x44b564: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44b564u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b568: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x44b568u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b56c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44b56cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44b570: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x44b570u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b574: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x44b574u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x44b578: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x44b578u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b57c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x44b57cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x44b580: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x44b580u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x44b584: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x44b584u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b588: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x44b588u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x44b58c: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x44b58cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x44b590: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x44b590u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b594: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x44b594u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x44b598: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x44B598u;
    {
        const bool branch_taken_0x44b598 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B598u;
        // 0x44b59c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b598) {
            ctx->pc = 0x44B540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b540;
        }
    }
    ctx->pc = 0x44B5A0u;
    // 0x44b5a0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x44b5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x44b5a4: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x44b5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x44b5a8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b5ac: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x44b5acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44b5b0: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x44B5B0u;
    {
        const bool branch_taken_0x44b5b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B5B0u;
        // 0x44b5b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b5b0) {
            ctx->pc = 0x44B540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b540;
        }
    }
    ctx->pc = 0x44B5B8u;
    // 0x44b5b8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b5b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b5bc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b5c0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b5c4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x44b5c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x44b5c8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x44b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x44b5cc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x44b5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x44b5d0: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x44B5D0u;
    {
        const bool branch_taken_0x44b5d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B5D0u;
        // 0x44b5d4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b5d0) {
            ctx->pc = 0x44B538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b538;
        }
    }
    ctx->pc = 0x44B5D8u;
    // 0x44b5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x44B5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B5E0u;
label_44b5e0:
    // 0x44b5e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b5e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b5e4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b5e8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b5ec: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x44b5ecu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b5f0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b5f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b5f4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b5f8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b5f8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b5fc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b5fcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b600: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x44b600u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x44b604: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x44b604u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b608: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x44b608u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b60c: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x44b60cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b610: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b610u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b614: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x44b614u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b618: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x44b618u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x44b61c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44b61cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44b620: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x44b620u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44b624: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x44b624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44b628: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x44b628u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b62c: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x44b62cu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44b630: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x44b630u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x44b634: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x44b634u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x44b638: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x44b638u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x44b63c: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x44B63Cu;
    {
        const bool branch_taken_0x44b63c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B63Cu;
        // 0x44b640: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b63c) {
            ctx->pc = 0x44B6E0u;
            goto label_44b6e0;
        }
    }
    ctx->pc = 0x44B644u;
label_44b644:
    // 0x44b644: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x44b644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x44b648: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x44b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x44b64c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x44b64cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b650: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x44b650u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b654: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b654u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b658: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x44b658u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x44b65c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x44b65cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x44b660: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x44b660u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44b664: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b664u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b668: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x44b668u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x44b66c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x44b66cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b670: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x44b670u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x44b674: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x44b674u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x44b678: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x44b678u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x44b67c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x44b67cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x44b680: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x44b680u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x44b684: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x44b684u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x44b688: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x44b688u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x44b68c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x44b68cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b690: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x44b690u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x44b694: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x44b694u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x44b698: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x44b698u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x44b69c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x44b69cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x44b6a0: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x44b6a0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x44b6a4: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x44b6a4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x44b6a8: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x44b6a8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x44b6ac: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x44b6acu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x44b6b0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x44b6b0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x44b6b4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b6b4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b6b8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b6b8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b6bc: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x44b6bcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x44b6c0: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x44b6c0u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b6c4: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x44b6c4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x44b6c8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x44b6c8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b6cc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x44b6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x44b6d0: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x44b6d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x44b6d4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x44b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x44b6d8: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x44B6D8u;
    {
        const bool branch_taken_0x44b6d8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B6D8u;
        // 0x44b6dc: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b6d8) {
            ctx->pc = 0x44B644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b644;
        }
    }
    ctx->pc = 0x44B6E0u;
label_44b6e0:
    // 0x44b6e0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x44b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x44b6e4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x44b6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x44b6e8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b6ec: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x44b6ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x44b6f0: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x44B6F0u;
    {
        const bool branch_taken_0x44b6f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B6F0u;
        // 0x44b6f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b6f0) {
            ctx->pc = 0x44B644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b644;
        }
    }
    ctx->pc = 0x44B6F8u;
    // 0x44b6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x44B6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B700u;
label_44b700:
    // 0x44b700: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b700u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b704: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b708: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b70c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x44b70cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b710: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x44b710u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44b714: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x44b714u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x44b718: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x44b718u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x44b71c: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x44b71cu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x44b720: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x44b720u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b724: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x44b724u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44b728:
    // 0x44b728: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x44b728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44b72c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44b72cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b730: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44b730u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b734: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44b734u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b738: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b738u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b73c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44b73cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b740: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x44b740u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44b744: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44b748: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x44b748u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x44b74c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44b74cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b750: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x44b750u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b754: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44b754u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44b758: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x44B758u;
    {
        const bool branch_taken_0x44b758 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B758u;
        // 0x44b75c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b758) {
            ctx->pc = 0x44B7CCu;
            goto label_44b7cc;
        }
    }
    ctx->pc = 0x44B760u;
label_44b760:
    // 0x44b760: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x44b760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x44b764: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x44b764u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b768: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x44b768u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x44b76c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x44b76cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b770: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x44b770u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b774: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x44b774u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b778: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x44b778u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x44b77c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x44b77cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x44b780: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44b780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44b784: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x44b784u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x44b788: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x44b788u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x44b78c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x44b78cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x44b790: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x44b790u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x44b794: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x44b794u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x44b798: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x44b798u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b79c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x44b79cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x44b7a0: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x44b7a0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x44b7a4: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x44b7a4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x44b7a8: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x44b7a8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x44b7ac: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x44b7acu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x44b7b0: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x44b7b0u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x44b7b4: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x44b7b4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x44b7b8: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x44b7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x44b7bc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x44b7bcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x44b7c0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x44b7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x44b7c4: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x44B7C4u;
    {
        const bool branch_taken_0x44b7c4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x44B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B7C4u;
        // 0x44b7c8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b7c4) {
            ctx->pc = 0x44B760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b760;
        }
    }
    ctx->pc = 0x44B7CCu;
label_44b7cc:
    // 0x44b7cc: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x44b7ccu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x44b7d0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x44b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x44b7d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x44b7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44b7d8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x44b7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x44b7dc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x44b7dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x44b7e0: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x44B7E0u;
    {
        const bool branch_taken_0x44b7e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B7E0u;
        // 0x44b7e4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b7e0) {
            ctx->pc = 0x44B760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b760;
        }
    }
    ctx->pc = 0x44B7E8u;
    // 0x44b7e8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x44b7e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44b7ec: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x44b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b7f0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x44b7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x44b7f4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x44b7f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x44b7f8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x44b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x44b7fc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x44b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x44b800: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x44b800u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x44b804: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x44B804u;
    {
        const bool branch_taken_0x44b804 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B804u;
        // 0x44b808: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b804) {
            ctx->pc = 0x44B728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b728;
        }
    }
    ctx->pc = 0x44B80Cu;
    // 0x44b80c: 0x3e00008  jr          $ra
    ctx->pc = 0x44B80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B814u;
    // 0x44b814: 0x0  nop
    ctx->pc = 0x44b814u;
    // NOP
    ctx->pc = 0x44b818u;
}
