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

// Function: sub_001FA9B0
// Address: 0x1fa9b0 - 0x1fad40
void sub_001FA9B0_0x1fa9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA9B0_0x1fa9b0");
#endif

    switch (ctx->pc) {
        case 0x1fa9b0u: goto label_1fa9b0;
        case 0x1fa9b4u: goto label_1fa9b4;
        case 0x1fa9b8u: goto label_1fa9b8;
        case 0x1fa9bcu: goto label_1fa9bc;
        case 0x1fa9c0u: goto label_1fa9c0;
        case 0x1fa9c4u: goto label_1fa9c4;
        case 0x1fa9c8u: goto label_1fa9c8;
        case 0x1fa9ccu: goto label_1fa9cc;
        case 0x1fa9d0u: goto label_1fa9d0;
        case 0x1fa9d4u: goto label_1fa9d4;
        case 0x1fa9d8u: goto label_1fa9d8;
        case 0x1fa9dcu: goto label_1fa9dc;
        case 0x1fa9e0u: goto label_1fa9e0;
        case 0x1fa9e4u: goto label_1fa9e4;
        case 0x1fa9e8u: goto label_1fa9e8;
        case 0x1fa9ecu: goto label_1fa9ec;
        case 0x1fa9f0u: goto label_1fa9f0;
        case 0x1fa9f4u: goto label_1fa9f4;
        case 0x1fa9f8u: goto label_1fa9f8;
        case 0x1fa9fcu: goto label_1fa9fc;
        case 0x1faa00u: goto label_1faa00;
        case 0x1faa04u: goto label_1faa04;
        case 0x1faa08u: goto label_1faa08;
        case 0x1faa0cu: goto label_1faa0c;
        case 0x1faa10u: goto label_1faa10;
        case 0x1faa14u: goto label_1faa14;
        case 0x1faa18u: goto label_1faa18;
        case 0x1faa1cu: goto label_1faa1c;
        case 0x1faa20u: goto label_1faa20;
        case 0x1faa24u: goto label_1faa24;
        case 0x1faa28u: goto label_1faa28;
        case 0x1faa2cu: goto label_1faa2c;
        case 0x1faa30u: goto label_1faa30;
        case 0x1faa34u: goto label_1faa34;
        case 0x1faa38u: goto label_1faa38;
        case 0x1faa3cu: goto label_1faa3c;
        case 0x1faa40u: goto label_1faa40;
        case 0x1faa44u: goto label_1faa44;
        case 0x1faa48u: goto label_1faa48;
        case 0x1faa4cu: goto label_1faa4c;
        case 0x1faa50u: goto label_1faa50;
        case 0x1faa54u: goto label_1faa54;
        case 0x1faa58u: goto label_1faa58;
        case 0x1faa5cu: goto label_1faa5c;
        case 0x1faa60u: goto label_1faa60;
        case 0x1faa64u: goto label_1faa64;
        case 0x1faa68u: goto label_1faa68;
        case 0x1faa6cu: goto label_1faa6c;
        case 0x1faa70u: goto label_1faa70;
        case 0x1faa74u: goto label_1faa74;
        case 0x1faa78u: goto label_1faa78;
        case 0x1faa7cu: goto label_1faa7c;
        case 0x1faa80u: goto label_1faa80;
        case 0x1faa84u: goto label_1faa84;
        case 0x1faa88u: goto label_1faa88;
        case 0x1faa8cu: goto label_1faa8c;
        case 0x1faa90u: goto label_1faa90;
        case 0x1faa94u: goto label_1faa94;
        case 0x1faa98u: goto label_1faa98;
        case 0x1faa9cu: goto label_1faa9c;
        case 0x1faaa0u: goto label_1faaa0;
        case 0x1faaa4u: goto label_1faaa4;
        case 0x1faaa8u: goto label_1faaa8;
        case 0x1faaacu: goto label_1faaac;
        case 0x1faab0u: goto label_1faab0;
        case 0x1faab4u: goto label_1faab4;
        case 0x1faab8u: goto label_1faab8;
        case 0x1faabcu: goto label_1faabc;
        case 0x1faac0u: goto label_1faac0;
        case 0x1faac4u: goto label_1faac4;
        case 0x1faac8u: goto label_1faac8;
        case 0x1faaccu: goto label_1faacc;
        case 0x1faad0u: goto label_1faad0;
        case 0x1faad4u: goto label_1faad4;
        case 0x1faad8u: goto label_1faad8;
        case 0x1faadcu: goto label_1faadc;
        case 0x1faae0u: goto label_1faae0;
        case 0x1faae4u: goto label_1faae4;
        case 0x1faae8u: goto label_1faae8;
        case 0x1faaecu: goto label_1faaec;
        case 0x1faaf0u: goto label_1faaf0;
        case 0x1faaf4u: goto label_1faaf4;
        case 0x1faaf8u: goto label_1faaf8;
        case 0x1faafcu: goto label_1faafc;
        case 0x1fab00u: goto label_1fab00;
        case 0x1fab04u: goto label_1fab04;
        case 0x1fab08u: goto label_1fab08;
        case 0x1fab0cu: goto label_1fab0c;
        case 0x1fab10u: goto label_1fab10;
        case 0x1fab14u: goto label_1fab14;
        case 0x1fab18u: goto label_1fab18;
        case 0x1fab1cu: goto label_1fab1c;
        case 0x1fab20u: goto label_1fab20;
        case 0x1fab24u: goto label_1fab24;
        case 0x1fab28u: goto label_1fab28;
        case 0x1fab2cu: goto label_1fab2c;
        case 0x1fab30u: goto label_1fab30;
        case 0x1fab34u: goto label_1fab34;
        case 0x1fab38u: goto label_1fab38;
        case 0x1fab3cu: goto label_1fab3c;
        case 0x1fab40u: goto label_1fab40;
        case 0x1fab44u: goto label_1fab44;
        case 0x1fab48u: goto label_1fab48;
        case 0x1fab4cu: goto label_1fab4c;
        case 0x1fab50u: goto label_1fab50;
        case 0x1fab54u: goto label_1fab54;
        case 0x1fab58u: goto label_1fab58;
        case 0x1fab5cu: goto label_1fab5c;
        case 0x1fab60u: goto label_1fab60;
        case 0x1fab64u: goto label_1fab64;
        case 0x1fab68u: goto label_1fab68;
        case 0x1fab6cu: goto label_1fab6c;
        case 0x1fab70u: goto label_1fab70;
        case 0x1fab74u: goto label_1fab74;
        case 0x1fab78u: goto label_1fab78;
        case 0x1fab7cu: goto label_1fab7c;
        case 0x1fab80u: goto label_1fab80;
        case 0x1fab84u: goto label_1fab84;
        case 0x1fab88u: goto label_1fab88;
        case 0x1fab8cu: goto label_1fab8c;
        case 0x1fab90u: goto label_1fab90;
        case 0x1fab94u: goto label_1fab94;
        case 0x1fab98u: goto label_1fab98;
        case 0x1fab9cu: goto label_1fab9c;
        case 0x1faba0u: goto label_1faba0;
        case 0x1faba4u: goto label_1faba4;
        case 0x1faba8u: goto label_1faba8;
        case 0x1fabacu: goto label_1fabac;
        case 0x1fabb0u: goto label_1fabb0;
        case 0x1fabb4u: goto label_1fabb4;
        case 0x1fabb8u: goto label_1fabb8;
        case 0x1fabbcu: goto label_1fabbc;
        case 0x1fabc0u: goto label_1fabc0;
        case 0x1fabc4u: goto label_1fabc4;
        case 0x1fabc8u: goto label_1fabc8;
        case 0x1fabccu: goto label_1fabcc;
        case 0x1fabd0u: goto label_1fabd0;
        case 0x1fabd4u: goto label_1fabd4;
        case 0x1fabd8u: goto label_1fabd8;
        case 0x1fabdcu: goto label_1fabdc;
        case 0x1fabe0u: goto label_1fabe0;
        case 0x1fabe4u: goto label_1fabe4;
        case 0x1fabe8u: goto label_1fabe8;
        case 0x1fabecu: goto label_1fabec;
        case 0x1fabf0u: goto label_1fabf0;
        case 0x1fabf4u: goto label_1fabf4;
        case 0x1fabf8u: goto label_1fabf8;
        case 0x1fabfcu: goto label_1fabfc;
        case 0x1fac00u: goto label_1fac00;
        case 0x1fac04u: goto label_1fac04;
        case 0x1fac08u: goto label_1fac08;
        case 0x1fac0cu: goto label_1fac0c;
        case 0x1fac10u: goto label_1fac10;
        case 0x1fac14u: goto label_1fac14;
        case 0x1fac18u: goto label_1fac18;
        case 0x1fac1cu: goto label_1fac1c;
        case 0x1fac20u: goto label_1fac20;
        case 0x1fac24u: goto label_1fac24;
        case 0x1fac28u: goto label_1fac28;
        case 0x1fac2cu: goto label_1fac2c;
        case 0x1fac30u: goto label_1fac30;
        case 0x1fac34u: goto label_1fac34;
        case 0x1fac38u: goto label_1fac38;
        case 0x1fac3cu: goto label_1fac3c;
        case 0x1fac40u: goto label_1fac40;
        case 0x1fac44u: goto label_1fac44;
        case 0x1fac48u: goto label_1fac48;
        case 0x1fac4cu: goto label_1fac4c;
        case 0x1fac50u: goto label_1fac50;
        case 0x1fac54u: goto label_1fac54;
        case 0x1fac58u: goto label_1fac58;
        case 0x1fac5cu: goto label_1fac5c;
        case 0x1fac60u: goto label_1fac60;
        case 0x1fac64u: goto label_1fac64;
        case 0x1fac68u: goto label_1fac68;
        case 0x1fac6cu: goto label_1fac6c;
        case 0x1fac70u: goto label_1fac70;
        case 0x1fac74u: goto label_1fac74;
        case 0x1fac78u: goto label_1fac78;
        case 0x1fac7cu: goto label_1fac7c;
        case 0x1fac80u: goto label_1fac80;
        case 0x1fac84u: goto label_1fac84;
        case 0x1fac88u: goto label_1fac88;
        case 0x1fac8cu: goto label_1fac8c;
        case 0x1fac90u: goto label_1fac90;
        case 0x1fac94u: goto label_1fac94;
        case 0x1fac98u: goto label_1fac98;
        case 0x1fac9cu: goto label_1fac9c;
        case 0x1faca0u: goto label_1faca0;
        case 0x1faca4u: goto label_1faca4;
        case 0x1faca8u: goto label_1faca8;
        case 0x1facacu: goto label_1facac;
        case 0x1facb0u: goto label_1facb0;
        case 0x1facb4u: goto label_1facb4;
        case 0x1facb8u: goto label_1facb8;
        case 0x1facbcu: goto label_1facbc;
        case 0x1facc0u: goto label_1facc0;
        case 0x1facc4u: goto label_1facc4;
        case 0x1facc8u: goto label_1facc8;
        case 0x1facccu: goto label_1faccc;
        case 0x1facd0u: goto label_1facd0;
        case 0x1facd4u: goto label_1facd4;
        case 0x1facd8u: goto label_1facd8;
        case 0x1facdcu: goto label_1facdc;
        case 0x1face0u: goto label_1face0;
        case 0x1face4u: goto label_1face4;
        case 0x1face8u: goto label_1face8;
        case 0x1facecu: goto label_1facec;
        case 0x1facf0u: goto label_1facf0;
        case 0x1facf4u: goto label_1facf4;
        case 0x1facf8u: goto label_1facf8;
        case 0x1facfcu: goto label_1facfc;
        case 0x1fad00u: goto label_1fad00;
        case 0x1fad04u: goto label_1fad04;
        case 0x1fad08u: goto label_1fad08;
        case 0x1fad0cu: goto label_1fad0c;
        case 0x1fad10u: goto label_1fad10;
        case 0x1fad14u: goto label_1fad14;
        case 0x1fad18u: goto label_1fad18;
        case 0x1fad1cu: goto label_1fad1c;
        case 0x1fad20u: goto label_1fad20;
        case 0x1fad24u: goto label_1fad24;
        case 0x1fad28u: goto label_1fad28;
        case 0x1fad2cu: goto label_1fad2c;
        case 0x1fad30u: goto label_1fad30;
        case 0x1fad34u: goto label_1fad34;
        case 0x1fad38u: goto label_1fad38;
        case 0x1fad3cu: goto label_1fad3c;
        default: break;
    }

    ctx->pc = 0x1fa9b0u;

