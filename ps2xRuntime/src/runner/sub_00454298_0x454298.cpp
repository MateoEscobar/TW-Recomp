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

// Function: sub_00454298
// Address: 0x454298 - 0x454840
void sub_00454298_0x454298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454298_0x454298");
#endif

    switch (ctx->pc) {
        case 0x454324u: goto label_454324;
        case 0x45449cu: goto label_45449c;
        case 0x454514u: goto label_454514;
        case 0x454658u: goto label_454658;
        case 0x454668u: goto label_454668;
        case 0x454690u: goto label_454690;
        case 0x45470cu: goto label_45470c;
        case 0x454720u: goto label_454720;
        case 0x454738u: goto label_454738;
        case 0x454770u: goto label_454770;
        case 0x45477cu: goto label_45477c;
        case 0x4547f0u: goto label_4547f0;
        default: break;
    }

    ctx->pc = 0x454298u;

    // 0x454298: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x454298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x45429c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x45429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4542a0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x4542a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x4542a4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x4542a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x4542a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4542a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4542ac: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x4542acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x4542b0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x4542b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x4542b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4542b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4542b8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x4542b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x4542bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4542bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4542c0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x4542c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x4542c4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x4542c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x4542c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4542c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4542cc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x4542ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x4542d0: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x4542d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4542d4: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x4542d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD18u));
    // 0x4542d8: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x4542d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4542dc: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x4542dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4542e0: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x4542e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x4542e4: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x4542e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x4542e8: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x4542e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4542ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4542ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4542f0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4542f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4542f4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4542F4u;
    {
        const bool branch_taken_0x4542f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4542F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4542F4u;
        // 0x4542f8: 0x8cc20054  lw          $v0, 0x54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4542f4) {
            ctx->pc = 0x454314u;
            goto label_454314;
        }
    }
    ctx->pc = 0x4542FCu;
    // 0x4542fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4542fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x454300: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x454300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x454304: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x454304u;
    {
        const bool branch_taken_0x454304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x454308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454304u;
        // 0x454308: 0x8f848910  lw          $a0, -0x76F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454304) {
            ctx->pc = 0x454318u;
            goto label_454318;
        }
    }
    ctx->pc = 0x45430Cu;
    // 0x45430c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x45430Cu;
    {
        const bool branch_taken_0x45430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45430Cu;
        // 0x454310: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45430c) {
            ctx->pc = 0x454324u;
            goto label_454324;
        }
    }
    ctx->pc = 0x454314u;
label_454314:
    // 0x454314: 0x8f848910  lw          $a0, -0x76F0($gp)
    ctx->pc = 0x454314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_454318:
    // 0x454318: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x454318u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45431c: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x45431Cu;
    SET_GPR_U32(ctx, 31, 0x454324u);
    ctx->pc = 0x454320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45431Cu;
    // 0x454320: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x45431Cu, 0x454324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454324u;
