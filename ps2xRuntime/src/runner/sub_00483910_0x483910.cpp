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

// Function: sub_00483910
// Address: 0x483910 - 0x483a60
void sub_00483910_0x483910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483910_0x483910");
#endif

    switch (ctx->pc) {
        case 0x483910u: goto label_483910;
        case 0x483914u: goto label_483914;
        case 0x483918u: goto label_483918;
        case 0x48391cu: goto label_48391c;
        case 0x483920u: goto label_483920;
        case 0x483924u: goto label_483924;
        case 0x483928u: goto label_483928;
        case 0x48392cu: goto label_48392c;
        case 0x483930u: goto label_483930;
        case 0x483934u: goto label_483934;
        case 0x483938u: goto label_483938;
        case 0x48393cu: goto label_48393c;
        case 0x483940u: goto label_483940;
        case 0x483944u: goto label_483944;
        case 0x483948u: goto label_483948;
        case 0x48394cu: goto label_48394c;
        case 0x483950u: goto label_483950;
        case 0x483954u: goto label_483954;
        case 0x483958u: goto label_483958;
        case 0x48395cu: goto label_48395c;
        case 0x483960u: goto label_483960;
        case 0x483964u: goto label_483964;
        case 0x483968u: goto label_483968;
        case 0x48396cu: goto label_48396c;
        case 0x483970u: goto label_483970;
        case 0x483974u: goto label_483974;
        case 0x483978u: goto label_483978;
        case 0x48397cu: goto label_48397c;
        case 0x483980u: goto label_483980;
        case 0x483984u: goto label_483984;
        case 0x483988u: goto label_483988;
        case 0x48398cu: goto label_48398c;
        case 0x483990u: goto label_483990;
        case 0x483994u: goto label_483994;
        case 0x483998u: goto label_483998;
        case 0x48399cu: goto label_48399c;
        case 0x4839a0u: goto label_4839a0;
        case 0x4839a4u: goto label_4839a4;
        case 0x4839a8u: goto label_4839a8;
        case 0x4839acu: goto label_4839ac;
        case 0x4839b0u: goto label_4839b0;
        case 0x4839b4u: goto label_4839b4;
        case 0x4839b8u: goto label_4839b8;
        case 0x4839bcu: goto label_4839bc;
        case 0x4839c0u: goto label_4839c0;
        case 0x4839c4u: goto label_4839c4;
        case 0x4839c8u: goto label_4839c8;
        case 0x4839ccu: goto label_4839cc;
        case 0x4839d0u: goto label_4839d0;
        case 0x4839d4u: goto label_4839d4;
        case 0x4839d8u: goto label_4839d8;
        case 0x4839dcu: goto label_4839dc;
        case 0x4839e0u: goto label_4839e0;
        case 0x4839e4u: goto label_4839e4;
        case 0x4839e8u: goto label_4839e8;
        case 0x4839ecu: goto label_4839ec;
        case 0x4839f0u: goto label_4839f0;
        case 0x4839f4u: goto label_4839f4;
        case 0x4839f8u: goto label_4839f8;
        case 0x4839fcu: goto label_4839fc;
        case 0x483a00u: goto label_483a00;
        case 0x483a04u: goto label_483a04;
        case 0x483a08u: goto label_483a08;
        case 0x483a0cu: goto label_483a0c;
        case 0x483a10u: goto label_483a10;
        case 0x483a14u: goto label_483a14;
        case 0x483a18u: goto label_483a18;
        case 0x483a1cu: goto label_483a1c;
        case 0x483a20u: goto label_483a20;
        case 0x483a24u: goto label_483a24;
        case 0x483a28u: goto label_483a28;
        case 0x483a2cu: goto label_483a2c;
        case 0x483a30u: goto label_483a30;
        case 0x483a34u: goto label_483a34;
        case 0x483a38u: goto label_483a38;
        case 0x483a3cu: goto label_483a3c;
        case 0x483a40u: goto label_483a40;
        case 0x483a44u: goto label_483a44;
        case 0x483a48u: goto label_483a48;
        case 0x483a4cu: goto label_483a4c;
        case 0x483a50u: goto label_483a50;
        case 0x483a54u: goto label_483a54;
        case 0x483a58u: goto label_483a58;
        case 0x483a5cu: goto label_483a5c;
        default: break;
    }

    ctx->pc = 0x483910u;

label_483910:
    // 0x483910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x483910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_483914:
    // 0x483914: 0x8f838960  lw          $v1, -0x76A0($gp)
    ctx->pc = 0x483914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
label_483918:
    // 0x483918: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x483918u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_48391c:
    // 0x48391c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x48391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_483920:
    // 0x483920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x483920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_483924:
    // 0x483924: 0x24c6ad18  addiu       $a2, $a2, -0x52E8
    ctx->pc = 0x483924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946072));