label_1fa9b0:
    // 0x1fa9b0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1fa9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1fa9b4:
    // 0x1fa9b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fa9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fa9b8:
    // 0x1fa9b8: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1fa9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_1fa9bc:
    // 0x1fa9bc: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1fa9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_1fa9c0:
    // 0x1fa9c0: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1fa9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_1fa9c4:
    // 0x1fa9c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa9c8:
    // 0x1fa9c8: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1fa9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_1fa9cc:
    // 0x1fa9cc: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1fa9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_1fa9d0:
    // 0x1fa9d0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1fa9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1fa9d4:
    // 0x1fa9d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa9d8:
    // 0x1fa9d8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fa9d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fa9dc:
    // 0x1fa9dc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fa9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fa9e0:
    // 0x1fa9e0: 0x40f809  jalr        $v0
label_1fa9e4:
    if (ctx->pc == 0x1FA9E4u) {
        ctx->pc = 0x1FA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9E0u;
        // 0x1fa9e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA9E8u;
        goto label_1fa9e8;
    }
    ctx->pc = 0x1FA9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA9E8u);
        ctx->pc = 0x1FA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9E0u;
        // 0x1fa9e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA9E0u, 0x1FA9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA9E8u;
label_1fa9e8:
    // 0x1fa9e8: 0x8e2700e0  lw          $a3, 0xE0($s1)
    ctx->pc = 0x1fa9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1fa9ec:
    // 0x1fa9ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa9f0:
    // 0x1fa9f0: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_1fa9f4:
    // 0x1fa9f4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fa9f8:
    // 0x1fa9f8: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x1fa9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fa9fc:
    // 0x1fa9fc: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x1fa9fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