label_454324:
    // 0x454324: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x454324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x454328: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x454328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x45432c: 0x8e280018  lw          $t0, 0x18($s1)
    ctx->pc = 0x45432cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x454330: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x454330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x454334: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x454334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x454338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x454338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x45433c: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x45433Cu;
    {
        const bool branch_taken_0x45433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45433c) {
            ctx->pc = 0x454340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45433Cu;
            // 0x454340: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454450u;
            goto label_454450;
        }
    }
    ctx->pc = 0x454344u;
    // 0x454344: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x454344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x454348: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x454348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x45434c: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x45434cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x454350: 0x34c6fffe  ori         $a2, $a2, 0xFFFE
    ctx->pc = 0x454350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65534);
    // 0x454354: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x454354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x454358: 0x91040018  lbu         $a0, 0x18($t0)
    ctx->pc = 0x454358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x45435c: 0x3063009f  andi        $v1, $v1, 0x9F
    ctx->pc = 0x45435cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)159);
    // 0x454360: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x454360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x454364: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x454364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x454368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x454368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x45436c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x45436cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x454370: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x454370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x454374: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x454374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x454378: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x454378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x45437c: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x45437cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x454380: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x454380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x454384: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x454384u;
    {
        const bool branch_taken_0x454384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x454388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454384u;
        // 0x454388: 0x24490018  addiu       $t1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454384) {
            ctx->pc = 0x454448u;
            goto label_454448;
        }
    }
    ctx->pc = 0x45438Cu;
    // 0x45438c: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x45438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x454390: 0x10c4000e  beq         $a2, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x454390u;
    {
        const bool branch_taken_0x454390 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x454394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454390u;
        // 0x454394: 0x2627004c  addiu       $a3, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454390) {
            ctx->pc = 0x4543CCu;
            goto label_4543cc;
        }
    }
    ctx->pc = 0x454398u;
    // 0x454398: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x454398u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x45439c: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x45439cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4543a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4543a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4543a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4543a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4543a8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4543A8u;
    {
        const bool branch_taken_0x4543a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4543ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4543A8u;
        // 0x4543ac: 0x34a20008  ori         $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4543a8) {
            ctx->pc = 0x4543C8u;
            goto label_4543c8;
        }
    }
    ctx->pc = 0x4543B0u;
    // 0x4543b0: 0x61e02  srl         $v1, $a2, 24
    ctx->pc = 0x4543b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x4543b4: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x4543b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x4543b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4543B8u;
    {
        const bool branch_taken_0x4543b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4543BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4543B8u;
        // 0x4543bc: 0x34a20008  ori         $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4543b8) {
            ctx->pc = 0x4543C8u;
            goto label_4543c8;
        }
    }
    ctx->pc = 0x4543C0u;
    // 0x4543c0: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x4543c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x4543c4: 0x0  nop
    ctx->pc = 0x4543c4u;
    // NOP
label_4543c8:
    // 0x4543c8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4543c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_4543cc:
    // 0x4543cc: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x4543ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4543d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4543D0u;
    {
        const bool branch_taken_0x4543d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4543D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4543D0u;
        // 0x4543d4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4543d0) {
            ctx->pc = 0x454408u;
            goto label_454408;
        }
    }
    ctx->pc = 0x4543D8u;
    // 0x4543d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4543D8u;
    {
        const bool branch_taken_0x4543d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4543d8) {
            ctx->pc = 0x4543DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4543D8u;
            // 0x4543dc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4543F0u;
            goto label_4543f0;
        }
    }
    ctx->pc = 0x4543E0u;
    // 0x4543e0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4543e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4543e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4543e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4543e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4543E8u;
    {
        const bool branch_taken_0x4543e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4543ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4543E8u;
        // 0x4543ec: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4543e8) {
            ctx->pc = 0x454408u;
            goto label_454408;
        }
    }
    ctx->pc = 0x4543F0u;
label_4543f0:
    // 0x4543f0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4543f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4543f4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4543f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x4543f8: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x4543f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4543fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4543fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x454400: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x454400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x454404: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x454404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_454408:
    // 0x454408: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x454408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x45440c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45440cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x454410: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x454410u;
    {
        const bool branch_taken_0x454410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454410) {
            ctx->pc = 0x454414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454410u;
            // 0x454414: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454450u;
            goto label_454450;
        }
    }
    ctx->pc = 0x454418u;
    // 0x454418: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x454418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x45441c: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x45441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x454420: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x454420u;
    {
        const bool branch_taken_0x454420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x454420) {
            ctx->pc = 0x454424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454420u;
            // 0x454424: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454440u;
            goto label_454440;
        }
    }
    ctx->pc = 0x454428u;
    // 0x454428: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x454428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x45442c: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x45442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x454430: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x454430u;
    {
        const bool branch_taken_0x454430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x454430) {
            ctx->pc = 0x454434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454430u;
            // 0x454434: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454450u;
            goto label_454450;
        }
    }
    ctx->pc = 0x454438u;
    // 0x454438: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x454438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x45443c: 0x0  nop
    ctx->pc = 0x45443cu;
    // NOP
label_454440:
    // 0x454440: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x454440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x454444: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x454444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_454448:
    // 0x454448: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x454448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x45444c: 0x0  nop
    ctx->pc = 0x45444cu;
    // NOP
