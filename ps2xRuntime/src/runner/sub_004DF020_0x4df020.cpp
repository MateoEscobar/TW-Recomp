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

// Function: sub_004DF020
// Address: 0x4df020 - 0x4df1c0
void sub_004DF020_0x4df020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF020_0x4df020");
#endif

    switch (ctx->pc) {
        case 0x4df020u: goto label_4df020;
        case 0x4df024u: goto label_4df024;
        case 0x4df028u: goto label_4df028;
        case 0x4df02cu: goto label_4df02c;
        case 0x4df030u: goto label_4df030;
        case 0x4df034u: goto label_4df034;
        case 0x4df038u: goto label_4df038;
        case 0x4df03cu: goto label_4df03c;
        case 0x4df040u: goto label_4df040;
        case 0x4df044u: goto label_4df044;
        case 0x4df048u: goto label_4df048;
        case 0x4df04cu: goto label_4df04c;
        case 0x4df050u: goto label_4df050;
        case 0x4df054u: goto label_4df054;
        case 0x4df058u: goto label_4df058;
        case 0x4df05cu: goto label_4df05c;
        case 0x4df060u: goto label_4df060;
        case 0x4df064u: goto label_4df064;
        case 0x4df068u: goto label_4df068;
        case 0x4df06cu: goto label_4df06c;
        case 0x4df070u: goto label_4df070;
        case 0x4df074u: goto label_4df074;
        case 0x4df078u: goto label_4df078;
        case 0x4df07cu: goto label_4df07c;
        case 0x4df080u: goto label_4df080;
        case 0x4df084u: goto label_4df084;
        case 0x4df088u: goto label_4df088;
        case 0x4df08cu: goto label_4df08c;
        case 0x4df090u: goto label_4df090;
        case 0x4df094u: goto label_4df094;
        case 0x4df098u: goto label_4df098;
        case 0x4df09cu: goto label_4df09c;
        case 0x4df0a0u: goto label_4df0a0;
        case 0x4df0a4u: goto label_4df0a4;
        case 0x4df0a8u: goto label_4df0a8;
        case 0x4df0acu: goto label_4df0ac;
        case 0x4df0b0u: goto label_4df0b0;
        case 0x4df0b4u: goto label_4df0b4;
        case 0x4df0b8u: goto label_4df0b8;
        case 0x4df0bcu: goto label_4df0bc;
        case 0x4df0c0u: goto label_4df0c0;
        case 0x4df0c4u: goto label_4df0c4;
        case 0x4df0c8u: goto label_4df0c8;
        case 0x4df0ccu: goto label_4df0cc;
        case 0x4df0d0u: goto label_4df0d0;
        case 0x4df0d4u: goto label_4df0d4;
        case 0x4df0d8u: goto label_4df0d8;
        case 0x4df0dcu: goto label_4df0dc;
        case 0x4df0e0u: goto label_4df0e0;
        case 0x4df0e4u: goto label_4df0e4;
        case 0x4df0e8u: goto label_4df0e8;
        case 0x4df0ecu: goto label_4df0ec;
        case 0x4df0f0u: goto label_4df0f0;
        case 0x4df0f4u: goto label_4df0f4;
        case 0x4df0f8u: goto label_4df0f8;
        case 0x4df0fcu: goto label_4df0fc;
        case 0x4df100u: goto label_4df100;
        case 0x4df104u: goto label_4df104;
        case 0x4df108u: goto label_4df108;
        case 0x4df10cu: goto label_4df10c;
        case 0x4df110u: goto label_4df110;
        case 0x4df114u: goto label_4df114;
        case 0x4df118u: goto label_4df118;
        case 0x4df11cu: goto label_4df11c;
        case 0x4df120u: goto label_4df120;
        case 0x4df124u: goto label_4df124;
        case 0x4df128u: goto label_4df128;
        case 0x4df12cu: goto label_4df12c;
        case 0x4df130u: goto label_4df130;
        case 0x4df134u: goto label_4df134;
        case 0x4df138u: goto label_4df138;
        case 0x4df13cu: goto label_4df13c;
        case 0x4df140u: goto label_4df140;
        case 0x4df144u: goto label_4df144;
        case 0x4df148u: goto label_4df148;
        case 0x4df14cu: goto label_4df14c;
        case 0x4df150u: goto label_4df150;
        case 0x4df154u: goto label_4df154;
        case 0x4df158u: goto label_4df158;
        case 0x4df15cu: goto label_4df15c;
        case 0x4df160u: goto label_4df160;
        case 0x4df164u: goto label_4df164;
        case 0x4df168u: goto label_4df168;
        case 0x4df16cu: goto label_4df16c;
        case 0x4df170u: goto label_4df170;
        case 0x4df174u: goto label_4df174;
        case 0x4df178u: goto label_4df178;
        case 0x4df17cu: goto label_4df17c;
        case 0x4df180u: goto label_4df180;
        case 0x4df184u: goto label_4df184;
        case 0x4df188u: goto label_4df188;
        case 0x4df18cu: goto label_4df18c;
        case 0x4df190u: goto label_4df190;
        case 0x4df194u: goto label_4df194;
        case 0x4df198u: goto label_4df198;
        case 0x4df19cu: goto label_4df19c;
        case 0x4df1a0u: goto label_4df1a0;
        case 0x4df1a4u: goto label_4df1a4;
        case 0x4df1a8u: goto label_4df1a8;
        case 0x4df1acu: goto label_4df1ac;
        case 0x4df1b0u: goto label_4df1b0;
        case 0x4df1b4u: goto label_4df1b4;
        case 0x4df1b8u: goto label_4df1b8;
        case 0x4df1bcu: goto label_4df1bc;
        default: break;
    }

    ctx->pc = 0x4df020u;