label_1faa00:
    // 0x1faa00: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x1faa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_1faa04:
    // 0x1faa04: 0x60f809  jalr        $v1
label_1faa08:
    if (ctx->pc == 0x1FAA08u) {
        ctx->pc = 0x1FAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA04u;
        // 0x1faa08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA0Cu;
        goto label_1faa0c;
    }
    ctx->pc = 0x1FAA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FAA0Cu);
        ctx->pc = 0x1FAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA04u;
        // 0x1faa08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAA04u, 0x1FAA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAA0Cu;
label_1faa0c:
    // 0x1faa0c: 0x2e0203e9  sltiu       $v0, $s0, 0x3E9
    ctx->pc = 0x1faa0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1001) ? 1 : 0);
label_1faa10:
    // 0x1faa10: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1faa14:
    if (ctx->pc == 0x1FAA14u) {
        ctx->pc = 0x1FAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA10u;
        // 0x1faa14: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA18u;
        goto label_1faa18;
    }
    ctx->pc = 0x1FAA10u;
    {
        const bool branch_taken_0x1faa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA10u;
        // 0x1faa14: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa10) {
            ctx->pc = 0x1FAA6Cu;
            goto label_1faa6c;
        }
    }
    ctx->pc = 0x1FAA18u;
label_1faa18:
    // 0x1faa18: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x1faa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1faa1c:
    // 0x1faa1c: 0xc073478  jal         func_1CD1E0
label_1faa20:
    if (ctx->pc == 0x1FAA20u) {
        ctx->pc = 0x1FAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA1Cu;
        // 0x1faa20: 0x24a57c38  addiu       $a1, $a1, 0x7C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA24u;
        goto label_1faa24;
    }
    ctx->pc = 0x1FAA1Cu;
    SET_GPR_U32(ctx, 31, 0x1FAA24u);
    ctx->pc = 0x1FAA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA1Cu;
    // 0x1faa20: 0x24a57c38  addiu       $a1, $a1, 0x7C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1FAA1Cu, 0x1FAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA24u;
label_1faa24:
    // 0x1faa24: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1faa28:
    if (ctx->pc == 0x1FAA28u) {
        ctx->pc = 0x1FAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA24u;
        // 0x1faa28: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA2Cu;
        goto label_1faa2c;
    }
    ctx->pc = 0x1FAA24u;
    {
        const bool branch_taken_0x1faa24 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1FAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA24u;
        // 0x1faa28: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa24) {
            ctx->pc = 0x1FAA40u;
            goto label_1faa40;
        }
    }
    ctx->pc = 0x1FAA2Cu;
label_1faa2c:
    // 0x1faa2c: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1faa2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1faa30:
    // 0x1faa30: 0x0  nop
    ctx->pc = 0x1faa30u;
    // NOP
label_1faa34:
    // 0x1faa34: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1faa34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1faa38:
    // 0x1faa38: 0x10000007  b           . + 4 + (0x7 << 2)
label_1faa3c:
    if (ctx->pc == 0x1FAA3Cu) {
        ctx->pc = 0x1FAA40u;
        goto label_1faa40;
    }
    ctx->pc = 0x1FAA38u;
    {
        const bool branch_taken_0x1faa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa38) {
            ctx->pc = 0x1FAA58u;
            goto label_1faa58;
        }
    }
    ctx->pc = 0x1FAA40u;
label_1faa40:
    // 0x1faa40: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1faa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1faa44:
    // 0x1faa44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1faa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1faa48:
    // 0x1faa48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1faa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1faa4c:
    // 0x1faa4c: 0x0  nop
    ctx->pc = 0x1faa4cu;
    // NOP