label_454450:
    // 0x454450: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x454450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x454454: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x454454u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x454458: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x454458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x45445c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x45445cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x454460: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x454460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x454464: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x454464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x454468: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x454468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x45446c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x45446cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x454470: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x454470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x454474: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x454474u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x454478: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x454478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x45447c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x45447cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x454480: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x454480u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x454484: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x454484u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x454488: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x454488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45448c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x454490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x454490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454494: 0xc11a45e  jal         func_469178
    ctx->pc = 0x454494u;
    SET_GPR_U32(ctx, 31, 0x45449Cu);
    ctx->pc = 0x454498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454494u;
    // 0x454498: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x454494u, 0x45449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45449Cu;
label_45449c:
    // 0x45449c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4544a0: 0x8f838a24  lw          $v1, -0x75DC($gp)
    ctx->pc = 0x4544a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x4544a4: 0x8e62ad18  lw          $v0, -0x52E8($s3)
    ctx->pc = 0x4544a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946072)));
    // 0x4544a8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4544a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4544ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4544acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4544b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4544b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4544b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4544b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4544b8: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x4544b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4544bc: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x4544bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x4544c0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x4544c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4544c4: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x4544c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4544c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4544c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4544cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4544ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4544d0: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x4544d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4544d4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x4544d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x4544d8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x4544d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4544dc: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x4544dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4544e0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x4544e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4544e4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x4544e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4544e8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4544e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x4544ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4544ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4544f0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4544f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4544f4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4544f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4544f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4544f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4544fc: 0x0  nop
    ctx->pc = 0x4544fcu;
    // NOP
    // 0x454500: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x454500u;
    {
        const bool branch_taken_0x454500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x454504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454500u;
        // 0x454504: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454500) {
            ctx->pc = 0x454510u;
            goto label_454510;
        }
    }
    ctx->pc = 0x454508u;
    // 0x454508: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x454508u;
    {
        const bool branch_taken_0x454508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454508u;
        // 0x45450c: 0xafa70070  sw          $a3, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454508) {
            ctx->pc = 0x45456Cu;
            goto label_45456c;
        }
    }
    ctx->pc = 0x454510u;
label_454510:
    // 0x454510: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x454510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_454514:
    // 0x454514: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x454514u;
    {
        const bool branch_taken_0x454514 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x454518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454514u;
        // 0x454518: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454514) {
            ctx->pc = 0x45456Cu;
            goto label_45456c;
        }
    }
    ctx->pc = 0x45451Cu;
    // 0x45451c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x45451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454520: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x454520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454524: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x454524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454528: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x454528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x45452c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x45452cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x454530: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x454530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x454534: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x454534u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x454538: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x454538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45453c: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x45453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x454540: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x454540u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x454544: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x454544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x454548: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x454548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x45454c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45454cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x454550: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x454550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x454554: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x454554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x454558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x454558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x45455c: 0x0  nop
    ctx->pc = 0x45455cu;
    // NOP
    // 0x454560: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x454560u;
    {
        const bool branch_taken_0x454560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x454560) {
            ctx->pc = 0x454564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454560u;
            // 0x454564: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454514;
        }
    }
    ctx->pc = 0x454568u;
    // 0x454568: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x454568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
label_45456c:
    // 0x45456c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x45456cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x454570: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x454570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x454574: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x454574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x454578: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x454578u;
    {
        const bool branch_taken_0x454578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454578u;
        // 0x45457c: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454578) {
            ctx->pc = 0x4545B8u;
            goto label_4545b8;
        }
    }
    ctx->pc = 0x454580u;
    // 0x454580: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x454580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x454584: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x454584u;
    {
        const bool branch_taken_0x454584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454584) {
            ctx->pc = 0x454588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454584u;
            // 0x454588: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4545A0u;
            goto label_4545a0;
        }
    }
    ctx->pc = 0x45458Cu;
    // 0x45458c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x45458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x454590: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x454590u;
    {
        const bool branch_taken_0x454590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454590) {
            ctx->pc = 0x454594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454590u;
            // 0x454594: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4545B0u;
            goto label_4545b0;
        }
    }
    ctx->pc = 0x454598u;
    // 0x454598: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x454598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45459c: 0x0  nop
    ctx->pc = 0x45459cu;
    // NOP