label_4df020:
    // 0x4df020: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4df020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4df024:
    // 0x4df024: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4df024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4df028:
    // 0x4df028: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4df028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4df02c:
    // 0x4df02c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4df02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4df030:
    // 0x4df030: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4df030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4df034:
    // 0x4df034: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4df034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4df038:
    // 0x4df038: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4df038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4df03c:
    // 0x4df03c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4df03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4df040:
    // 0x4df040: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4df040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4df044:
    // 0x4df044: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4df044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4df048:
    // 0x4df048: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4df048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4df04c:
    // 0x4df04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4df04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4df050:
    // 0x4df050: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4df050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4df054:
    // 0x4df054: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4df054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4df058:
    // 0x4df058: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4df05c:
    if (ctx->pc == 0x4DF05Cu) {
        ctx->pc = 0x4DF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF058u;
        // 0x4df05c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF060u;
        goto label_4df060;
    }
    ctx->pc = 0x4DF058u;
    {
        const bool branch_taken_0x4df058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF058u;
        // 0x4df05c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df058) {
            ctx->pc = 0x4DF0A4u;
            goto label_4df0a4;
        }
    }
    ctx->pc = 0x4DF060u;
label_4df060:
    // 0x4df060: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4df064:
    if (ctx->pc == 0x4DF064u) {
        ctx->pc = 0x4DF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF060u;
        // 0x4df064: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF068u;
        goto label_4df068;
    }
    ctx->pc = 0x4DF060u;
    {
        const bool branch_taken_0x4df060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df060) {
            ctx->pc = 0x4DF064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF060u;
            // 0x4df064: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF074u;
            goto label_4df074;
        }
    }
    ctx->pc = 0x4DF068u;
label_4df068:
    // 0x4df068: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4df068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4df06c:
    // 0x4df06c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4df06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4df070:
    // 0x4df070: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4df070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4df074:
    // 0x4df074: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4df074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4df078:
    // 0x4df078: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4df078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4df07c:
    // 0x4df07c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4df07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4df080:
    // 0x4df080: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4df080u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4df084:
    // 0x4df084: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4df084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4df088:
    // 0x4df088: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4df088u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4df08c:
    // 0x4df08c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4df08cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4df090:
    // 0x4df090: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4df090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4df094:
    // 0x4df094: 0xc10c1bb  jal         func_4306EC