label_1faa50:
    // 0x1faa50: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1faa50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1faa54:
    // 0x1faa54: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1faa54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1faa58:
    // 0x1faa58: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1faa58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1faa5c:
    // 0x1faa5c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1faa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_1faa60:
    // 0x1faa60: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1faa60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1faa64:
    // 0x1faa64: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1faa68:
    if (ctx->pc == 0x1FAA68u) {
        ctx->pc = 0x1FAA6Cu;
        goto label_1faa6c;
    }
    ctx->pc = 0x1FAA64u;
    {
        const bool branch_taken_0x1faa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa64) {
            ctx->pc = 0x1FABA0u;
            goto label_1faba0;
        }
    }
    ctx->pc = 0x1FAA6Cu;
label_1faa6c:
    // 0x1faa6c: 0x2e0207d1  sltiu       $v0, $s0, 0x7D1
    ctx->pc = 0x1faa6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2001) ? 1 : 0);
label_1faa70:
    // 0x1faa70: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1faa74:
    if (ctx->pc == 0x1FAA74u) {
        ctx->pc = 0x1FAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA70u;
        // 0x1faa74: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA78u;
        goto label_1faa78;
    }
    ctx->pc = 0x1FAA70u;
    {
        const bool branch_taken_0x1faa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA70u;
        // 0x1faa74: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa70) {
            ctx->pc = 0x1FAAD0u;
            goto label_1faad0;
        }
    }
    ctx->pc = 0x1FAA78u;
label_1faa78:
    // 0x1faa78: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x1faa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1faa7c:
    // 0x1faa7c: 0xc073478  jal         func_1CD1E0
label_1faa80:
    if (ctx->pc == 0x1FAA80u) {
        ctx->pc = 0x1FAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA7Cu;
        // 0x1faa80: 0x24a57c40  addiu       $a1, $a1, 0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA84u;
        goto label_1faa84;
    }
    ctx->pc = 0x1FAA7Cu;
    SET_GPR_U32(ctx, 31, 0x1FAA84u);
    ctx->pc = 0x1FAA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA7Cu;
    // 0x1faa80: 0x24a57c40  addiu       $a1, $a1, 0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1FAA7Cu, 0x1FAA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA84u;
label_1faa84:
    // 0x1faa84: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1faa88:
    if (ctx->pc == 0x1FAA88u) {
        ctx->pc = 0x1FAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA84u;
        // 0x1faa88: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA8Cu;
        goto label_1faa8c;
    }
    ctx->pc = 0x1FAA84u;
    {
        const bool branch_taken_0x1faa84 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1FAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA84u;
        // 0x1faa88: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa84) {
            ctx->pc = 0x1FAAA0u;
            goto label_1faaa0;
        }
    }
    ctx->pc = 0x1FAA8Cu;
label_1faa8c:
    // 0x1faa8c: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1faa8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1faa90:
    // 0x1faa90: 0x0  nop
    ctx->pc = 0x1faa90u;
    // NOP
label_1faa94:
    // 0x1faa94: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1faa94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1faa98:
    // 0x1faa98: 0x10000007  b           . + 4 + (0x7 << 2)
label_1faa9c:
    if (ctx->pc == 0x1FAA9Cu) {
        ctx->pc = 0x1FAAA0u;
        goto label_1faaa0;
    }
    ctx->pc = 0x1FAA98u;
    {
        const bool branch_taken_0x1faa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa98) {
            ctx->pc = 0x1FAAB8u;
            goto label_1faab8;
        }
    }
    ctx->pc = 0x1FAAA0u;
label_1faaa0:
    // 0x1faaa0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1faaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1faaa4:
    // 0x1faaa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1faaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1faaa8:
    // 0x1faaa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1faaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1faaac:
    // 0x1faaac: 0x0  nop
    ctx->pc = 0x1faaacu;
    // NOP
label_1faab0:
    // 0x1faab0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1faab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1faab4:
    // 0x1faab4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1faab4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1faab8:
    // 0x1faab8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1faab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_1faabc:
    // 0x1faabc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1faabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1faac0:
    // 0x1faac0: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x1faac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
label_1faac4:
    // 0x1faac4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1faac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1faac8:
    // 0x1faac8: 0x10000035  b           . + 4 + (0x35 << 2)
label_1faacc:
    if (ctx->pc == 0x1FAACCu) {
        ctx->pc = 0x1FAAD0u;
        goto label_1faad0;
    }
    ctx->pc = 0x1FAAC8u;
    {
        const bool branch_taken_0x1faac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faac8) {
            ctx->pc = 0x1FABA0u;
            goto label_1faba0;
        }
    }
    ctx->pc = 0x1FAAD0u;
label_1faad0:
    // 0x1faad0: 0x2e020bb9  sltiu       $v0, $s0, 0xBB9
    ctx->pc = 0x1faad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3001) ? 1 : 0);
label_1faad4:
    // 0x1faad4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1faad8:
    if (ctx->pc == 0x1FAAD8u) {
        ctx->pc = 0x1FAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAD4u;
        // 0x1faad8: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAADCu;
        goto label_1faadc;
    }
    ctx->pc = 0x1FAAD4u;
    {
        const bool branch_taken_0x1faad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAD4u;
        // 0x1faad8: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faad4) {
            ctx->pc = 0x1FAB38u;
            goto label_1fab38;
        }
    }
    ctx->pc = 0x1FAADCu;
label_1faadc:
    // 0x1faadc: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x1faadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1faae0:
    // 0x1faae0: 0xc073478  jal         func_1CD1E0
label_1faae4:
    if (ctx->pc == 0x1FAAE4u) {
        ctx->pc = 0x1FAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAE0u;
        // 0x1faae4: 0x24a57c48  addiu       $a1, $a1, 0x7C48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAAE8u;
        goto label_1faae8;
    }
    ctx->pc = 0x1FAAE0u;
    SET_GPR_U32(ctx, 31, 0x1FAAE8u);
    ctx->pc = 0x1FAAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAAE0u;
    // 0x1faae4: 0x24a57c48  addiu       $a1, $a1, 0x7C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1FAAE0u, 0x1FAAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAAE8u;