label_4545a0:
    // 0x4545a0: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x4545a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4545a4: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4545a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4545a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4545A8u;
    {
        const bool branch_taken_0x4545a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4545ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4545A8u;
        // 0x4545ac: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4545a8) {
            ctx->pc = 0x4545F4u;
            goto label_4545f4;
        }
    }
    ctx->pc = 0x4545B0u;
label_4545b0:
    // 0x4545b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4545B0u;
    {
        const bool branch_taken_0x4545b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4545B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4545B0u;
        // 0x4545b4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4545b0) {
            ctx->pc = 0x4545CCu;
            goto label_4545cc;
        }
    }
    ctx->pc = 0x4545B8u;
label_4545b8:
    // 0x4545b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4545b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4545bc: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x4545bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x4545c0: 0x93838780  lbu         $v1, -0x7880($gp)
    ctx->pc = 0x4545c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4545c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4545C4u;
    {
        const bool branch_taken_0x4545c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4545C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4545C4u;
        // 0x4545c8: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4545c4) {
            ctx->pc = 0x4545F8u;
            goto label_4545f8;
        }
    }
    ctx->pc = 0x4545CCu;
label_4545cc:
    // 0x4545cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4545CCu;
    {
        const bool branch_taken_0x4545cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4545D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4545CCu;
        // 0x4545d0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4545cc) {
            ctx->pc = 0x4545E4u;
            goto label_4545e4;
        }
    }
    ctx->pc = 0x4545D4u;
    // 0x4545d4: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x4545d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4545d8: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4545d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4545dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4545DCu;
    {
        const bool branch_taken_0x4545dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4545E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4545DCu;
        // 0x4545e0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4545dc) {
            ctx->pc = 0x4545F4u;
            goto label_4545f4;
        }
    }
    ctx->pc = 0x4545E4u;
label_4545e4:
    // 0x4545e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4545e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4545e8: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x4545e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x4545ec: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4545ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4545f0: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x4545f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_4545f4:
    // 0x4545f4: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x4545f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_4545f8:
    // 0x4545f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4545f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4545fc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4545FCu;
    {
        const bool branch_taken_0x4545fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x454600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4545FCu;
        // 0x454600: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4545fc) {
            ctx->pc = 0x454610u;
            goto label_454610;
        }
    }
    ctx->pc = 0x454604u;
    // 0x454604: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x454604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x454608: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x454608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x45460c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x45460cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_454610:
    // 0x454610: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x454610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x454614: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x454614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x454618: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x454618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x45461c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x45461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x454620: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x454620u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x454624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x454624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x454628: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x454628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x45462c: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x45462cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x454630: 0x8e910018  lw          $s1, 0x18($s4)
    ctx->pc = 0x454630u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x454634: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x454634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x454638: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x454638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x45463c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x45463Cu;
    {
        const bool branch_taken_0x45463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x454640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45463Cu;
        // 0x454640: 0x2663ad18  addiu       $v1, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45463c) {
            ctx->pc = 0x45480Cu;
            goto label_45480c;
        }
    }
    ctx->pc = 0x454644u;
    // 0x454644: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x454644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x454648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x454648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x45464c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x45464cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x454650: 0xc12104a  jal         func_484128
    ctx->pc = 0x454650u;
    SET_GPR_U32(ctx, 31, 0x454658u);
    ctx->pc = 0x454654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454650u;
    // 0x454654: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x454650u, 0x454658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454658u;
label_454658:
    // 0x454658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x454658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45465c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x45465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x454660: 0xc11f332  jal         func_47CCC8
    ctx->pc = 0x454660u;
    SET_GPR_U32(ctx, 31, 0x454668u);
    ctx->pc = 0x454664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454660u;
    // 0x454664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CCC8u, 0x454660u, 0x454668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454668u;