label_483928:
    // 0x483928: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x483928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_48392c:
    // 0x48392c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x48392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_483930:
    // 0x483930: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x483930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_483934:
    // 0x483934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x483934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483938:
    // 0x483938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48393c:
    // 0x48393c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x48393cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_483940:
    // 0x483940: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x483940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_483944:
    // 0x483944: 0x8cc20118  lw          $v0, 0x118($a2)
    ctx->pc = 0x483944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
label_483948:
    // 0x483948: 0x34a5000e  ori         $a1, $a1, 0xE
    ctx->pc = 0x483948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
label_48394c:
    // 0x48394c: 0x40f809  jalr        $v0
label_483950:
    if (ctx->pc == 0x483950u) {
        ctx->pc = 0x483950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48394Cu;
        // 0x483950: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483954u;
        goto label_483954;
    }
    ctx->pc = 0x48394Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483954u);
        ctx->pc = 0x483950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48394Cu;
        // 0x483950: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48394Cu, 0x483954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483954u;
label_483954:
    // 0x483954: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x483954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483958:
    // 0x483958: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_48395c:
    if (ctx->pc == 0x48395Cu) {
        ctx->pc = 0x48395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483958u;
        // 0x48395c: 0x233980a  movz        $s3, $s1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483960u;
        goto label_483960;
    }
    ctx->pc = 0x483958u;
    {
        const bool branch_taken_0x483958 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x48395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483958u;
        // 0x48395c: 0x233980a  movz        $s3, $s1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483958) {
            ctx->pc = 0x483978u;
            goto label_483978;
        }
    }
    ctx->pc = 0x483960u;
label_483960:
    // 0x483960: 0x10000037  b           . + 4 + (0x37 << 2)
label_483964:
    if (ctx->pc == 0x483964u) {
        ctx->pc = 0x483964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483960u;
        // 0x483964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483968u;
        goto label_483968;
    }
    ctx->pc = 0x483960u;
    {
        const bool branch_taken_0x483960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x483964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483960u;
        // 0x483964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483960) {
            ctx->pc = 0x483A40u;
            goto label_483a40;
        }
    }
    ctx->pc = 0x483968u;
label_483968:
    // 0x483968: 0xc120f56  jal         func_483D58
label_48396c:
    if (ctx->pc == 0x48396Cu) {
        ctx->pc = 0x48396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483968u;
        // 0x48396c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483970u;
        goto label_483970;
    }
    ctx->pc = 0x483968u;
    SET_GPR_U32(ctx, 31, 0x483970u);
    ctx->pc = 0x48396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483968u;
    // 0x48396c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483D58u, 0x483968u, 0x483970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483970u;
label_483970:
    // 0x483970: 0x10000033  b           . + 4 + (0x33 << 2)
label_483974:
    if (ctx->pc == 0x483974u) {
        ctx->pc = 0x483974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483970u;
        // 0x483974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483978u;
        goto label_483978;
    }
    ctx->pc = 0x483970u;
    {
        const bool branch_taken_0x483970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x483974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483970u;
        // 0x483974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483970) {
            ctx->pc = 0x483A40u;
            goto label_483a40;
        }
    }
    ctx->pc = 0x483978u;
label_483978:
    // 0x483978: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x483978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_48397c:
    // 0x48397c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x48397cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_483980:
    // 0x483980: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x483980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_483984:
    // 0x483984: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x483984u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_483988:
    // 0x483988: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x483988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_48398c:
    // 0x48398c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x48398cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_483990:
    // 0x483990: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x483990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_483994:
    // 0x483994: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x483994u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_483998:
    // 0x483998: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x483998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_48399c:
    // 0x48399c: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x48399cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_4839a0:
    // 0x4839a0: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x4839a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_4839a4:
    // 0x4839a4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4839a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4839a8:
    // 0x4839a8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x4839a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_4839ac:
    // 0x4839ac: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x4839acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_4839b0:
    // 0x4839b0: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x4839b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_4839b4:
    // 0x4839b4: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x4839b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_4839b8:
    // 0x4839b8: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x4839b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_4839bc:
    // 0x4839bc: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x4839bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_4839c0:
    // 0x4839c0: 0x7a430040  lq          $v1, 0x40($s2)
    ctx->pc = 0x4839c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_4839c4:
    // 0x4839c4: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x4839c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_4839c8:
    // 0x4839c8: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x4839c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
label_4839cc:
    // 0x4839cc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4839ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4839d0:
    // 0x4839d0: 0xae3300a0  sw          $s3, 0xA0($s1)
    ctx->pc = 0x4839d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 19));
label_4839d4:
    // 0x4839d4: 0xae5100a0  sw          $s1, 0xA0($s2)
    ctx->pc = 0x4839d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 17));