label_1faae8:
    // 0x1faae8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1faaec:
    if (ctx->pc == 0x1FAAECu) {
        ctx->pc = 0x1FAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAE8u;
        // 0x1faaec: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAAF0u;
        goto label_1faaf0;
    }
    ctx->pc = 0x1FAAE8u;
    {
        const bool branch_taken_0x1faae8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1FAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAE8u;
        // 0x1faaec: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faae8) {
            ctx->pc = 0x1FAB04u;
            goto label_1fab04;
        }
    }
    ctx->pc = 0x1FAAF0u;
label_1faaf0:
    // 0x1faaf0: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1faaf0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1faaf4:
    // 0x1faaf4: 0x0  nop
    ctx->pc = 0x1faaf4u;
    // NOP
label_1faaf8:
    // 0x1faaf8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1faaf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1faafc:
    // 0x1faafc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fab00:
    if (ctx->pc == 0x1FAB00u) {
        ctx->pc = 0x1FAB04u;
        goto label_1fab04;
    }
    ctx->pc = 0x1FAAFCu;
    {
        const bool branch_taken_0x1faafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faafc) {
            ctx->pc = 0x1FAB1Cu;
            goto label_1fab1c;
        }
    }
    ctx->pc = 0x1FAB04u;
label_1fab04:
    // 0x1fab04: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1fab04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1fab08:
    // 0x1fab08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fab08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fab0c:
    // 0x1fab0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fab0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fab10:
    // 0x1fab10: 0x0  nop
    ctx->pc = 0x1fab10u;
    // NOP
label_1fab14:
    // 0x1fab14: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fab14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fab18:
    // 0x1fab18: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fab18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fab1c:
    // 0x1fab1c: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x1fab1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
label_1fab20:
    // 0x1fab20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1fab20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fab24:
    // 0x1fab24: 0x3c01453b  lui         $at, 0x453B
    ctx->pc = 0x1fab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17723 << 16));
label_1fab28:
    // 0x1fab28: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1fab28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_1fab2c:
    // 0x1fab2c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1fab2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fab30:
    // 0x1fab30: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1fab34:
    if (ctx->pc == 0x1FAB34u) {
        ctx->pc = 0x1FAB38u;
        goto label_1fab38;
    }
    ctx->pc = 0x1FAB30u;
    {
        const bool branch_taken_0x1fab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fab30) {
            ctx->pc = 0x1FABA0u;
            goto label_1faba0;
        }
    }
    ctx->pc = 0x1FAB38u;
label_1fab38:
    // 0x1fab38: 0x2e020fa1  sltiu       $v0, $s0, 0xFA1
    ctx->pc = 0x1fab38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4001) ? 1 : 0);
label_1fab3c:
    // 0x1fab3c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_1fab40:
    if (ctx->pc == 0x1FAB40u) {
        ctx->pc = 0x1FAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB3Cu;
        // 0x1fab40: 0x8e250064  lw          $a1, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAB44u;
        goto label_1fab44;
    }
    ctx->pc = 0x1FAB3Cu;
    {
        const bool branch_taken_0x1fab3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fab3c) {
            ctx->pc = 0x1FAB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAB3Cu;
            // 0x1fab40: 0x8e250064  lw          $a1, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FABD0u;
            goto label_1fabd0;
        }
    }
    ctx->pc = 0x1FAB44u;
label_1fab44:
    // 0x1fab44: 0xc067b9c  jal         func_19EE70
label_1fab48:
    if (ctx->pc == 0x1FAB48u) {
        ctx->pc = 0x1FAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB44u;
        // 0x1fab48: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAB4Cu;
        goto label_1fab4c;
    }
    ctx->pc = 0x1FAB44u;
    SET_GPR_U32(ctx, 31, 0x1FAB4Cu);
    ctx->pc = 0x1FAB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAB44u;
    // 0x1fab48: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FAB44u, 0x1FAB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB4Cu;
label_1fab4c:
    // 0x1fab4c: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x1fab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1fab50:
    // 0x1fab50: 0xc073478  jal         func_1CD1E0
label_1fab54:
    if (ctx->pc == 0x1FAB54u) {
        ctx->pc = 0x1FAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB50u;
        // 0x1fab54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAB58u;
        goto label_1fab58;
    }
    ctx->pc = 0x1FAB50u;
    SET_GPR_U32(ctx, 31, 0x1FAB58u);
    ctx->pc = 0x1FAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAB50u;
    // 0x1fab54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1FAB50u, 0x1FAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB58u;
label_1fab58:
    // 0x1fab58: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1fab5c:
    if (ctx->pc == 0x1FAB5Cu) {
        ctx->pc = 0x1FAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB58u;
        // 0x1fab5c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAB60u;
        goto label_1fab60;
    }
    ctx->pc = 0x1FAB58u;
    {
        const bool branch_taken_0x1fab58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1FAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB58u;
        // 0x1fab5c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab58) {
            ctx->pc = 0x1FAB74u;
            goto label_1fab74;
        }
    }
    ctx->pc = 0x1FAB60u;
label_1fab60:
    // 0x1fab60: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1fab60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fab64:
    // 0x1fab64: 0x0  nop
    ctx->pc = 0x1fab64u;
    // NOP
label_1fab68:
    // 0x1fab68: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fab68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fab6c:
    // 0x1fab6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fab70:
    if (ctx->pc == 0x1FAB70u) {
        ctx->pc = 0x1FAB74u;
        goto label_1fab74;
    }
    ctx->pc = 0x1FAB6Cu;
    {
        const bool branch_taken_0x1fab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fab6c) {
            ctx->pc = 0x1FAB8Cu;
            goto label_1fab8c;
        }
    }
    ctx->pc = 0x1FAB74u;
label_1fab74:
    // 0x1fab74: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1fab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1fab78:
    // 0x1fab78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fab7c:
    // 0x1fab7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fab7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fab80:
    // 0x1fab80: 0x0  nop
    ctx->pc = 0x1fab80u;
    // NOP
label_1fab84:
    // 0x1fab84: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fab84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fab88:
    // 0x1fab88: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fab88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fab8c:
    // 0x1fab8c: 0x3c01453b  lui         $at, 0x453B
    ctx->pc = 0x1fab8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17723 << 16));