label_454668:
    // 0x454668: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x454668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x45466c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x45466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x454670: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x454670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x454674: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x454674u;
    {
        const bool branch_taken_0x454674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x454678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454674u;
        // 0x454678: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x454674) {
            ctx->pc = 0x4546A4u;
            goto label_4546a4;
        }
    }
    ctx->pc = 0x45467Cu;
    // 0x45467c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x45467cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x454680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x454680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x454684: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x454684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x454688: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x454688u;
    {
        const bool branch_taken_0x454688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454688u;
        // 0x45468c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x454688) {
            ctx->pc = 0x4546E0u;
            goto label_4546e0;
        }
    }
    ctx->pc = 0x454690u;
label_454690:
    // 0x454690: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x454690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x454694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x454694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x454698: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x454698u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x45469c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x45469Cu;
    {
        const bool branch_taken_0x45469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4546A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45469Cu;
        // 0x4546a0: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45469c) {
            ctx->pc = 0x4546E0u;
            goto label_4546e0;
        }
    }
    ctx->pc = 0x4546A4u;
label_4546a4:
    // 0x4546a4: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x4546a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4546a8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4546a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4546ac: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x4546acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4546b0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4546b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4546b4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4546b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4546b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4546b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4546bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4546bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4546c0: 0x46000084  c1          0x84
    ctx->pc = 0x4546c0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x4546c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4546c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4546c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4546c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4546cc: 0x0  nop
    ctx->pc = 0x4546ccu;
    // NOP
    // 0x4546d0: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x4546D0u;
    {
        const bool branch_taken_0x4546d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4546D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4546D0u;
        // 0x4546d4: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4546d0) {
            ctx->pc = 0x454690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454690;
        }
    }
    ctx->pc = 0x4546D8u;
    // 0x4546d8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x4546d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x4546dc: 0x0  nop
    ctx->pc = 0x4546dcu;
    // NOP
label_4546e0:
    // 0x4546e0: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x4546e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x4546e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x4546e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x4546e8: 0x24848fb0  addiu       $a0, $a0, -0x7050
    ctx->pc = 0x4546e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938544));
    // 0x4546ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4546ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4546f0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4546f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4546f4: 0x26950064  addiu       $s5, $s4, 0x64
    ctx->pc = 0x4546f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x4546f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4546f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4546fc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4546fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x454700: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x454700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x454704: 0xc11c5f8  jal         func_4717E0
    ctx->pc = 0x454704u;
    SET_GPR_U32(ctx, 31, 0x45470Cu);
    ctx->pc = 0x454708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454704u;
    // 0x454708: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4717E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4717E0u, 0x454704u, 0x45470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45470Cu;
label_45470c:
    // 0x45470c: 0x8e920064  lw          $s2, 0x64($s4)
    ctx->pc = 0x45470cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x454710: 0x1255003e  beq         $s2, $s5, . + 4 + (0x3E << 2)
    ctx->pc = 0x454710u;
    {
        const bool branch_taken_0x454710 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x454714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454710u;
        // 0x454714: 0x3c170071  lui         $s7, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454710) {
            ctx->pc = 0x45480Cu;
            goto label_45480c;
        }
    }
    ctx->pc = 0x454718u;
    // 0x454718: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x454718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x45471c: 0x0  nop
    ctx->pc = 0x45471cu;
    // NOP
label_454720:
    // 0x454720: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x454720u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x454724: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x454724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x454728: 0x52330036  beql        $s1, $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x454728u;
    {
        const bool branch_taken_0x454728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x454728) {
            ctx->pc = 0x45472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454728u;
            // 0x45472c: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454804u;
            goto label_454804;
        }
    }
    ctx->pc = 0x454730u;
    // 0x454730: 0x26f6ad18  addiu       $s6, $s7, -0x52E8
    ctx->pc = 0x454730u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
    // 0x454734: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x454734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_454738:
    // 0x454738: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x454738u;
    {
        const bool branch_taken_0x454738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x454738) {
            ctx->pc = 0x45473Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454738u;
            // 0x45473c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4547F8u;
            goto label_4547f8;
        }
    }
    ctx->pc = 0x454740u;
    // 0x454740: 0x96c4000a  lhu         $a0, 0xA($s6)
    ctx->pc = 0x454740u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x454744: 0x9462003c  lhu         $v0, 0x3C($v1)
    ctx->pc = 0x454744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x454748: 0x5044002b  beql        $v0, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x454748u;
    {
        const bool branch_taken_0x454748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x454748) {
            ctx->pc = 0x45474Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454748u;
            // 0x45474c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4547F8u;
            goto label_4547f8;
        }
    }
    ctx->pc = 0x454750u;
    // 0x454750: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x454750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x454754: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x454754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x454758: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x454758u;
    {
        const bool branch_taken_0x454758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454758) {
            ctx->pc = 0x45475Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454758u;
            // 0x45475c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4547F8u;
            goto label_4547f8;
        }
    }
    ctx->pc = 0x454760u;
    // 0x454760: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x454760u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x454764: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x454764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x454768: 0xc12104a  jal         func_484128
    ctx->pc = 0x454768u;
    SET_GPR_U32(ctx, 31, 0x454770u);
    ctx->pc = 0x45476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454768u;
    // 0x45476c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x454768u, 0x454770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454770u;