label_4df098:
    if (ctx->pc == 0x4DF098u) {
        ctx->pc = 0x4DF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF094u;
        // 0x4df098: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF09Cu;
        goto label_4df09c;
    }
    ctx->pc = 0x4DF094u;
    SET_GPR_U32(ctx, 31, 0x4DF09Cu);
    ctx->pc = 0x4DF098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF094u;
    // 0x4df098: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DF094u, 0x4DF09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF09Cu;
label_4df09c:
    // 0x4df09c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4df0a0:
    if (ctx->pc == 0x4DF0A0u) {
        ctx->pc = 0x4DF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF09Cu;
        // 0x4df0a0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF0A4u;
        goto label_4df0a4;
    }
    ctx->pc = 0x4DF09Cu;
    {
        const bool branch_taken_0x4df09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF09Cu;
        // 0x4df0a0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df09c) {
            ctx->pc = 0x4DF194u;
            goto label_4df194;
        }
    }
    ctx->pc = 0x4DF0A4u;
label_4df0a4:
    // 0x4df0a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4df0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4df0a8:
    // 0x4df0a8: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4df0a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4df0ac:
    // 0x4df0ac: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4df0acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4df0b0:
    // 0x4df0b0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4df0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4df0b4:
    // 0x4df0b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4df0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4df0b8:
    // 0x4df0b8: 0x24962540  addiu       $s6, $a0, 0x2540
    ctx->pc = 0x4df0b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 9536));
label_4df0bc:
    // 0x4df0bc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4df0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4df0c0:
    // 0x4df0c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4df0c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4df0c4:
    // 0x4df0c4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4df0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4df0c8:
    // 0x4df0c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4df0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4df0cc:
    // 0x4df0cc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4df0ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4df0d0:
    // 0x4df0d0: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4df0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4df0d4:
    // 0x4df0d4: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4df0d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4df0d8:
    // 0x4df0d8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4df0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4df0dc:
    // 0x4df0dc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4df0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4df0e0:
    // 0x4df0e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4df0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4df0e4:
    // 0x4df0e4: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4df0e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4df0e8:
    // 0x4df0e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4df0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4df0ec:
    // 0x4df0ec: 0x24a52538  addiu       $a1, $a1, 0x2538
    ctx->pc = 0x4df0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9528));
label_4df0f0:
    // 0x4df0f0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4df0f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4df0f4:
    // 0x4df0f4: 0x254a2568  addiu       $t2, $t2, 0x2568
    ctx->pc = 0x4df0f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9576));
label_4df0f8:
    // 0x4df0f8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4df0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4df0fc:
    // 0x4df0fc: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4df0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4df100:
    // 0x4df100: 0x40f809  jalr        $v0
label_4df104:
    if (ctx->pc == 0x4DF104u) {
        ctx->pc = 0x4DF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF100u;
        // 0x4df104: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF108u;
        goto label_4df108;
    }
    ctx->pc = 0x4DF100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DF108u);
        ctx->pc = 0x4DF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF100u;
        // 0x4df104: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF100u, 0x4DF108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF108u;
label_4df108:
    // 0x4df108: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4df108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4df10c:
    // 0x4df10c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4df10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4df110:
    // 0x4df110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4df110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4df114:
    // 0x4df114: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4df114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4df118:
    // 0x4df118: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4df118u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4df11c:
    // 0x4df11c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4df11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4df120:
    // 0x4df120: 0xc10c1bb  jal         func_4306EC
label_4df124:
    if (ctx->pc == 0x4DF124u) {
        ctx->pc = 0x4DF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF120u;
        // 0x4df124: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF128u;
        goto label_4df128;
    }
    ctx->pc = 0x4DF120u;
    SET_GPR_U32(ctx, 31, 0x4DF128u);
    ctx->pc = 0x4DF124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF120u;
    // 0x4df124: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DF120u, 0x4DF128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF128u;