label_1fab90:
    // 0x1fab90: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1fab90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_1fab94:
    // 0x1fab94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1fab94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fab98:
    // 0x1fab98: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x1fab98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
label_1fab9c:
    // 0x1fab9c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1fab9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1faba0:
    // 0x1faba0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1faba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1faba4:
    // 0x1faba4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1faba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1faba8:
    // 0x1faba8: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1faba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1fabac:
    // 0x1fabac: 0xc0cdd5a  jal         func_337568
label_1fabb0:
    if (ctx->pc == 0x1FABB0u) {
        ctx->pc = 0x1FABB4u;
        goto label_1fabb4;
    }
    ctx->pc = 0x1FABACu;
    SET_GPR_U32(ctx, 31, 0x1FABB4u);
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1FABACu, 0x1FABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABB4u;
label_1fabb4:
    // 0x1fabb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fabb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1fabb8:
    // 0x1fabb8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1fabb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1fabbc:
    // 0x1fabbc: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x1fabbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1fabc0:
    // 0x1fabc0: 0xc073476  jal         func_1CD1D8
label_1fabc4:
    if (ctx->pc == 0x1FABC4u) {
        ctx->pc = 0x1FABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABC0u;
        // 0x1fabc4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FABC8u;
        goto label_1fabc8;
    }
    ctx->pc = 0x1FABC0u;
    SET_GPR_U32(ctx, 31, 0x1FABC8u);
    ctx->pc = 0x1FABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FABC0u;
    // 0x1fabc4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1FABC0u, 0x1FABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABC8u;
label_1fabc8:
    // 0x1fabc8: 0x10000017  b           . + 4 + (0x17 << 2)
label_1fabcc:
    if (ctx->pc == 0x1FABCCu) {
        ctx->pc = 0x1FABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABC8u;
        // 0x1fabcc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FABD0u;
        goto label_1fabd0;
    }
    ctx->pc = 0x1FABC8u;
    {
        const bool branch_taken_0x1fabc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABC8u;
        // 0x1fabcc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabc8) {
            ctx->pc = 0x1FAC28u;
            goto label_1fac28;
        }
    }
    ctx->pc = 0x1FABD0u;
label_1fabd0:
    // 0x1fabd0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_1fabd4:
    if (ctx->pc == 0x1FABD4u) {
        ctx->pc = 0x1FABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABD0u;
        // 0x1fabd4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FABD8u;
        goto label_1fabd8;
    }
    ctx->pc = 0x1FABD0u;
    {
        const bool branch_taken_0x1fabd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABD0u;
        // 0x1fabd4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabd0) {
            ctx->pc = 0x1FAC10u;
            goto label_1fac10;
        }
    }
    ctx->pc = 0x1FABD8u;
label_1fabd8:
    // 0x1fabd8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1fabd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1fabdc:
    // 0x1fabdc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fabe0:
    // 0x1fabe0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1fabe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1fabe4:
    // 0x1fabe4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1fabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1fabe8:
    // 0x1fabe8: 0x40f809  jalr        $v0
label_1fabec:
    if (ctx->pc == 0x1FABECu) {
        ctx->pc = 0x1FABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABE8u;
        // 0x1fabec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FABF0u;
        goto label_1fabf0;
    }
    ctx->pc = 0x1FABE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FABF0u);
        ctx->pc = 0x1FABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABE8u;
        // 0x1fabec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FABE8u, 0x1FABF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FABF0u;
label_1fabf0:
    // 0x1fabf0: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1fabf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1fabf4:
    // 0x1fabf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fabf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fabf8:
    // 0x1fabf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fabf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fabfc:
    // 0x1fabfc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fac00:
    // 0x1fac00: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1fac00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1fac04:
    // 0x1fac04: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1fac04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1fac08:
    // 0x1fac08: 0x60f809  jalr        $v1
label_1fac0c:
    if (ctx->pc == 0x1FAC0Cu) {
        ctx->pc = 0x1FAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC08u;
        // 0x1fac0c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC10u;
        goto label_1fac10;
    }
    ctx->pc = 0x1FAC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FAC10u);
        ctx->pc = 0x1FAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC08u;
        // 0x1fac0c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC08u, 0x1FAC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAC10u;
label_1fac10:
    // 0x1fac10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fac14:
    // 0x1fac14: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fac14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fac18:
    // 0x1fac18: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fac1c:
    // 0x1fac1c: 0x60f809  jalr        $v1
label_1fac20:
    if (ctx->pc == 0x1FAC20u) {
        ctx->pc = 0x1FAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC1Cu;
        // 0x1fac20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC24u;
        goto label_1fac24;
    }
    ctx->pc = 0x1FAC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FAC24u);
        ctx->pc = 0x1FAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC1Cu;
        // 0x1fac20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC1Cu, 0x1FAC24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAC24u;
label_1fac24:
    // 0x1fac24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fac28:
    // 0x1fac28: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1fac2c:
    if (ctx->pc == 0x1FAC2Cu) {
        ctx->pc = 0x1FAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC28u;
        // 0x1fac2c: 0x26240104  addiu       $a0, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC30u;
        goto label_1fac30;
    }
    ctx->pc = 0x1FAC28u;
    {
        const bool branch_taken_0x1fac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC28u;
        // 0x1fac2c: 0x26240104  addiu       $a0, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac28) {
            ctx->pc = 0x1FAD20u;
            goto label_1fad20;
        }
    }
    ctx->pc = 0x1FAC30u;
label_1fac30:
    // 0x1fac30: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x1fac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1fac34:
    // 0x1fac34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fac34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fac38:
    // 0x1fac38: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x1fac38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1fac3c:
    // 0x1fac3c: 0xc10c313  jal         func_430C4C
label_1fac40:
    if (ctx->pc == 0x1FAC40u) {
        ctx->pc = 0x1FAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC3Cu;
        // 0x1fac40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC44u;
        goto label_1fac44;
    }
    ctx->pc = 0x1FAC3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAC44u);
    ctx->pc = 0x1FAC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC3Cu;
    // 0x1fac40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1FAC3Cu, 0x1FAC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC44u;