label_4839d8:
    // 0x4839d8: 0x8e500098  lw          $s0, 0x98($s2)
    ctx->pc = 0x4839d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_4839dc:
    // 0x4839dc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4839e0:
    if (ctx->pc == 0x4839E0u) {
        ctx->pc = 0x4839E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4839DCu;
        // 0x4839e0: 0x3c100053  lui         $s0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4839E4u;
        goto label_4839e4;
    }
    ctx->pc = 0x4839DCu;
    {
        const bool branch_taken_0x4839dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4839dc) {
            ctx->pc = 0x4839E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4839DCu;
            // 0x4839e0: 0x3c100053  lui         $s0, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483A1Cu;
            goto label_483a1c;
        }
    }
    ctx->pc = 0x4839E4u;
label_4839e4:
    // 0x4839e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4839e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4839e8:
    // 0x4839e8: 0xc120e44  jal         func_483910
label_4839ec:
    if (ctx->pc == 0x4839ECu) {
        ctx->pc = 0x4839ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4839E8u;
        // 0x4839ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4839F0u;
        goto label_4839f0;
    }
    ctx->pc = 0x4839E8u;
    SET_GPR_U32(ctx, 31, 0x4839F0u);
    ctx->pc = 0x4839ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4839E8u;
    // 0x4839ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483910u;
    goto label_483910;
    ctx->pc = 0x4839F0u;
label_4839f0:
    // 0x4839f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4839f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4839f4:
    // 0x4839f4: 0x1060ffdc  beqz        $v1, . + 4 + (-0x24 << 2)
label_4839f8:
    if (ctx->pc == 0x4839F8u) {
        ctx->pc = 0x4839FCu;
        goto label_4839fc;
    }
    ctx->pc = 0x4839F4u;
    {
        const bool branch_taken_0x4839f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4839f4) {
            ctx->pc = 0x483968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483968;
        }
    }
    ctx->pc = 0x4839FCu;
label_4839fc:
    // 0x4839fc: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x4839fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_483a00:
    // 0x483a00: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x483a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
label_483a04:
    // 0x483a04: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x483a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
label_483a08:
    // 0x483a08: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x483a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_483a0c:
    // 0x483a0c: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x483a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_483a10:
    // 0x483a10: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_483a14:
    if (ctx->pc == 0x483A14u) {
        ctx->pc = 0x483A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483A10u;
        // 0x483a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483A18u;
        goto label_483a18;
    }
    ctx->pc = 0x483A10u;
    {
        const bool branch_taken_0x483a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x483A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483A10u;
        // 0x483a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483a10) {
            ctx->pc = 0x4839E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4839e8;
        }
    }
    ctx->pc = 0x483A18u;
label_483a18:
    // 0x483a18: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x483a18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
label_483a1c:
    // 0x483a1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x483a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483a20:
    // 0x483a20: 0x2610ebc0  addiu       $s0, $s0, -0x1440
    ctx->pc = 0x483a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962112));
label_483a24:
    // 0x483a24: 0xc11ff8e  jal         func_47FE38
label_483a28:
    if (ctx->pc == 0x483A28u) {
        ctx->pc = 0x483A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483A24u;
        // 0x483a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483A2Cu;
        goto label_483a2c;
    }
    ctx->pc = 0x483A24u;
    SET_GPR_U32(ctx, 31, 0x483A2Cu);
    ctx->pc = 0x483A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483A24u;
    // 0x483a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x483A24u, 0x483A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483A2Cu;
label_483a2c:
    // 0x483a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483a30:
    // 0x483a30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x483a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_483a34:
    // 0x483a34: 0xc11ffcc  jal         func_47FF30
label_483a38:
    if (ctx->pc == 0x483A38u) {
        ctx->pc = 0x483A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483A34u;
        // 0x483a38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483A3Cu;
        goto label_483a3c;
    }
    ctx->pc = 0x483A34u;
    SET_GPR_U32(ctx, 31, 0x483A3Cu);
    ctx->pc = 0x483A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483A34u;
    // 0x483a38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FF30u, 0x483A34u, 0x483A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483A3Cu;
label_483a3c:
    // 0x483a3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x483a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483a40:
    // 0x483a40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x483a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_483a44:
    // 0x483a44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x483a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_483a48:
    // 0x483a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x483a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_483a4c:
    // 0x483a4c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x483a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483a50:
    // 0x483a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_483a54:
    // 0x483a54: 0x3e00008  jr          $ra
label_483a58:
    if (ctx->pc == 0x483A58u) {
        ctx->pc = 0x483A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483A54u;
        // 0x483a58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483A5Cu;
        goto label_483a5c;
    }
    ctx->pc = 0x483A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483A54u;
        // 0x483a58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483A5Cu;
label_483a5c:
    // 0x483a5c: 0x0  nop
    ctx->pc = 0x483a5cu;
    // NOP
    ctx->pc = 0x483a60u;
}