label_454770:
    // 0x454770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x454770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454774: 0xc11a45e  jal         func_469178
    ctx->pc = 0x454774u;
    SET_GPR_U32(ctx, 31, 0x45477Cu);
    ctx->pc = 0x454778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x454774u;
    // 0x454778: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x454774u, 0x45477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45477Cu;
label_45477c:
    // 0x45477c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x45477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x454780: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x454780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x454784: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x454784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454788: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x454788u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x45478c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x45478cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x454790: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x454790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x454794: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x454794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x454798: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x454798u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x45479c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x45479cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4547a0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4547a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4547a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4547a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4547a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4547a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4547ac: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4547acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4547b0: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x4547b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x4547b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4547b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4547b8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4547b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4547bc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x4547bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4547c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4547c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4547c4: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x4547c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4547c8: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x4547c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x4547cc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4547ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4547d0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4547d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4547d4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4547d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4547d8: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x4547d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4547dc: 0x0  nop
    ctx->pc = 0x4547dcu;
    // NOP
    // 0x4547e0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4547E0u;
    {
        const bool branch_taken_0x4547e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4547e0) {
            ctx->pc = 0x4547E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4547E0u;
            // 0x4547e4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4547F8u;
            goto label_4547f8;
        }
    }
    ctx->pc = 0x4547E8u;
    // 0x4547e8: 0xc11e3ec  jal         func_478FB0
    ctx->pc = 0x4547E8u;
    SET_GPR_U32(ctx, 31, 0x4547F0u);
    ctx->pc = 0x4547ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4547E8u;
    // 0x4547ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x478FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478FB0u, 0x4547E8u, 0x4547F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4547F0u;
label_4547f0:
    // 0x4547f0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x4547f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4547f4: 0x0  nop
    ctx->pc = 0x4547f4u;
    // NOP
label_4547f8:
    // 0x4547f8: 0x5633ffcf  bnel        $s1, $s3, . + 4 + (-0x31 << 2)
    ctx->pc = 0x4547F8u;
    {
        const bool branch_taken_0x4547f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x4547f8) {
            ctx->pc = 0x4547FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4547F8u;
            // 0x4547fc: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454738;
        }
    }
    ctx->pc = 0x454800u;
    // 0x454800: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x454800u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_454804:
    // 0x454804: 0x5655ffc6  bnel        $s2, $s5, . + 4 + (-0x3A << 2)
    ctx->pc = 0x454804u;
    {
        const bool branch_taken_0x454804 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x454804) {
            ctx->pc = 0x454808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x454804u;
            // 0x454808: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x454720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454720;
        }
    }
    ctx->pc = 0x45480Cu;
label_45480c:
    // 0x45480c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x45480cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x454810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x454810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x454814: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x454814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x454818: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x454818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x45481c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x45481cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x454820: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x454820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x454824: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x454824u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x454828: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x454828u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45482c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x45482cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x454830: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x454830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x454834: 0x3e00008  jr          $ra
    ctx->pc = 0x454834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x454834u;
        // 0x454838: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x454834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45483Cu;
    // 0x45483c: 0x0  nop
    ctx->pc = 0x45483cu;
    // NOP
    ctx->pc = 0x454840u;
}