label_1fac44:
    // 0x1fac44: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1fac48:
    if (ctx->pc == 0x1FAC48u) {
        ctx->pc = 0x1FAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC44u;
        // 0x1fac48: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC4Cu;
        goto label_1fac4c;
    }
    ctx->pc = 0x1FAC44u;
    {
        const bool branch_taken_0x1fac44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC44u;
        // 0x1fac48: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac44) {
            ctx->pc = 0x1FAD24u;
            goto label_1fad24;
        }
    }
    ctx->pc = 0x1FAC4Cu;
label_1fac4c:
    // 0x1fac4c: 0xc067b9c  jal         func_19EE70
label_1fac50:
    if (ctx->pc == 0x1FAC50u) {
        ctx->pc = 0x1FAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC4Cu;
        // 0x1fac50: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC54u;
        goto label_1fac54;
    }
    ctx->pc = 0x1FAC4Cu;
    SET_GPR_U32(ctx, 31, 0x1FAC54u);
    ctx->pc = 0x1FAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC4Cu;
    // 0x1fac50: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FAC4Cu, 0x1FAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC54u;
label_1fac54:
    // 0x1fac54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fac54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fac58:
    // 0x1fac58: 0xc10c313  jal         func_430C4C
label_1fac5c:
    if (ctx->pc == 0x1FAC5Cu) {
        ctx->pc = 0x1FAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC58u;
        // 0x1fac5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC60u;
        goto label_1fac60;
    }
    ctx->pc = 0x1FAC58u;
    SET_GPR_U32(ctx, 31, 0x1FAC60u);
    ctx->pc = 0x1FAC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC58u;
    // 0x1fac5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1FAC58u, 0x1FAC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC60u;
label_1fac60:
    // 0x1fac60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1fac64:
    if (ctx->pc == 0x1FAC64u) {
        ctx->pc = 0x1FAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC60u;
        // 0x1fac64: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC68u;
        goto label_1fac68;
    }
    ctx->pc = 0x1FAC60u;
    {
        const bool branch_taken_0x1fac60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC60u;
        // 0x1fac64: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac60) {
            ctx->pc = 0x1FAC84u;
            goto label_1fac84;
        }
    }
    ctx->pc = 0x1FAC68u;
label_1fac68:
    // 0x1fac68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fac68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fac6c:
    // 0x1fac6c: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x1fac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_1fac70:
    // 0x1fac70: 0xc044096  jal         func_110258
label_1fac74:
    if (ctx->pc == 0x1FAC74u) {
        ctx->pc = 0x1FAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC70u;
        // 0x1fac74: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC78u;
        goto label_1fac78;
    }
    ctx->pc = 0x1FAC70u;
    SET_GPR_U32(ctx, 31, 0x1FAC78u);
    ctx->pc = 0x1FAC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC70u;
    // 0x1fac74: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x1FAC70u, 0x1FAC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC78u;
label_1fac78:
    // 0x1fac78: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x1fac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_1fac7c:
    // 0x1fac7c: 0x10000024  b           . + 4 + (0x24 << 2)
label_1fac80:
    if (ctx->pc == 0x1FAC80u) {
        ctx->pc = 0x1FAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC7Cu;
        // 0x1fac80: 0xae2300f8  sw          $v1, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC84u;
        goto label_1fac84;
    }
    ctx->pc = 0x1FAC7Cu;
    {
        const bool branch_taken_0x1fac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC7Cu;
        // 0x1fac80: 0xae2300f8  sw          $v1, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac7c) {
            ctx->pc = 0x1FAD10u;
            goto label_1fad10;
        }
    }
    ctx->pc = 0x1FAC84u;
label_1fac84:
    // 0x1fac84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fac88:
    // 0x1fac88: 0xc10c313  jal         func_430C4C
label_1fac8c:
    if (ctx->pc == 0x1FAC8Cu) {
        ctx->pc = 0x1FAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC88u;
        // 0x1fac8c: 0x24a57c38  addiu       $a1, $a1, 0x7C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC90u;
        goto label_1fac90;
    }
    ctx->pc = 0x1FAC88u;
    SET_GPR_U32(ctx, 31, 0x1FAC90u);
    ctx->pc = 0x1FAC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC88u;
    // 0x1fac8c: 0x24a57c38  addiu       $a1, $a1, 0x7C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1FAC88u, 0x1FAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC90u;
label_1fac90:
    // 0x1fac90: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1fac94:
    if (ctx->pc == 0x1FAC94u) {
        ctx->pc = 0x1FAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC90u;
        // 0x1fac94: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC98u;
        goto label_1fac98;
    }
    ctx->pc = 0x1FAC90u;
    {
        const bool branch_taken_0x1fac90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC90u;
        // 0x1fac94: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac90) {
            ctx->pc = 0x1FACF0u;
            goto label_1facf0;
        }
    }
    ctx->pc = 0x1FAC98u;
label_1fac98:
    // 0x1fac98: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1fac98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1fac9c:
    // 0x1fac9c: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x1fac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_1faca0:
    // 0x1faca0: 0xc044096  jal         func_110258
label_1faca4:
    if (ctx->pc == 0x1FACA4u) {
        ctx->pc = 0x1FACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACA0u;
        // 0x1faca4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACA8u;
        goto label_1faca8;
    }
    ctx->pc = 0x1FACA0u;
    SET_GPR_U32(ctx, 31, 0x1FACA8u);
    ctx->pc = 0x1FACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACA0u;
    // 0x1faca4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x1FACA0u, 0x1FACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACA8u;
label_1faca8:
    // 0x1faca8: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x1faca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_1facac:
    // 0x1facac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1facacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1facb0:
    // 0x1facb0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1facb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1facb4:
    // 0x1facb4: 0x2484b8a8  addiu       $a0, $a0, -0x4758
    ctx->pc = 0x1facb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
label_1facb8:
    // 0x1facb8: 0xae2300f8  sw          $v1, 0xF8($s1)
    ctx->pc = 0x1facb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