label_4df128:
    // 0x4df128: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4df12c:
    if (ctx->pc == 0x4DF12Cu) {
        ctx->pc = 0x4DF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF128u;
        // 0x4df12c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF130u;
        goto label_4df130;
    }
    ctx->pc = 0x4DF128u;
    {
        const bool branch_taken_0x4df128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df128) {
            ctx->pc = 0x4DF12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF128u;
            // 0x4df12c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF13Cu;
            goto label_4df13c;
        }
    }
    ctx->pc = 0x4DF130u;
label_4df130:
    // 0x4df130: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4df130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4df134:
    // 0x4df134: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4df134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4df138:
    // 0x4df138: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4df138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4df13c:
    // 0x4df13c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4df13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4df140:
    // 0x4df140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4df140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4df144:
    // 0x4df144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4df144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4df148:
    // 0x4df148: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4df148u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4df14c:
    // 0x4df14c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4df14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4df150:
    // 0x4df150: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4df150u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4df154:
    // 0x4df154: 0xc10c1bb  jal         func_4306EC
label_4df158:
    if (ctx->pc == 0x4DF158u) {
        ctx->pc = 0x4DF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF154u;
        // 0x4df158: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF15Cu;
        goto label_4df15c;
    }
    ctx->pc = 0x4DF154u;
    SET_GPR_U32(ctx, 31, 0x4DF15Cu);
    ctx->pc = 0x4DF158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF154u;
    // 0x4df158: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DF154u, 0x4DF15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF15Cu;
label_4df15c:
    // 0x4df15c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4df15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4df160:
    // 0x4df160: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4df164:
    if (ctx->pc == 0x4DF164u) {
        ctx->pc = 0x4DF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF160u;
        // 0x4df164: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF168u;
        goto label_4df168;
    }
    ctx->pc = 0x4DF160u;
    {
        const bool branch_taken_0x4df160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF160u;
        // 0x4df164: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df160) {
            ctx->pc = 0x4DF184u;
            goto label_4df184;
        }
    }
    ctx->pc = 0x4DF168u;
label_4df168:
    // 0x4df168: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4df168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4df16c:
    // 0x4df16c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4df16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4df170:
    // 0x4df170: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4df170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4df174:
    // 0x4df174: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4df174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4df178:
    // 0x4df178: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4df178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4df17c:
    // 0x4df17c: 0x60f809  jalr        $v1
label_4df180:
    if (ctx->pc == 0x4DF180u) {
        ctx->pc = 0x4DF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF17Cu;
        // 0x4df180: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF184u;
        goto label_4df184;
    }
    ctx->pc = 0x4DF17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DF184u);
        ctx->pc = 0x4DF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF17Cu;
        // 0x4df180: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF17Cu, 0x4DF184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF184u;
label_4df184:
    // 0x4df184: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4df184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4df188:
    // 0x4df188: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4df188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4df18c:
    // 0x4df18c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4df18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4df190:
    // 0x4df190: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4df190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4df194:
    // 0x4df194: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4df194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4df198:
    // 0x4df198: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4df198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4df19c:
    // 0x4df19c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4df19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4df1a0:
    // 0x4df1a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4df1a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4df1a4:
    // 0x4df1a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4df1a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4df1a8:
    // 0x4df1a8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4df1a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4df1ac:
    // 0x4df1ac: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4df1acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4df1b0:
    // 0x4df1b0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4df1b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df1b4:
    // 0x4df1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4df1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4df1b8:
    // 0x4df1b8: 0x3e00008  jr          $ra
label_4df1bc:
    if (ctx->pc == 0x4DF1BCu) {
        ctx->pc = 0x4DF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF1B8u;
        // 0x4df1bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF1C0u;
        goto label_fallthrough_0x4df1b8;
    }
    ctx->pc = 0x4DF1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF1B8u;
        // 0x4df1bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4df1b8:
    ctx->pc = 0x4DF1C0u;
}