label_1facbc:
    // 0x1facbc: 0xc0cd4fc  jal         func_3353F0
label_1facc0:
    if (ctx->pc == 0x1FACC0u) {
        ctx->pc = 0x1FACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACBCu;
        // 0x1facc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACC4u;
        goto label_1facc4;
    }
    ctx->pc = 0x1FACBCu;
    SET_GPR_U32(ctx, 31, 0x1FACC4u);
    ctx->pc = 0x1FACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACBCu;
    // 0x1facc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1FACBCu, 0x1FACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACC4u;
label_1facc4:
    // 0x1facc4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1facc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1facc8:
    // 0x1facc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1facc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1faccc:
    // 0x1faccc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1facccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1facd0:
    // 0x1facd0: 0x24c67c50  addiu       $a2, $a2, 0x7C50
    ctx->pc = 0x1facd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31824));
label_1facd4:
    // 0x1facd4: 0xc10ca04  jal         func_432810
label_1facd8:
    if (ctx->pc == 0x1FACD8u) {
        ctx->pc = 0x1FACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACD4u;
        // 0x1facd8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACDCu;
        goto label_1facdc;
    }
    ctx->pc = 0x1FACD4u;
    SET_GPR_U32(ctx, 31, 0x1FACDCu);
    ctx->pc = 0x1FACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACD4u;
    // 0x1facd8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1FACD4u, 0x1FACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACDCu;
label_1facdc:
    // 0x1facdc: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1facdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1face0:
    // 0x1face0: 0xc04402c  jal         func_1100B0
label_1face4:
    if (ctx->pc == 0x1FACE4u) {
        ctx->pc = 0x1FACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACE0u;
        // 0x1face4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACE8u;
        goto label_1face8;
    }
    ctx->pc = 0x1FACE0u;
    SET_GPR_U32(ctx, 31, 0x1FACE8u);
    ctx->pc = 0x1FACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACE0u;
    // 0x1face4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100B0u, 0x1FACE0u, 0x1FACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACE8u;
label_1face8:
    // 0x1face8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1facec:
    if (ctx->pc == 0x1FACECu) {
        ctx->pc = 0x1FACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACE8u;
        // 0x1facec: 0xae220100  sw          $v0, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACF0u;
        goto label_1facf0;
    }
    ctx->pc = 0x1FACE8u;
    {
        const bool branch_taken_0x1face8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACE8u;
        // 0x1facec: 0xae220100  sw          $v0, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1face8) {
            ctx->pc = 0x1FAD10u;
            goto label_1fad10;
        }
    }
    ctx->pc = 0x1FACF0u;
label_1facf0:
    // 0x1facf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1facf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1facf4:
    // 0x1facf4: 0xc10c313  jal         func_430C4C
label_1facf8:
    if (ctx->pc == 0x1FACF8u) {
        ctx->pc = 0x1FACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACF4u;
        // 0x1facf8: 0x24a57c40  addiu       $a1, $a1, 0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACFCu;
        goto label_1facfc;
    }
    ctx->pc = 0x1FACF4u;
    SET_GPR_U32(ctx, 31, 0x1FACFCu);
    ctx->pc = 0x1FACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACF4u;
    // 0x1facf8: 0x24a57c40  addiu       $a1, $a1, 0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1FACF4u, 0x1FACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACFCu;
label_1facfc:
    // 0x1facfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1fad00:
    if (ctx->pc == 0x1FAD00u) {
        ctx->pc = 0x1FAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACFCu;
        // 0x1fad00: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD04u;
        goto label_1fad04;
    }
    ctx->pc = 0x1FACFCu;
    {
        const bool branch_taken_0x1facfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACFCu;
        // 0x1fad00: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facfc) {
            ctx->pc = 0x1FAD10u;
            goto label_1fad10;
        }
    }
    ctx->pc = 0x1FAD04u;
label_1fad04:
    // 0x1fad04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fad04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fad08:
    // 0x1fad08: 0xc10c313  jal         func_430C4C
label_1fad0c:
    if (ctx->pc == 0x1FAD0Cu) {
        ctx->pc = 0x1FAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD08u;
        // 0x1fad0c: 0x24a57c48  addiu       $a1, $a1, 0x7C48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD10u;
        goto label_1fad10;
    }
    ctx->pc = 0x1FAD08u;
    SET_GPR_U32(ctx, 31, 0x1FAD10u);
    ctx->pc = 0x1FAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD08u;
    // 0x1fad0c: 0x24a57c48  addiu       $a1, $a1, 0x7C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1FAD08u, 0x1FAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD10u;
label_1fad10:
    // 0x1fad10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fad14:
    // 0x1fad14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fad14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fad18:
    // 0x1fad18: 0xc10c4de  jal         func_431378
label_1fad1c:
    if (ctx->pc == 0x1FAD1Cu) {
        ctx->pc = 0x1FAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD18u;
        // 0x1fad1c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD20u;
        goto label_1fad20;
    }
    ctx->pc = 0x1FAD18u;
    SET_GPR_U32(ctx, 31, 0x1FAD20u);
    ctx->pc = 0x1FAD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD18u;
    // 0x1fad1c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1FAD18u, 0x1FAD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD20u;
label_1fad20:
    // 0x1fad20: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1fad20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1fad24:
    // 0x1fad24: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1fad24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1fad28:
    // 0x1fad28: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1fad28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1fad2c:
    // 0x1fad2c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1fad2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1fad30:
    // 0x1fad30: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1fad30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1fad34:
    // 0x1fad34: 0x3e00008  jr          $ra
label_1fad38:
    if (ctx->pc == 0x1FAD38u) {
        ctx->pc = 0x1FAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD34u;
        // 0x1fad38: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD3Cu;
        goto label_1fad3c;
    }
    ctx->pc = 0x1FAD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD34u;
        // 0x1fad38: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD3Cu;
label_1fad3c:
    // 0x1fad3c: 0x0  nop
    ctx->pc = 0x1fad3cu;
    // NOP
    ctx->pc = 0x1fad40u;
}
